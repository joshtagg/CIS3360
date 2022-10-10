/*=============================================================================
| Assignment: pa01 - Encrypting a plaintext file using the Vigenere cipher
|
| Author: Your name here
| Language: c, c++, Java
|
| To Compile: javac pa01.java
| gcc -o pa01 pa01.c
| g++ -o pa01 pa01.cpp
|
| To Execute: java -> java pa01 kX.txt pX.txt
| or c++ -> ./pa01 kX.txt pX.txt
| or c -> ./pa01 kX.txt pX.txt
| where kX.txt is the keytext file
| and pX.txt is plaintext file
|
| Note: All input files are simple 8 bit ASCII input
|
| Class: CIS3360 - Security in Computing - Fall 2021
| Instructor: McAlpin
| Due Date: per assignment
|
+=============================================================================*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //FILE * ifp = NULL;
    int i, c;
    char filename[99], message[512];
    char singlecharacter[512];

    /*
    while (ifp == NULL) {
        scanf("%s", filename);
        ifp = fopen(filename, "r");
    }
    */

    scanf("%s", filename);

    printf("%s", filename);

    FILE * ifp = fopen(filename, "r");

    /*
    for(i = 0; i < 512; i++) {
        //printf("enter loop");
        fscanf(ifp, "%c", singlecharacter[i]);

        printf("%c", singlecharacter[i]);

        if(islower(singlecharacter[i]) || isupper(singlecharacter[i])) {
            strcpy(message[i], singlecharacter[i]);
        }


        else {
            printf("non-letter\n");
        }

    }
    */

    /*
    while((c = fgetc(ifp)) != EOF) {
        i = 0
        if(islower(c) || isupper(c)) {
            strcpy(message)
        }
    }
    */


    for(i = 0; i < 512; i++) {
        c = fgetc(ifp);

        if(c == EOF) {
            break;
        }

        if(islower(c) || isupper(c)) {
            printf("islower/upper");
            strcpy(message[i], c);
        }


    }




    printf("%s", message);



    //fgets(ifp, "%[^\n]", firstline);
    //fgets(ifp, "%[^\n]", sec);
    //fgets(ifp, "%[^\n]", thir);
    //printf("firstline:\n %s", thir);



    fclose(ifp);
    return 0;
}







/*=============================================================================
| I [your name] ([your NID]) affirm that this program is
| entirely my own work and that I have neither developed my code together with
| any another person, nor copied any code from any other person, nor permitted
| my code to be copied or otherwise used by any other person, nor have I
| copied, modified, or otherwise used programs created by others. I acknowledge
| that any violation of the above terms will be treated as academic dishonesty.
+=============================================================================*/
