#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/********************************/

/**
* Représente une structure de pile générique 
* @author Samuel Biczo
*/
struct Stack 
{
	void* data;
	struct Stack* next;
};

/*
* Création d'une pile générique
* @author Samuel Biczo
*/
s_stack* stack_generic_create(void)
{
	return NULL;
}
/**
* Libération mémoire de la pile générique
* @author Samuel Biczo
*/
void stack_generic_delete(s_stack** pp_stack)
{
	while((*pp_stack) != NULL)
	{	
		s_stack* saveElementNext = (*pp_stack)->next;
		free(*pp_stack);
		*pp_stack = saveElementNext;
	}
}
/**
* Ajoute un éléments en haut de la pile générique 
* @author Samuel Biczo
*/
void stack_generic_push(s_stack** pp_stack, void* data)
{
	s_stack* tp_stack = malloc(sizeof(*tp_stack));

	if(tp_stack == NULL)
		return;

	tp_stack->data = data;
	tp_stack->next = *pp_stack;
	*pp_stack = tp_stack;
}
/**
* Enlève un éléments de la pile générique 
* @author Samuel BiCZO
*/
void stack_generic_pop(s_stack** pp_stack)
{
	if(pp_stack != NULL)
	{
		s_stack* saveElementNext = (*pp_stack)->next;
		free(*pp_stack);
		*pp_stack = saveElementNext;
	}
}
/********************************/

/**
* Représente une structure de pile d'entier 
* @author Samuel Biczo
*/
struct StackInt 
{
	int data;
	struct StackInt* next;
};

/*
* Création d'une pile d'entier
* @author Samuel Biczo
*/
s_stackint* stackint_create(void)
{
	return NULL;
}
/**
* Libération mémoire de la pile générique
* @author Samuel Biczo
*/
void stackint_delete(s_stackint** pp_stackint)
{
	while(*pp_stackint != NULL)
	{
		s_stackint* saveNextElement = (*pp_stackint)->next;
		free(*pp_stackint);
		*pp_stackint = saveNextElement;
	}
}
/**
* Ajoute un éléments en haut de la pile générique 
* @author Samuel Biczo
*/
void stackint_push(s_stackint** pp_stack, int data)
{
	s_stackint* tp_stack = malloc(sizeof(*tp_stack));

	if(tp_stack == NULL)
		return;

	tp_stack->data = data;
	tp_stack->next = *pp_stack;
	*pp_stack = tp_stack;
}
/**
* Enlève un éléments de la pile générique 
* @author Samuel BiCZO
*/
void stackint_pop(s_stackint** pp_stack)
{
	if(*pp_stack != NULL)
	{
		s_stackint* saveElementNext = (*pp_stack)->next;
		free(*pp_stack);
		*pp_stack = saveElementNext;
	}
}
/**
* Récupere la veleur de la pile
* @author Samuel BiCZO
*/
int stackint_top(s_stackint** pp_stack)
{
	return (*pp_stack)->data;
}
/********************************/

/**
* Représente une structure de pile d'entier 
* @author Samuel Biczo
*/
struct StackDouble
{
	int data;
	struct StackDouble* next;
};
/*
* Création d'une pile de réel
* @author Samuel Biczo
*/
s_stackdouble* stackdouble_create(void)
{
	return NULL;
}
/**
* Libération mémoire de la pile de réel
* @author Samuel Biczo
*/
void stackdouble_delete(s_stackdouble** pp_stackdouble)
{
	while(*pp_stackdouble != NULL)
	{
		s_stackdouble* saveNextElement = (*pp_stackdouble)->next;
		free(*pp_stackdouble);
		*pp_stackdouble = saveNextElement;
	}
}
/**
* Ajoute un éléments en haut de la pile de réel 
* @author Samuel Biczo
*/
void stackdouble_push(s_stackdouble** pp_stack, double data)
{
	s_stackdouble* tp_stack = malloc(sizeof(*tp_stack));

	if(tp_stack == NULL)
		return;

	tp_stack->data = data;
	tp_stack->next = *pp_stack;
	*pp_stack = tp_stack;
}
/**
* Enlève un éléments de la pile de réel 
* @author Samuel BiCZO
*/
void stackdouble_pop(s_stackdouble** pp_stack)
{
	if(*pp_stack != NULL)
	{
		s_stackdouble* saveElementNext = (*pp_stack)->next;
		free(*pp_stack);
		*pp_stack = saveElementNext;
	}
}
/**
* Récupere la veleur de la pile
* @author Samuel BiCZO
*/
int stackdouble_top(s_stackdouble** pp_stack)
{
	return (*pp_stack)->data;
}