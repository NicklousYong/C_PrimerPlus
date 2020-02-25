//
//  dishierzhang7.c
//  dishierzhang
//
//  Created by mingyue on 15/11/5.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

extern int rand0(void);
extern void srand1(unsigned int x);

int main(int argc, const char* argv[]){
    
    int count = 0;
    unsigned seed;
    
    printf("Please enter your choice for seed.\n");
    
    while (scanf("%u",&seed) == 1) {
        srand1(seed);
        for (count = 0; count < 5; count++) {
            printf("%d\n",rand0());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    
    printf("Done\n");

    return 0;
}
