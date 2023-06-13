#include<stdio.h>
#include<stdlib.h>

#define stacksize 100
#define intger 1
#define float 2
#define string 3

struct stackelement 
{
    int etype;

    union {
        int ival
        float fval;
        char *pval;

    }element;
    };
struct stack{
    int top;
    struct stackelement items[stacktop];

};
int main()
{
    struct stack s;
    struct stackelements se;

    se=s.items[s.top];
    switch(se.etype)
    {
        case intger:
              printf("%d",se.ival);
        case float:
              printf("%f",se.fval);
        case string:
             printf("%s",se.pval);
    }
  return(0);
  
    
}