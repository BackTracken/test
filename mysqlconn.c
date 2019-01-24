#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include</usr/include/mysql/mysql.h>

int main()

	int ret = 0;
	MYSQL* mysql =  mysql_init(NULL);
	if(mysql_real_connect(mysql, "127.0.0.1", "root", NULL, "mysql", 0, NULL, 0))
	{
		printf("connect success\n");
	}

	return ret;
}

