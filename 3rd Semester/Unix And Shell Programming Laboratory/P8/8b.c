#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<time.h>

struct dirent *dir;
DIR *dp;

void main(){
	dp=opendir(".");
	if(dp){
		while((dir=readdir(dp))!=NULL){
			printf("%s\n",dir->d_name);
		}	
		closedir(dp);
	}
}
