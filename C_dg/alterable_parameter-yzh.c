#include<stdio.h>  
#include<stdarg.h>  
  
int test(int first, ...){  
  
    va_list args;  
    va_start(args, first);  
    printf("args:%d  first:%d\n", *args, first);  
  
    while( (first = va_arg(args, int)) >= 0 ){  
        printf("*args:%d  first:%d\n", *args, first);  
    }     
    va_end(args);  
    return 0;  
}  
int main()  
{  
    int a = 100, i = 1, j = 2, k = 3, g = -1;   
  
    printf("test1:\n");  
    test(a, i, j, k, g);   
  
    printf("test2:\n");  
    a = 200, i = 11, j = 12, k = 13;   
    test(a, i, j, g);   
    
    system("pause");
    return 0;  
}  