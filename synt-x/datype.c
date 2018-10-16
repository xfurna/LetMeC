#include <stdio.h> 

int main() 
{   int a = 1; 
    char b ='G'; 
    double c = 3.14; 
    printf("Char Value- %c and size value- %lu byte.\n", b,sizeof(char)); 

    //can use sizeof(b) above as well 

    printf("integer value is %d and size is %lu  bytes.\n", a,sizeof(int)); 

    //can use sizeof(a) above as well 

    printf("double floating point variable value is %lf and my size is %lu bytes.\n",c,sizeof(double)); 

    //can use sizeof(c) above as well 

    printf("and thats how we go around it\n"); 
    return 0; 
} 
