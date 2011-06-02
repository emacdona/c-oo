#include <stdio.h>
#include <stdlib.h>
#include "person.h"

struct person_ops* person_vtable = NULL;

struct person* person_new(char* name) {
    if(person_vtable == NULL) {
        person_vtable = malloc(sizeof(struct person_ops));
        person_vtable->getName = &person_getName;
        person_vtable->setName = &person_setName;
    }

    struct person* ret_val = malloc(sizeof(struct person));
    ret_val->name = name;
    ret_val->vtable = person_vtable;
    return ret_val;
}

char* person_getName(struct person* person) {
    return person->name;
}

void  person_setName(struct person* person, char* name) {
    person->name = name;
}
