/*
"""
@Date    : 2018-08-05 11:36:31
@Author  : Ethan (euler52201044@163.com)
@Link    : https://github.com/Ethan16
@file    : segment_fault.c
@usage   :
@Version : 1.0
@Change  : 2018-08-05 11:36:31
"""
*/


#include <stdlib.h>
#define ONE_K (1024)

int main()
{
    char *some_memory;
    char *scan_ptr;

    some_memory = (char *)malloc(ONE_K);
    if (some_memory == NULL) exit(EXIT_FAILURE);

    scan_ptr = some_memory;

    while(1) {
        *scan_ptr = '\0';
        scan_ptr++;
    }

    exit(EXIT_FAILURE);
}