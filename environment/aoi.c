#include<stdio.h>
#include<cs50.h>
int main()
{

string fraction=get_string("");


int x = atoi(&fraction[0]);
    int y = atoi(&fraction[2]);
    int dur = x/y;
    printf("%d",dur);
    return dur;
}