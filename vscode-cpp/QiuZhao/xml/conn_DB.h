#ifndef __CONN_H__
#include "mysql.h"
#include <iostream>
#include <string>

using namespace std;

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

#endif