#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2,n3;   
    float res;  
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); // take an operator  
    if (opt == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (opt == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (opt == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (opt == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1); // take fist number  
    printf (" Enter the second number: ");  
    scanf (" %d", &n2); // take second number  
      
    switch(opt)  
    {  
        case '+':  
            res = n1 + n2; // add two numbers  
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
       
        default:  
            printf (" Something is wrong!! Please check the options ");               
    }  
    return 0;  
}  
