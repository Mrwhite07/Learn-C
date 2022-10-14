#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100]="numpy";
  int step=4;
  for(int i=0; i<strlen(str1);i++){
  if (i<step){
      printf("%c",str1[i]);
    }
  }
  return 0;
}
