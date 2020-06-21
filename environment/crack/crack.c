#include<stdio.h>
#include<cs50.h>
#define _XOPEN_SOURCE
#include<crypt.h>
 #define _XOPEN_SOURCE
 #include <unistd.h>
 #include <string.h>
int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("usage ./crack hash");
        return 1;
    }
    char hash[3];
     hash[0]=argv[1][0];
     hash[1]=argv[1][1];
     hash[2]=0;

  char  key[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  const int SEE=5;
  const int ALPHA=strlen(key);

//
for(int times=1;times<=SEE;times++)

  {

     for(int g=0;g<ALPHA;g++)
     {
          for(int h=0;h<ALPHA;h++)
          {

              for(int i=0;i<ALPHA;i++)
              {

                  for(int j=0;j<ALPHA;j++)
                  {

                      for(int k=0;k<ALPHA;k++)
                      {
                                char pw[6];
                                pw[0]=key[k];
                                string lol;

                        if(times==1 && j==0&&g==0 && i==0 &&h==0)
                           {
                               pw[1]=0;

                             lol= crypt(pw,hash);
          if(strcmp(lol,argv[1])==0)
{
    printf("cracked,%s",pw);

    return 0;}

                           }
                           if(times==2&&g==0 && i==0 && h==0)
                            {
                                 pw[1]=key[j];
                                 pw[2]=0;
                                 
                                               lol= crypt(pw,hash);
          if(strcmp(lol,argv[1])==0)
{
    printf("cracked,%s",pw);

    return 0;}

                            }
                                if(times==3 && g==0 && h==0)
                                {
                                    pw[1]=key[j];
                                    pw[2]=key[i];
                                    pw[3]=0;

                                     lol= crypt(pw,hash);
          if(strcmp(lol,argv[1])==0)
{sleep(20);
    printf("cracked,%s",pw);
continue;
    return 0;;}
                                 

                                }
                                if(times==4 && g==0)
                                {

                                    pw[1]=key[j];
                                    pw[2]=key[i];
                                    pw[3]=key[h];
                                    pw[4]=0;
                                     
              lol= crypt(pw,hash);
          if(strcmp(lol,argv[1])==0)
{
    printf("cracked,%s",pw);

    return 0;;}
                                    }
                                if(times==5)
                                {
                                    pw[1]=key[j];
                                    pw[2]=key[i];
                                    pw[3]=key[h];
                                    pw[4]=key[g];
                                    pw[5]=0;
                                     
                           lol= crypt(pw,hash);
          if(strcmp(lol,argv[1])==0)
{
    printf("cracked,%s",pw);

    return 0;;                }      }

       }


                   }
                  }
              }
              }
          }
}