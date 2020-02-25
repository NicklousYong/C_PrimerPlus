//
//  main.c
//  dishiqizhang
//
//  Created by mingyue on 15/12/1.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define TSIZE 45
#define FMAX 5

struct film{
    char title[TSIZE];
    int rating;
};



int main(int argc, const char * argv[]) {
    
    struct film movies[FMAX];
    int i = 0;
    int j;
    
    puts("Enter first movies title: ");
    while (i < FMAX && gets(movies[i].title) != NULL && movies[i].title[0] != '\0') {
        puts("Enter your rating <0 - 10>: ");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter next movie title (empty line to stop): ");
    }
    
    if (i == 0) {
        printf("No data entered. ");
    }else{
        printf("Here is the movie list: \n");
    }
    
    for (j = 0; j < i; j++) {
        printf("Movie:%s Rating:%d\n",movies[j].title,movies[j].rating);
    }
    
    
    return 0;
}
