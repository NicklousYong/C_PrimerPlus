//
//  dishierzhang4.c
//  dishierzhang
//
//  Created by mingyue on 15/11/4.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
void report_count();
void accumulate(int k);
int count = 0;
extern int y;


int main(int argc, const char* argv[]){

    int value;
    register int i;
    
    static int j = 0;
    
    printf("Enter a positive integer(0 to quit):");
    while (scanf("%d",&value) == 1 && value > 0) {
        static int k = 0;
        ++count;
        for (i = value; i >= 0; i--) {
            accumulate(i);
        }
        j++;
        k++;
        y++;
        printf("j = %d\n",j);
        printf("k = %d\n",k);
        printf("y = %d\n",y);
        printf("Enter a positive integer(0 to quit):");
        
    }
    report_count();

    return 0;
}

void report_count(){

    printf("Loop executed %d times\n",count);

}







