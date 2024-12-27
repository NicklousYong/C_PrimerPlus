//
//  dishiyizhang16.c
//  Chapter11
//
//  Created by mingyue on 15/11/3.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define MAX1 20

int main(int argc, const char* argv[]){

    char first[MAX1];
    char last[MAX1];
    char formal[2 * MAX1 + 10];
    double prize;
    
    puts("Enter your first name:");
    gets(first);
    puts("Enter your last name:");
    gets(last);
    puts("Enter your prize money:");
    scanf("%lf",&prize);
    sprintf(formal,"%s, %-19s: $%6.2f\n",last,first,prize);
    puts(formal);

    return 0;
}
