#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<time.h>
#include<stdio.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(){
	struct dirent *dir;
	struct stat mystat;
	DIR *dp;
	dp=opendir(".");
	if(dp){
		while((dir=readdir(dp))!=NULL){
			stat(dir->d_name, &mystat);

			printf("%ld\t %d\t %d\t %ld\t %ld\t %ld\t %lu\t %s\t %s\t", mystat.st_ino,mystat.st_uid,mystat.st_gid,mystat.st_blksize,mystat.st_blocks,mystat.st_size,mystat.st_nlink,ctime(&mystat.st_atime),dir->d_name);
			printf("\t");
			printf("\nFile permissions USER\n");
			printf((mystat.st_mode &S_IRUSR)? "r":"-");
			printf((mystat.st_mode &S_IWUSR)? "w":"-");
			printf((mystat.st_mode &S_IXUSR)? "x":"-");
			printf("\n");
			printf("\nFile permissions GROUP\n");
			printf((mystat.st_mode &S_IRGRP)? "r":"-");
			printf((mystat.st_mode &S_IWGRP)? "w":"-");
			printf((mystat.st_mode &S_IXGRP)? "x":"-");
			printf("\n");
			printf("\nFile permission OTHER\n");
			printf((mystat.st_mode &S_IROTH)? "r":"-");
			printf((mystat.st_mode &S_IWOTH)? "w":"-");
			printf((mystat.st_mode &S_IXOTH)? "x":"-");
			printf("\n");
		}
	}
}

