#include <stdio.h>


int main(void)
 {
 char c,ch;
 int flag=0;
  FILE *fptr=fopen("data.txt","r");
  if(fptr)
 {
 while((c=fgetc(fptr))!=EOF)
 {
 if(c=='-' || c== '+')
     {
      ch=c;
      flag=1;
     }
 if(c>='0' && c<='9')
  {
    if(flag == 1)
     { 
       printf("%c",ch); flag =0;
      }
   printf("%c",c);
  }
   }
   }
  else
printf("Error : file not found");

  
 }
