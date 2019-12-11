#ifndef __XML_H__
#include "mysql.h"
#include <iostream>
#include <string>
#include <sys/types.h>
#include "dirent.h"
#include <cstring>
#include <map>
#include <vector>
using std::map;
using std::string;
using std::vector;

//定义数据库连接等操作
class conn_DB
{
  private:
    MYSQL *connection;
    MYSQL_RES *result;
    MYSQL_ROW row;

  public:
    conn_DB();
    void closeDB();
    bool initDB(string host, string user, string pwd, string db_name);
    bool insertDB(string sql);
    string selectDB(string sql);
};

//读取文件名
void dirfiles(string dir_name, vector<string> &files);

//寻找xml文件中每个api的属性个数
void read_xml(map<string, int> &api_count, string filename);

#endif