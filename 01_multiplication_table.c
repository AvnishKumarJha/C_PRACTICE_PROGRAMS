// C Program to Generate Multiplication Table of a Given Number.

#include <stdio.h>
int main()
{
    int num; 
    // Take the number as an input from the user
    printf("Enter the value of the number whose multiplication table is to be printed\n");
    scanf("%d",&num);
    printf("The multiplication table of %d is\n",num);
    
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d * %d = %d\n",num,i+1,(i+1)*num);
    // } 

    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n",num,i,i*num);
    }
    
    
return 0;
}