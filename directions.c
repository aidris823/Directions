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
    dir_info(dir_path);
  }else{
    printf("didn't work\n");
  }
  return 0;
}

void dir_info(DIR * dir_path){
  struct dirent *stuff;
  stuff = readdir(dir_path);
  while(stuff){
    printf("Name of file: %s\n",stuff->d_name);
  }
  closedir(dir_path);
  //char *name = stuff->d_name;
  //printf("Name of file: %s\n",name);
}
