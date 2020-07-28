#include<stdio.h>
#include<strting.h>

int main(int argc,char *argv[])
{
  if(argc < 2){
    printf("ERROR: Need more arguments\n");
  }
  char str[100];
  FILE *fp;
  fp = fopen(argv[2],"r");
  if(fp == 0)
   {
    printf("ERROR: File not Found.\n");
    return 0;
   }
   
   while( fgets(str,100,fp){
        if( strstr(str,argv[1]) ){
          printf("%s\n",str);
        }
   }

}
