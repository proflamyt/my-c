#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
        string s=get_string("");
float frequency;

     for(int i=0;i<8;i++)
     {
         if((s[0]=='A')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
            frequency=27.5;
           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='B')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
             frequency= 29.1352;

           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='C')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
             frequency=27.5/pow(2,(9.00/12.00));

           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='D')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
             frequency=27.5/pow(2.0,(7.00/12.00));
           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='E')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
            frequency=27.5/pow(2.0,(5.00/12.00));
           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='F')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
             frequency=27.5/pow(2.00,(4.00/12.00));
           frequency *=pow(2.00,i);

            continue;
        }
        if((s[0]=='G')&& ((s[1]=='0'+i) || (s[2]=='0'+i)))
        {
             frequency=27.5/pow(2.00,(2.00/12));
           frequency *=pow(2.00,i);

            continue;
        }


     }
     if(s[1]=='#'){
         frequency *=pow(2,(0.08333));
     }
     if(s[1]=='b'){
         frequency /=pow(2,(0.0833));
     }
     frequency =round(frequency);printf("%.4f",frequency); return frequency;
}