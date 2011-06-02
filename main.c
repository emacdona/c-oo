#include <stdio.h>
#include "person.h"

int main(int argc, char** argv) {
    struct person* ed   = person_new("Ed MacDonald");
    struct person* john = person_new("John Doe");

    printf("Hello %s.\n", ed->vtable->getName(ed));

    ed->vtable->setName(ed, john->vtable->getName(john));

    printf("Hello %s.\n", ed->vtable->getName(ed));

    person_delete(ed);
}
