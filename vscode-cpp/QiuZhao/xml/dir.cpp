#include <sys/types.h>
#include "dirent.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

void dirfiles(string dir_name,vector<string> &files)
{
	DIR * dir;
	const char * dirname = dir_name.c_str();
	dir = opendir(dirname);
	struct dirent * filename;
	while( (filename = readdir(dir) ) != NULL )
	{
		if (0 == strcmp(filename->d_name,"\\") ||0 == strcmp(filename->d_name,".") || 0 == strcmp(filename->d_name,".."))
			continue;

		files.push_back(filename->d_name);
	}
}
int main()
{
	vector<string> files;
	string dir_name = "C:\\Users\\zhray\\source\\cpp\\xml";
	dirfiles(dir_name,files);
	vector<string>::iterator files_it = files.begin();
	for (files_it = files.begin();files_it < files.end(); files_it++)
	{
		cout<<(*files_it)<<endl;
	}
	return 0;
}


