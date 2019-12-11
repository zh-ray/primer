#include "conn_DB.h"
#include "tinyxml2.h"
#include <cstring>
#include <dirent.h>
#include <iostream>
#include <sys/types.h>
#include <vector>

using namespace tinyxml2;

/* void example1()
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile("test.xml");
    const char *content = doc.FirstChildElement("Hello")->GetText();
    std::cout << content << std::endl;
} */

/* void example2()
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile("test1.xml");
    XMLElement *scene = doc.RootElement();
    XMLElement *surface = scene->FirstChildElement("node");
    //std::cout << sizeof(surface) << std::endl;
    while (surface)
    {
        XMLElement *surfaceChild = surface->FirstChildElement();
        const char *content;
        const XMLAttribute *attributeOfSurface = surface->FirstAttribute();
        std::cout << attributeOfSurface->Name() << ":" << attributeOfSurface->Value() << std::endl;
        while (surfaceChild)
        {
            content = surfaceChild->GetText();
            surfaceChild = surfaceChild->NextSiblingElement();
            std::cout << content << std::endl;
        }
        surface = surface->NextSiblingElement();
    }
} */

void dirfiles(string dir_name, vector<string> &files)
{
    DIR *dir;
    const char *dirname = dir_name.c_str();
    dir = opendir(dirname);
    struct dirent *filename;
    while ((filename = readdir(dir)) != NULL)
    {
        if (0 == strcmp(filename->d_name, "\\") || 0 == strcmp(filename->d_name, ".") || 0 == strcmp(filename->d_name, ".."))
            continue;

        files.push_back(filename->d_name);
    }
}

void example3(conn_DB db, string filename)
{
    //sql中的参数
    string file_name, sql_insert, sql_select;
    int tag = 1, flage;
    vector<string> arg;
    file_name = filename;
    filename = "./black/" + filename;
    const char *start = "start_boot";
    tinyxml2::XMLDocument doc; //定义xml数据结构
    //doc.LoadFile(filename.c_str()); //读取xml文件
    doc.LoadFile("./black/cb1c8c0342eec33965140ff3e743cf519adfc644bce5f68b43244dda09e0dc97.xml");
    // xml文件结构为report->file_list->file->(start_boot,restart_boot)->(field, action_list->action->(apiArg_list->apiArg, exInfo_list->exInfo))
    XMLElement *file = doc.RootElement()->FirstChildElement()->FirstChildElement(); //依次读取指定内容
    XMLElement *boot = file->FirstChildElement();

    //std::cout << boot->Name() << std::endl;
    //std::cout << flag << std::endl;
    while (boot)
    {
        flage = *(boot->Name()) == *start ? 0 : 6; //0表示start_boot,6表示reboot_boot
        XMLElement *action = boot->FirstChildElement("action_list")->FirstChildElement();
        //int count = 0;
        while (action)
        {
            string arg_name, arg_value;
            //++count;

            if (string(action->FirstAttribute()->Name()) == "api_name")
            {
                const char *api_name_tmp = action->FirstAttribute()->Value();
                string api_name = api_name_tmp;
                std::cout << api_name << std::endl;
                XMLElement *apiArg = action->FirstChildElement("apiArg_list")->FirstChildElement();
                while (apiArg)
                {
                    const char *apiArg_value_tmp = apiArg->FirstAttribute()->Value();
                    string apiArg_value = apiArg_value_tmp;

                    arg.push_back(apiArg_value);

                    apiArg = apiArg->NextSiblingElement();
                }

                for (int i = 0; i < arg.size(); i++)
                {
                    if (arg[i].size() < 10) //跳过字节大于20的参数
                    {
                        arg_name.push_back(',');
                        arg_name += "arg" + to_string(i);

                        arg_value.push_back(',');
                        arg_value.push_back('\'');
                        arg_value += arg[i] + "'";
                    }
                }
                //std::cout << arg_value << std::endl;
                arg.clear();

                // XMLElement *exInfo = action->FirstChildElement("exInfo_list")->FirstChildElement();
                // string ex_info_tmp;
                // while (exInfo)
                // {
                //     const char *exInfo_value_tmp = exInfo->FirstAttribute()->Value();
                //     //std::cout << exInfo_value_tmp << std::endl;
                //     ex_info_tmp += exInfo_value_tmp;
                //     if (exInfo->NextSiblingElement())
                //     {
                //         ex_info_tmp.append(",");
                //     }
                //     exInfo = exInfo->NextSiblingElement();
                // }
                // //std::cout << ex_info_tmp << std::endl;
                // for (int j = 0; j < ex_info_tmp.length(); j++)
                // {
                //     /* ex_info.push_back(ex_info_tmp[j]);
                //     if (ex_info_tmp[j] == '\\')
                //     {
                //         ex_info.clear();
                //     }
                //     if (ex_info_tmp[j] == '\'')
                //     {
                //         ex_info.push_back('\'');
                //     } */
                //     if (ex_info_tmp[j] == '\\'||ex_info_tmp[j] == '\'')
                //     {
                //         ex_info.push_back('\\');
                //     }
                //     ex_info.push_back(ex_info_tmp[j]);
                // }
                //std::cout << ex_info << std::endl;
                sql_select = "select count(*) from information_schema.tables where table_name = '" + api_name + "'";
                string count = db.selectDB(sql_select);
                //cout << count << endl;

                sql_insert = "insert into " + api_name + " (tag ,flag " + arg_name + ") values (" + to_string(tag) + "," + to_string(8) + arg_value + ")";

                if (count == "1")
                {
                    db.insertDB(sql_insert);
                    cout << "1" << endl;
                }

                arg_name.clear();
                arg_value.clear();
                //ex_info.clear();


            }
            action = action->NextSiblingElement();
        }
        //std::cout << count << std::endl;
        boot = boot->NextSiblingElement();
    }
}

int main()
{

    conn_DB db;
    db.initDB("localhost", "root", "02200059", "xml");
    vector<string> files;
    string dir_name = "C:\\Users\\zhray\\source\\cpp\\xml\\black";
    dirfiles(dir_name, files);

    for (string filename : files)
    {
        //cout << filename << endl;
        example3(db, filename);
        getchar();
    }
    db.closeDB();
    return 0;
}