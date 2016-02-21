// Modify the stackADT.h and stackADT3.c files of Section 19.4 so that a stack stores
// values of type void *, as described in Section 19.5; the Item type will no longer be used. 
// Modify stackclient.c so that it stores pointers to strings in the s1 and s2 stacks. 

#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, void *p);
void *pop(Stack s);

#endif



