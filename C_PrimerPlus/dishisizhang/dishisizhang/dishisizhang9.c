//
//  dishisizhang9.c
//  dishisizhang
//
//  Created by mingyue on 15/11/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(int argc, const char* argv[]){
    
    struct book readfirst;
    int score;
    
    printf("Enter test score:");
    scanf("%d", &score);
    
    if (score >= 84) {
        readfirst = (struct book){"Crime and Punishment","Fyodor Dostoyvsky",9.99};
    }else{
        readfirst = (struct book){"Mr. Bouncy's Nice hat","Fred Winsome",5.99};
    }
    
    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n",readfirst.title, readfirst.author, readfirst.value);
    
    return 0;
}
