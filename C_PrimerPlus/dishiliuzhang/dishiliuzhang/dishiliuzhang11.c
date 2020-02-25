//
//  dishiliuzhang11.c
//  dishiliuzhang
//
//  Created by mingyue on 15/12/1.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Size 10

void show_array(const int ar[], int n);

int main(int argc, const char * argv[]){

    int values[Size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[Size];
    double curious[Size/2] = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    puts("memcpy() used:");
    puts("value (original data):");
    
    show_array(values, Size);
    memcpy(target, values, Size * sizeof(int));
    puts("target (copy of values):");
    show_array(target, Size);
    
    puts("\nUsing memove() with overlapping ranges:");
    memmove(values + 2, values, 5 * sizeof(int));
    puts("values -- elements 0-5 copied to 2-7: ");
    show_array(values, Size);
    
    puts("\nUsing memcpy() to copy double to int: ");
    memcpy(target, curious, (Size / 2) * sizeof(double));
    puts("target -- 5 doubles into 10 int positions: ");
    show_array(target, Size);
    
    return 0;
}

void show_array(const int ar[], int n){

    int i;
    
    for (i = 0; i < n; i++) {
        printf("%d ",ar[i]);
    }
    putchar('\n');
    
}







