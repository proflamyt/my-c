#include<stdio.h>
#include<cs50.h>
#include "numbers.h"
int main()
{
NUMBERS okay;
okay.ola =get_int("");
okay.bimbo=get_float("");
okay.fabiyi=get_double("");

printf("%i,%f,%f",okay.ola,okay.bimbo,okay.fabiyi);
}