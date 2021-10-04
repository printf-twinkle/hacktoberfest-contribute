/*Q3.3_Stack_05/10/21
*Convert Infix expression to Prefix. The input may have multidigit number. Output terms are separated by space.
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define BLANK ' '
#define TAB '\t'
#define MAX 50

long int pop();
long int eval_pre();
char infix[MAX], prefix[MAX];
long int stack[MAX];
int top;
int isempty();
int white_space(char symbol);

void infix_to_prefix();
int priority(char symbol);
void push(long int symbol);
long int pop();

int main()
{
        long int value;
        top = -1;
        fgets(infix, sizeof(infix), stdin);
        infix_to_prefix();
        int iter = 0;
        while(prefix[iter]!= '\0')
        {
            if(prefix[iter] != '+' && prefix[iter] != '-' && prefix[iter] != '*' && prefix[iter] != '/')
            {
                printf("%c", prefix[iter]);
            }
            else
            {
                printf("%c ", prefix[iter]);
            }
            iter++;
        }
        return 0;

}/*End of main()*/

void infix_to_prefix()
{
        int i,j,p,n;
        char next ;
        char symbol;
        char temp;
        n=strlen(infix);
        p=0;

        for(i=n-1; i>=0; i--)
        {
                symbol=infix[i];
                if(!white_space(symbol))
                {
                        switch(symbol)
                        {
                        case ')':
                                push(symbol);
                                break;
                        case '(':
                                while( (next=pop()) != ')')
                                        prefix[p++] = next;
                                break;
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '%':
                        case '^':
                                while( !isempty( ) &&  priority(stack[top])> priority(symbol) )
                                        prefix[p++] = pop();
                                        prefix[p++] = ' ';
                                push(symbol);
                                break;
                        default: /*if an operand comes*/
                            prefix[p++] = symbol;
                        }
                }
        }
        while(!isempty( ))
                prefix[p++] = pop();
        prefix[p] = '\0'; /*End prefix with'\0' to make it a string*/

        for(i=0,j=p-1;i<j;i++,j--)
        {
                temp=prefix[i];
                prefix[i]=prefix[j];
                prefix[j]=temp;
        }
}/*End of infix_to_prefix()*/

/* This function returns the priority of the operator */
int priority(char symbol )
{
        switch(symbol)
        {
        case ')':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
                return 3;
        default :
                 return 0;
        }/*End of switch*/
}/*End of priority()*/

void push(long int symbol)
{
        if(top > MAX)
        {
                printf("Stack overflow\n");
                exit(1);
        }
        else
        {
                top=top+1;
                stack[top] = symbol;
        }
}/*End of push()*/

long int pop()
{
        if(top == -1 )
        {
                printf("Stack underflow \n");
                exit(2);
        }
        return (stack[top--]);
}/*End of pop()*/
int isempty()
{
        if(top==-1)
                return 1;
        else
                return 0;
}

int white_space(char symbol)
{
        if(symbol==BLANK || symbol==TAB || symbol=='\0')
                return 1;
        else
                return 0;
}/*End of white_space()*/
