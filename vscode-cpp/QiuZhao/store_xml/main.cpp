#include "xml.h"
#include <fstream>
#include <iostream>

int main()
{

    //std::ifstream input_csv("cluster_dict.csv");
    //string s1;
    std::map<string, int> api_count;
    vector<string> file_names;
    string dir_name = "./dataset/";
    int count = 1;
    dirfiles(dir_name, file_names);
    // while (std::getline(input_csv, s1))
    // {
    //     //std::cout << s1 << std::endl;
    //     api_count.insert({s1, 0});
    // }
    // std::cout << api_count.size() << std::endl;
    for (string file_name : file_names)
    {
        read_xml(api_count, file_name);
        std::cout << count++ << std::endl;
    }
    for(auto api : api_count)
    {
        std::cout << api.first << " : " << api.second << std::endl;
    }
    return 0;
}