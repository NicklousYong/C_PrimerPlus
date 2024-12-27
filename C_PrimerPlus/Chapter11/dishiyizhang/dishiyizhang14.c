//
//  dishiyizhang14.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(int argc, const char* argv[]){

    char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be";
    char * ps;
    
    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}
