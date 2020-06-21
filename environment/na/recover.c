#include<stdio.h>
#include<cs50.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if(argc !=2)
    {
        fprintf(stderr,"usage /recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if(!file)
    {
        fprintf(stderr,"file cannot be opened\n");
        return 2;
    }
    	unsigned char store[512];
    int j=1;
    int count=0;
 FILE* opened = NULL;
//512 at a time until we reach another if
 char newf[8];

   while(fread(&store, 512,1,file)==1)
   {

    if (store[0]==0xff && store[1]==0xd8 && store[2]==0xff && (store[3] & 0xf0)==0xe0 )

        {


if(count==1)
{
    fclose(opened);

}

  else{count=1;}

        //store name
 sprintf(newf,"%03i.jpg",j);


j++;
        opened = fopen(newf,"w");
    fwrite(store,512,1,opened);
    continue;


        }


    if(count==1)
    {

//need permission to store files
if(opened)
       { fwrite(store,512,1,opened);
       }

    }

}
fclose(file);
fclose(opened);
}