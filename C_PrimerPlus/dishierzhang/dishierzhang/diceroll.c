//
//  diceroll.c
//  dishierzhang
//
//  Created by mingyue on 15/11/6.
//  Copyright © 2015年 G. All rights reserved.
//

#include "diceroll.h"
#include <stdlib.h>

int roll_count = 0;

static int rollem(int sides){

    int roll;
    
    roll = rand() % sides + 1;
    ++roll_count;
    return roll;

}

int roll_n_side(int dice, int sides){

    int d;
    int total = 0;
    if (sides < 2) {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1) {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for (d = 0; d < dice; d++) {
        total += rollem(sides);
    }
    return total;
    
}





