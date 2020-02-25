//
//  diliuzhang2.c
//  clianxi
//
//  Created by mingyue on 15/10/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main(int argc, const char * arg[]){

    int t_ct;
    double time,x1;
    int limit;
    printf("Enter the number of terms you want:");
    scanf("%d",&limit);
    for (time = 0, x1 = 1, t_ct = 1; t_ct <= limit; t_ct++,x1 *= 2) {
        time += 1.0/x1;
        printf("time = %f when terms = %d.\n",time,t_ct);
    }
    
    
    int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) {
            
            printf("%c",ch);
            
        }
        
        printf("\n");

    }
    
    const int ROWS1 = 6;
    const int CHARS1 = 6;
    int row1;
    char ch1;
    for (row1 = 0; row1 < ROWS1; row1++) {
        for (ch1 = ('A' + row1); ch1 < ('A' + CHARS1); ch1++) {
            printf("%c",ch1);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
