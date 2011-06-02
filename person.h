#ifndef __PERSON__
#define __PERSON__

struct person;

struct person_ops {
    char* (*getName) (struct person* );
    void  (*setName) (struct person*, char*);
};

struct person {
    struct person_ops* vtable;
    char* name;
};

struct person* person_new(char*);
void person_delete(struct person*);
char* person_getName(struct person*);
void  person_setName(struct person*, char*);

#endif
