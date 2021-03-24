#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#define Class struct
#define function_void void

Class Person {
    char name[20];
    uint8_t age;
    uint8_t height;
    void (*show)(Class Person *)};

function_void person_print(Class Person *this){
    printf("Person: %s, %d, %d\n", this->name, this->age, this->height);
}

Class Person * newPerson( char name[],
    uint8_t age,
    uint8_t height){

    Class Person * this = (Class Person*) malloc(sizeof(Class Person));

    strcpy(this->name, "Emanuel");
    this->age = 22;
    this->height = 190;

    this->show = &person_print;
    return this;
} 

function_void main (){
    Class Person * this = (Class Person *) newPerson("Emanuel", 22, 190); 
    this->show(this);
}