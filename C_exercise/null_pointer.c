/*
"""
@Date    : 2018-08-05 12:54:36
@Author  : Ethan (euler52201044@163.com)
@Link    : https://github.com/Ethan16
@file    : null_pointer.c
@usage   :
@Version : 1.0
@Change  : 2018-08-05 12:54:36
"""
*/


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *some_memory = (char *)0;

    printf("A read from null %s \n", some_memory);
    sprintf(some_memory, "A write to null \n");

    exit(EXIT_SUCCESS);
}