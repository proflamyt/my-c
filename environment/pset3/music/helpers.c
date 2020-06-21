// Helper functions for music

#include <cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    int x = atoi(&fraction[0]);
    int y = atoi(&fraction[2]);
    int dur = (8/y)*x;
   // printf("%d",dur);
    return dur;

}

// Calculates frequency (in Hz) of a note
int frequency(string s)
{
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
             frequency= 27.5*pow(2,(2.00/12.00));

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
     frequency =round(frequency); return frequency;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // if strlen(s)==0
    if(s[0]==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
