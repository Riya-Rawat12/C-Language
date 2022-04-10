#include<stdio.h>
#include<stdlib.h>
int *push(int *start_ptr, int *top)
{ 	
    int *ptr=NULL;
    if(start_ptr==NULL)
    ptr = (int *)calloc(3,sizeof(int));
    else 		
    ptr = (int )realloc(start_ptr,sizeof(int)((*ptr)+1));
    if (ptr==NULL)
    printf("\nno more memory is available currently.");
    else
    { 		
        (*top)+=1;
        start_ptr=ptr;
        printf("Enter data: ");
        scanf("%d",&start_ptr[(*top)]);
    } 	
    return start_ptr;
}
int *pop(int *start_ptr, int *top)
{	 	
    int *ptr=NULL;
    if(start_ptr==NULL)
    printf("\nstack empty. can not delete");
    else
    {
        printf("\ncurrent top %d",start_ptr[(*top)]);
        (*top)-=1;
        printf("\nnew top %d",start_ptr[(*top)]);
        if((*top)!=-1)
        ptr = (int )realloc(start_ptr,sizeof(int)(*top));
        start_ptr=ptr;
    }
    return start_ptr;
}
void peek(int *start_ptr, int top)
{
    if(start_ptr==NULL)
    printf("\nstack empty.");
    else
    {
        printf("\nthe data %d is on top",start_ptr[top]);
    }
}
void display(int *start_ptr, int top)
{ 	
    if(top==-1)
    printf("\nstack empty.");
    else
    {
        for(int i=top;i>-1;i--)
        printf("\ndata = %d",start_ptr[i]);
    }
}
int main()
{ 	
    int top=-1,ch;
    int *stack_ptr=NULL;
    do
    {
        printf("Name-Riya Rawat\nSec-E\nStudent ID_20012105\n");
        printf("\nwelcome to stack operations");
        printf("\n1. push\n  2. pop\n  3. peek\n  4. display\n  5. exit\n");
        printf("\nEnter ur choice: ");
        scanf("%d",&ch);
        switch(ch)
        { 			
            case 1:stack_ptr=push(stack_ptr,&top);
                   break;
            case 2:stack_ptr=pop(stack_ptr,&top);
                   break;
            case 3:peek(stack_ptr,top); 
                   break; 		
            case 4:display(stack_ptr,top);
                   break; 		
            case 5:printf("\nexit point"); 
                   break; 	
        }
    }while(ch!=5);
    return 0;
}