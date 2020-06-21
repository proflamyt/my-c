#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main()
{
string s = get_string();
char okay[3];
if(strlen(s)==2)
{
okay[0]=s[0];
okay[1]=0;
printf("%s",okay);
}
if(strlen(s)==3)
{
    okay[0]=s[0];
    okay[1]=s[1];
    okay[2]=0;
    printf("%s",okay);
}


}