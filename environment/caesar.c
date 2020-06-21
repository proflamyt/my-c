#include<stdio.h>
#include<cs50.h>
 #include <string.h>
  #include <ctype.h>
int main(int argc,string argv[])
{
if(argc !=2)
{
printf("usage:./caesar num\n");
return 1;
}

int k= atoi(argv[1]);
printf("what do you wanna encode\n");
string p= get_string();
int c;
for(int i=0,n=strlen(p);i<n;i++)

{
    if (isupper(p[i]))
    {
p[i]=(p[i]-65);

c = (p[i]+k);
printf("%c",'A'+c%26);
}
else if(islower(p[i]))
{
    p[i]=(p[i]-97);
    c = (p[i]+k);
    printf("%c",'a'+c%26);
}
else
{printf("%c",p[i]);}
}


}