//
//  diliuzhang1.c
//  clianxi
//
//  Created by mingyue on 15/10/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    
    int a;
    char b;
    
    int c = scanf("%d,%c",&a,&b);
    printf("c = %d a = %d b = %c\n",c,a,b);

    

    int n = 5;
    while (n < 7) {
        printf("n = %d\n",n);
        n++;
        printf("Now n = %d\n",n);
    }
    
    printf("The loop has finished.\n");
    
    int true_val,false_val;
    
    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d,false = %d\n",true_val,false_val);
    
    long num;
    long sum = 0L;
    _Bool input_is_good;
    
    printf("Please enter an integer to be summed,");
    printf("(q to quit):");
    
    input_is_good = (scanf("%ld",&num) == 1);
    while (input_is_good) {
        
        sum = sum + num;
        printf("Please enter next integer(q to quit):");
        input_is_good = (scanf("%ld",&sum) == 1);
    }
    
    printf("Those integers sum to %ld.\n",sum);
    
    int x,y,z;
    x = (y = 3,(z = ++y +2) + 5);
    printf("x = %d\n",x);
    
    int houseprice;
    houseprice = 249,500;
    printf("houseprice = %d\n",houseprice);
    
        
    
    return 0;
}
