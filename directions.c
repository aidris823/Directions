#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int main(){
  DIR * dir_path;
  dir_path = opendir("./");
  dir_info(dir_path);
  return 0;
}

dir_info(DIR * dir_path){
