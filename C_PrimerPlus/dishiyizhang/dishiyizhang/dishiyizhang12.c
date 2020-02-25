//
//  dishiyizhang12.c
//  dishiyizhang
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define LISTSIZE 7

int main(int argc, const char* argv[]){

    char * list[LISTSIZE] = {"astronomy","astounding","astrophysics","astropppp","ostracize","asterism","astrooooo"};
    int count = 0;
    int i;
    
    for (i = 0; i < LISTSIZE; i++) {
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Found:%s\n",list[i]);
            count++;
        }
    }
    
    printf("The list contained %d words beginning with astro.\n",count);
    
    return 0;
}
