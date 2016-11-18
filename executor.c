#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
  char dest[256];
  printf(";)-|< ");
  fgets(dest, 256, stdin);
  //printf("%s\n", dest);

  *strchr(dest, '\n')=0;
  
  char *s = dest;
  char * command[100];
  int i;
  
  for(i = 0; s; command[i] = strsep( &s, " "), i++);
  command[i]=0;
  //printf("hi: %s\n", command[0]);
  
  /*for(i=0;command[i];i++){
    printf("bye: %s\n", command[i]);
  }
  */
  execvp(command[0], command);
  return 0;

}
