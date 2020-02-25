//
//  main.c
//  dishizhang
//
//  Created by mingyue on 15/10/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;
    
    for (index = 0; index < sizeof days / sizeof(days[0]); index++) {
        printf("Month %2d has %d days.\n",index + 1,days[index]);
    }
    
    
    
    return 0;
}
