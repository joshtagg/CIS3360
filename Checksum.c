//delete overflow function
//add 2 things function
//convert each letter to binary number, (put in array?) until it hits end of text
//no validation, just generate last number in front of = sign

#include <stdio.h>
#include <stdlib.h>

//Functions





int main() {

    //input: file name, checksum size
    FILE * fptr = NULL;
    char filename[20];

    int ASCIIcount = 0; //this includes 0A and X values
    char singleASCII;
    int bitSize;
    int numX = 0;
    int charValue;


    while (fptr == NULL) {
        printf("What is the name of the file?\n");
        scanf("%s", &filename);
        fptr = fopen(filename, "r");
    }

    printf("What kind of checksum?\n");
    scanf("%d", &bitSize);
    if(bitSize != 8 || bitSize != 16 || bitSize != 32) {
        fprintf(stderr, "Valid checksum sizes are 8, 16, or 32\n");
    }



    //-----------------------------------------------


    //print file, track number of ASCII characters in file
    singleASCII = fgetc(fptr);
    ASCIIcount++;
    while(singleASCII != EOF) {
        printf("%c", singleASCII);
        singleASCII = fgetc(fptr);
        ASCIIcount++;
        //print new line when 80 characters hit
        if(ASCIIcount % 80 == 0) {
            printf("\n")
        }
    }
    ASCIIcount++; //count for space


    //------------------------------------------------


    //if 16 or 32 bit, add X chars in. add to array of numbers ^
    //store number of X padding
    if(bitSize = 16) {
        //if ASCIIcount even, add no X
        //if ASCIIcount odd, add 1 X
        if(ASCIIcount % 2 == 1) {
            //it is odd
            numX = 1;
        }
    }

    if(bitSize = 32) {

    }


    //----------------------------------------------


    //16 and 32 bit work done here
    if(numX != 0) {

        int something = numX-1;
        for(i = 0; i < ASCIIcount-something; i++) {
            //go through file char by char, create array of numbers for each ASCII char

        }
        //add 0A to array here


        for(i = 0; i < numX; i++) {
            //add padding to array here
            //starting at array[ASCIIcount-(numX+i)]
        }
    }


    //----------------------------------------------


    //8 bit work done here
    else {
        //start reading from beginning of file again
        rewind(filename);

        int ASCIInumArray[ASCIIcount];
        for(i = 0; i < ASCIIcount-1; i++) {
            //go through file char by char, create array of numbers for each ASCII char
            singleASCII = fgetc(fptr)
            charValue = singleASCII;
            ASCIInumArray[i] = charValue;
        }
        //add 0A to array here
        ASCIInumArray[ASCIIcount] = 10;


        //at this point we have a full array with all the number values
        //now we need to sum up all of those values and then turn the final value into hex
        //and then print the final answer output then end the program



    }


    //-------------------------------------------------





    fclose(fptr);
    return 0;
}














