//
//  dishiyizhang8.c
//  dishiyizhang
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(int argc, const char* argv[]){

    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    
    puts("What is your favorite flower?");
    gets(flower);
    strcat(flower, addon);
    puts(flower);
    puts(addon);

    return 0;

}
