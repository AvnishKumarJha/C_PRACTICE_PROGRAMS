// C Program to print star pattern - 1.

/*
Print the following star pattern. The number of lines in the pattern should
be equal to the value entered by the user.
The Pattern looks like this for n = 4.
*/

/*
*
**
***
****
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    // Run this for loop n times
    for (int i = 0; i < n; i++) 
    {
        // print (i+1) stars
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
return 0;
}