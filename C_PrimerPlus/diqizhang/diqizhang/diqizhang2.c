//
//  diqizhang2.c
//  diqizhang
//
//  Created by mingyue on 15/10/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>


int main(int argc,const char* argv[]){
    
    int num = 0;
    scanf("%d",&num);
    int div;
    for (div = 2; div < num; div++) {
        
        if (num % div == 0) {
            printf("%d is divisible by %d\n",num,div);
        }
        
    }
    
    printf("\n\n\n");
    
    for (div = 2; div * div <= num; div++) {
        if (num % div == 0) {
            printf("%d is divisible by %d and %d.\n",num,div,num/div);
        }
    }
    
    printf("\n\n\n");
    
    for (div = 2; div * div <= num; div++) {
        if (num % div == 0) {
            if (div * div != num) {
                printf("%d is divisible by %d and %d.\n",num,div,num/div);
            }else{
                printf("%d is divisible by %d.\n",num,div);
            }
        }
    }
        
    
    return 0;
}
