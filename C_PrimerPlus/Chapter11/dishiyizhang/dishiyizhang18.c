//
//  dishiyizhang18.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void ToUpper(char*);
int PunctCount(const char*);

int main(int argc, const char* argv[]){
    
    char line[LIMIT];
    
    puts("Please enter a line:");
    gets(line);
    ToUpper(line);
    puts(line);
    printf("That line has %d punction characters.\n",PunctCount(line));
    

}


void ToUpper(char* str){

    while (*str++) {
        *str = toupper(*str);
        //str++;
    }


}


int PunctCount(const char* str){

    int ct = 0;
    while (*str) {
        if (ispunct(*str)) {
            ct++;
        }
        str++;
    }
    return ct;
}











