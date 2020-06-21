/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
 for(int i=0;i<n;i++)
 {
     values[i]=get_int("value");
   if(values[i]==value)
   {
       return true;
   }
   else
   {
       return false;
   }
 }
 // TODO: implement a searching algorithm

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    for(int j=0;j<n;j++)
    {
        int next=0;
        for(int a=j;a<n;a++)
        {
            if(values[a]<values[j])
            {
                int cup;
                cup=values[a];
                values[a]=values[j];
                values[j]=cup;
            }
            if(values[a]==values[j] || values[a]>values[j])
            {
                break;
            }
        }
    }

    return;
}
