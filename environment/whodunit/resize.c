// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    int mag = atof(argv[1]);
    if (argc !=4 && (mag<1 || mag>1))
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf,bf_new;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);
        bf_new = bf;
    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi,bi_new;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);
bi_new = bi;
    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;




        bi_new.biWidth = bi.biWidth*mag;
        bi_new.biHeight = bi.biHeight*mag;
     int   new_padding =  (4 - (bi_new.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
        bi_new.biSizeImage = ((sizeof(RGBTRIPLE)*bi_new.biWidth)+new_padding)*bi_new.biHeight;
        bf_new.bfSize= bi_new.biSizeImage + sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER);
    // write outfile's BITMAPFILEHEADER
    fwrite(&bf_new, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi_new, sizeof(BITMAPINFOHEADER), 1, outptr);



    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
      int  count =0;
             // temporary storage
             for(int b =0;b<mag;b++)
{        if(count==1)
     {fseek(inptr,-((sizeof(RGBTRIPLE)*bi.biWidth)+padding),SEEK_CUR);}
        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {


         RGBTRIPLE triple;

            // read RGB triple from infile to location triple
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

            // write RGB triple to outfile
for (int q = 0; q < mag; q++)
         {
               fwrite(&triple, sizeof(RGBTRIPLE),1 , outptr);

           }


         }
        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);

        // then add it back (to demonstrate how)
        for (int l = 0; l < new_padding; l++)
        {
            fputc(0x00, outptr);
        }count=1;

}
        }


    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
