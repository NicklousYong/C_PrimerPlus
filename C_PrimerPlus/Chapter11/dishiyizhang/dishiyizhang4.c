//
//  dishiyizhang4.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define DEF "I am a #define string."

int main(int argc, const char* argv[]){

    char str1[80] = "An array was initialized to me";
    const char * str2 = "A pointer was initialized to me";
    
    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);
    
    
    char side_a[] = "SIDE A";
    char dont[] = {'W','O','W','!'};
    char side_b[] = "SIDE B";
    
    puts(dont);

    return 0;
}
