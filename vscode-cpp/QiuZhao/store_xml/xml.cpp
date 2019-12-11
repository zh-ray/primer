#include "xml.h"
#include "pugixml.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

//重置数据库连接
conn_DB::conn_DB()
{
    connection = mysql_init(NULL);
    if (connection == NULL)
    {
        std::cout << "Error:" << mysql_error(connection) << std::endl;
        exit(1);
    }
}
//关闭数据库连接
void conn_DB::closeDB()
{
    if (connection != NULL)
    {
        mysql_close(connection);
    }
}
//连接数据库
bool conn_DB::initDB(string host, string user, string pwd, string db_name)
{
    connection = mysql_real_connect(connection, host.c_str(), user.c_str(), pwd.c_str(), db_name.c_str(), 0, NULL, 0);
    if (connection == NULL)
    {
        std::cout << "Errot:" << mysql_error(connection) << std::endl;
        exit(1);
    }
    return true;
}
//数据库插入
bool conn_DB::insertDB(string sql)
{
    if (mysql_query(connection, sql.c_str()))
    {
        std::cout << "Query Error:" << mysql_error(connection) << std::endl;
        exit(1);
    }
    //std::cout << "1" << std::endl;
    return true;
}
//数据库查询
string conn_DB::selectDB(string sql)
{
    mysql_query(connection, sql.c_str());
    result = mysql_store_result(connection);
    if (result == NULL)
    {
        std::cout << "Query Error:" << mysql_error(connection) << std::endl;
        exit(1);
    }
    string i;
    while (row = mysql_fetch_row(result))
    {
        i = row[0];
    }
    mysql_free_result(result);
    return i;
}

//读取文件内全部文件名
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

        files.push_back(dir_name + filename->d_name);
    }
}

//遍历并统计xml中apiArg个数
void read_xml(map<string, int> &api_count, string filename)
{
    pugi::xml_document doc;
    // pugi::xml_parse_result result = doc.load_file("test.xml");
    // std::cout << result << std::endl;
    //std::cout << doc.first_child().first_attribute().name() << std::endl;
    //std::cout << doc.first_child().name() << std::endl;
    //std::cout << doc.child("mesh").child("node").name() << std::endl;
    if (doc.load_file(filename.c_str()))
    {
        //直接读取到 <file></file>
        for (pugi::xml_node node_boot : doc.first_child().first_child().first_child())
        {
            for (pugi::xml_node node_action : node_boot.child("action_list").children("action"))
            {
                //std::cout << node_action.first_attribute().name() << std::endl;
                pugi::xml_attribute api_name = node_action.first_attribute();
                if ("api_name" == string(api_name.name()))
                {
                    int count = node_action.child("apiArg_list").first_attribute().as_int();
                    string apiname = api_name.value();
                    api_count[apiname] = api_count[apiname] > count ? api_count[apiname] : count;
                }
            }
        }
    }
}