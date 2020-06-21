#include<stdio.h>
#include<cs50.h>
#define _XOPEN_SOURCE
 #include <unistd.h>
int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("usage ./crack hash");
        return 1;
    }
    char hash[2];
     hash[0]=argv[1][0];
     hash[1]=argv[1][0];

  char  key[]="abcdefghijklmnopqrstuvwxyz";
  const int SEE=5;
  const int ALPHA=26;


for(int times=1;times<=SEE;times++)

  {
        while times==0
 {

     for(int g=0;g<ALPHA;g++)
     {
         while times==1
         {
             p[g]='\0';
          for(int h=0;h<ALPHA;h++)
          {
              while times==2
              {
                  p[h]='\0';
              for(int i=0;i<ALPHA;i++)
              {
                  while times==3
                  {
                      p[i]='\0';
                  }
                  for(int j=0;j<ALPHA;j++)
                  {
                      while times==4
                      {
                          p[j]='\0';
                      for(int k=0;k<ALPHA;k++)
                      {

                           printf("%c%c%c%c%c\n",key[g],key[h],key[i],key[j],key[k]);


                      }
                  }
                   }  // crypt(okay[],hash[]);
                  }
              }
              }
                  }
              }
          }
    }
          }
}