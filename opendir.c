#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>

void lst(int count,char **args)
{
	DIR *dir;
	struct dirent *ptr;
	struct stat fInfo;
	printf("arg: %s\n", args[1]);
	if(count == 1)
	{
		dir = opendir("./");
		if(dir == NULL)
		{
			perror("open dir err\n");
			return ;
		}
		while((ptr = readdir(dir))!=NULL)
		{
			stat(ptr->d_name, &fInfo);
			if(S_ISDIR(fInfo.st_mode))
			{
				printf("dir name %s\n", ptr->d_name);	
		
			}
		}
		closedir(dir);
	}
	else 
	{
		dir = opendir(arg[1]);
		if(dir == NULL)
		{
			perror("open dir err\n");
			return ;
		}
		else
		{
			
		}
	}
}

int main(int argc, char **argv)
{
	int ret = 0;
	lst(argc, argv);
	//printf("count %d dir is %s\n",argc, argv[1]);
	return ret;
}
