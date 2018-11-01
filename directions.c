#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int main(){
  DIR *dir_path;
  dir_path = opendir("./");
  dir_info(dir_path);
  return 0;
}

void dir_info(DIR * dir_path){
  struct dirent *stuff;
  stuff = readdir(dir_path);
  closedir(dir_path);
  while(stuff);
  char *name = stuff->d_name;
  printf("Name of file: %s\n",name);
}
