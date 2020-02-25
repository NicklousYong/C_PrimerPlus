//
//  diqizhang8.c
//  diqizhang
//
//  Created by mingyue on 15/10/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char* argv[]){

    float length,width;
    printf("Enter the length of the rectangle:\n");
    
    while (scanf("%f",&length) == 1) {
        printf("Length = %0.2f:\n",length);
        printf("Enter it's width:\n");
        
        if (scanf("%f",&width) != 1) {
            break;
        }
        
        printf("Width = %0.2f:\n",width);
        printf("Area = %0.2f:\n",length * width);
        printf("Enter the length of the rectangle:\n");
    }
    
    printf("Done.\n");
    
    
    return 0;

}
