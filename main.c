#include <stdio.h>
#include <dirent.h>

int main()
{
	const char *path = "/home/rand0mn/";
	DIR *dir = opendir(path);	
	
	struct dirent *dp;
	while(dp=readdir(dir)) 
	{
		printf("filename: %s\n", dp->d_name);
	}

	return 0;
}
