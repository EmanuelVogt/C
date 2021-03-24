#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void main (){

    char *hello = "hello world";
    printf("from main : %d \n", &hello);

    char *hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("hello2: %x\n", hello2);

    char *hello3 = hello2 + 6;
    printf("From hello2: %s\n", hello2);
    printf("From hello3: %s", hello3);


}