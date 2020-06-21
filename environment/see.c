#include<stdio.h>
#include<cs50.h>
#include <string.h>
#define _XOPEN_SOURCE
 #include <unistd.h>
 #define _XOPEN_SOURCE
#include<crypt.h>
int main(int argc,string argv[1])
{

   char hash[3];
     hash[0]=argv[1][0];
     hash[1]=argv[1][1];
hash[2]=0;
string s=get_string("s:");
string lol= crypt(s,hash);
printf("%s,\n",hash);
  printf("%s\n",lol);
          if(strcmp(lol,argv[1])==0)
{
    fprintf(stderr,"cracked");

    return 0;;}


}