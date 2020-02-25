//
//  diliuzhang3.c
//  clianxi
//
//  Created by mingyue on 15/10/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define SIZE 10
#define FAR 72

double power(double n, int p);

int main(int argc, const char* arg[]){
    
    int index,score[SIZE];
    int sum = 0;
    float average;
    
    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0; index < SIZE; index++) {
        scanf("%d",&score[index]);
    }
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++) {
        printf("%5d",score[index]);
    }
    printf("\n");
    
    for (index = 0; index < SIZE; index++) {
        sum += score[index];
    }
    average = (float)sum/SIZE;
    printf("Sum of scores = %d, average = %.2f\n",sum,average);
    printf("That's a handicap of %.0f.\n",average - FAR);
    
    
    printf("%f",power(5, 10));
        
    
    return 0;
}

double power(double n, int p){

    double pow = 1;
    int i;
    
    for (i = 1; i <= p; i++) {
        pow *= n;
    }
    return pow;
}



