//
//  diliuzhang.c
//  clianxi
//
//  Created by mingyue on 15/10/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){

    long num;
    long sum = 0L;
    int status;
    
    printf("Please enter an integer to be summed.");
    printf("q to (quit):");
    status = scanf("%ld",&num);
    while (status == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);
    
        
    
    
    
    
    
    return 0;
}
