//
//  main.c
//  Chapter11
//
//  Created by mingyue on 15/10/29.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define MSG "You must have many talents. Tell me some."
#define LIM 5
#define LINELEN 81

int main(int argc, const char * argv[]) {
    
    char name[LINELEN];
    char talents[LINELEN];
    int i;
    const char m1[40] = "Limit yourself to one line's worth.";
    const char m2[] = "If you can't think of anything,fake it";
    const char* m3 = "\nEnough about me - what's your name?";
    const char* mytal[LIM] = {"Adding numbers swiftly", "Multiplying accurately", "Stashing data", "Following instuctions to the letter", "Understanding the C language"};
    
    printf("Hi! I'm Clyde the Computer."
           " I have many talents.\n");
    printf("Let me tell you some of them.\n");
    puts("What were they? Ah,yes,here's a partial list.");
    
    for (i = 0; i < LIM; i++) {
        puts(mytal[i]);
    }
    
    puts(m3);
    gets(name);
    
    printf("Well, %s, %s\n",name,MSG);
    printf("%s\n%s\n",m1,m2);
    gets(talents);
    puts("Let's see if I've got that list:");
    puts(talents);
    printf("Thanks for the information,%s\n",name);
    

    return 0;
}
