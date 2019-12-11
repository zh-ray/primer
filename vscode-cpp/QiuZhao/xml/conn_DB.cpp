#include "conn_DB.h"
#include <cstdlib>
#include <iostream>
#include <string>

conn_DB::conn_DB()
{
    connection = mysql_init(NULL);
    if (connection == NULL)
    {
        std::cout << "Error:" << mysql_error(connection);
        exit(1);
    }
}

void conn_DB::closeDB()
{
    if (connection != NULL)
    {
        mysql_close(connection);
    }
}

bool conn_DB::initDB(string host, string user, string pwd, string db_name)
{
    connection = mysql_real_connect(connection, host.c_str(), user.c_str(), pwd.c_str(), db_name.c_str(), 0, NULL, 0);
    if (connection == NULL)
    {
        std::cout << "Errot:" << mysql_error(connection);
        exit(1);
    }
    return true;
}

bool conn_DB::insertDB(string sql)
{
    if (mysql_query(connection, sql.c_str()))
    {
        std::cout << "Query Error:" << mysql_error(connection);
        exit(1);
    }
    //std::cout << "1" << std::endl;
    return true;
}

string conn_DB::selectDB(string sql)
{
    mysql_query(connection, sql.c_str());
    result = mysql_store_result(connection);
    if(result == NULL)
    {
        std::cout << "Query Error:" << mysql_error(connection);
        exit(1);
    }
    string i;
    while(row = mysql_fetch_row(result )){
        i = row[0];
    }
    mysql_free_result(result);
    return i;
}