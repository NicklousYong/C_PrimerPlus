//
//  dishizhang4.c
//  dishizhang
//
//  Created by mingyue on 15/10/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define MONTHS 12



int main(int argc, const char* argv[]){

    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    
    for (index = 0; index < MONTHS; index++) {
        printf("Months %2d has %d days.\n",index + 1, *(days + index));
    }
    
    return 0;
}
