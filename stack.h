#ifndef __STACK__H__
#define __STACK__H__

/*			PILE GENERIQUE		*/
typedef struct Stack s_stack;
 
s_stack* stack_generic_create(void);
void stack_generic_delete(s_stack** pp_stack);

void stack_generic_push(s_stack** pp_stack, void* data);
void stack_generic_pop(s_stack** pp_stack);
/********************************/

/*			PILE ENTIER		*/
typedef struct StackInt s_stackint;

s_stackint* stackint_create(void);
void stackint_delete(s_stackint** pp_stackint);

void stackint_push(s_stackint** pp_stack, int data);
void stackint_pop(s_stackint** pp_stack);

int stackint_top(s_stackint** pp_stack);

/********************************/

/*			PILE REEL		*/
typedef struct StackInt s_stackdouble;

s_stackint* stackdouble_create(void);
void stackdouble_delete(s_stackdouble** pp_stackint);

void stackdouble_push(s_stackdouble** pp_stack, double data);
void stackdouble_pop(s_stackdouble** pp_stack);

int stackdouble_top(s_stackdouble** pp_stack);

/********************************/

#endif 