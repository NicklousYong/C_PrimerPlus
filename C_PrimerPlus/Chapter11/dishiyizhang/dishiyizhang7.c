//
//  dishiyizhang7.c
//  Chapter11
//
//  Created by mingyue on 15/11/2.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void fit(char *, unsigned int);

int main(int argc, const char* argv[]){

    char mesg[] = "Hold on to your hats, hackets.";
    
    puts(mesg);
    fit(mesg, 7);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 8);

    return 0;
}

void fit(char * string, unsigned int size){

    if (strlen(string) > size) {
        *(string + size) = '\0';
    }
    

}
