//
//  dishiyizhang10.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
#define MAX1 40

int main(int argc, const char* argv[]){

    char try[MAX1];
    
    puts("Who is buried in Grant's tomb?");
    gets(try);
    
    while (strcmp(try, ANSWER) != 0) {
        puts("No,that's wrong.Try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}

