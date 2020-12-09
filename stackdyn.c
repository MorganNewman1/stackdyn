
#include "stackdyn.h"

void push( stack st, int num )
{
    st->data[st->top] = num;
    st->top++;
}

int pop( stack st )
{
    int num;
    num = st->data[st->top-1];
    st->top--;
    return num;
}

void printstack( stack st )
{
    int k;
    for (k = 0; k < st->top; k++)
        printf("%d ", st->data[k]);
    printf("\n");
}
/*
stack makestack( )
{
    stack ns;
    ns = malloc( sizeof( struct stacktype ) );
    ns->top = 0;
    return ns;
}
*/

stack makestack( int sz )
{
    stack s;
    s = malloc(sizeof(struct stacktype));
    s->data = malloc(sizeof(int)*sz);
    s->top = 0;

    return s;
}