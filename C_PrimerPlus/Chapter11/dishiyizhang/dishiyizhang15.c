//
//  dishiyizhang15.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define SIZE 40
#define TARGSIZE 7
#define LIM 5

int main(int argc, const char* argv[]){
    
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;
    
    printf("Enter %d words beginning with q: \n",LIM);
    while (i < LIM && gets(temp)) {
        if (strncmp(temp, "q", 1)) {
            printf("%s doesn't begin with q!\n",temp);
        }else{
            strncpy(qwords[i], temp, TARGSIZE - 1);
            qwords[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++) {
        puts(qwords[i]);
    }
    
    return 0;
}
