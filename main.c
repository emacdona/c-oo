#include<stdio.h>

struct person;

struct person_ops {
    char* (*getName) (struct person * );
};

struct person {
    char* name;
    struct person_ops* vtable;
};

char* person_getName(struct person *);


int main(int argc, char** argv) {
    struct person_ops person_vtable;
    person_vtable.getName = &person_getName;

    struct person ed;
    ed.name = "Ed";
    ed.vtable = &person_vtable;

    printf("Hello %s.\n", ed.vtable->getName(&ed));
}


char* person_getName(struct person *person){
    return person->name;
}
