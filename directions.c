#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "directions.h"

int main(){
  DIR *dir_path;
  if(dir_path = opendir("./")){
    dir_info(dir_path, "./");
  }else{
    printf("didn't work\n");
  }
  return 0;
}

void dir_info(DIR *dir_path, char *c){
  struct dirent *stuff;
  struct stat *info = malloc(sizeof(struct stat));
  int size = 0;
  stuff = readdir(dir_path);
  while(stuff){
    stat(stuff->d_name,info);
    printf("Name of file: %s\n",stuff->d_name);
    size += info->st_size;
    printf("File size: %ld\n",info->st_size);
    stuff = readdir(dir_path);
  }
  printf("Size of directory: %d\n",size);
  closedir(dir_path);
  //char *name = stuff->d_name;
  //printf("Name of file: %s\n",name);
}
