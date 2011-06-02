#include <stdio.h>
#include "person.h"
#include "object.h"

int main(int argc, char** argv) {
    Person ed   = person_new("Ed MacDonald");
    Person john = person_new("John Doe");

    printf("Hello %s.\n", ed->vtable->getName(ed));

    ed->vtable->setName(ed, john->vtable->getName(john));

    printf("Hello %s.\n", ed->vtable->getName(ed));

    //Using the dispatch macro
    dispatch(ed, setName, "Jane Doe");

    printf("Hello %s.\n", dispatch(ed, getName));

    person_delete(ed);
}
