//
//  main.c
//  dishiliuzhang
//
//  Created by mingyue on 15/11/27.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - OsCar Wilde"
#define FOUR TWO*TWO
#define PX printf("X is %d.\n",x)
#define FMT "X is %d.\n"





int main(int argc, const char * argv[]) {
    
    int x = TWO;
    
    PX;
    x = FOUR;
    printf(FMT,x);
    printf("%s\n",OW);
    printf("TWO:OW\n");
    
    return 0;
}
