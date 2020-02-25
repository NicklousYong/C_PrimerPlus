//
//  dishizhang2.c
//  dishizhang
//
//  Created by mingyue on 15/10/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define SIZE 4

int main(int argc, const char* argv[]){
    
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    
    printf("value = %d, value2 = %d\n",value1,value2);
    for (i = -1; i <= SIZE; i++) {
        arr[i] = 2 * i + 1;
    }
    for (i = -1; i < 7; i++) {
        printf("%2d %d\n",i, arr[i]);
    }
    
    printf("value1 = %d, value2 = %d\n",value1,value2);
    
    return 0;
}
