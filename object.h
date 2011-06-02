
#ifndef __OBJECT__
#define __OBJECT__

//NOTE: the ## is a gnu extension (see: http://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html#Variadic-Macros)
#define dispatch(obj, method, ...) obj->vtable->method(obj , ##__VA_ARGS__)

#endif
