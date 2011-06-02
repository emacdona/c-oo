#include <stdio.h>
#include "person.h"

int main(int argc, char** argv) {
    struct person* ed = person_new("Ed MacDonald");
    printf("Hello %s.\n", ed->vtable->getName(ed));
}
