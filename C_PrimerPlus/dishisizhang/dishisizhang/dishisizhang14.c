//
//  dishisizhang14.c
//  dishisizhang
//
//  Created by mingyue on 15/11/26.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char showmenu(void);
void eatline(void);
void show(void(*fp)(char *), char * str);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(int argc, const char * argv[]){

    char line[81];
    char copy[81];
    char choice;
    void (*pfun)(char *) = NULL;
    
    puts("Enter a string (empty line to quit:)");
    while (gets(line) != NULL && line[0] != '\0') {
        
        while ((choice = showmenu()) != 'n') {
            switch (choice) {
                case 'u':
                    pfun = ToUpper;
                    break;
                case 'l':
                    pfun = ToLower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
                default:
                    break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empty line to quit):");
    }
    puts("Bye!");
    return 0;


    return 0;
}

char showmenu(void){
    char ans;
    puts("Enter menu choice:");
    puts("u) uppercase 1) lowercase");
    puts("t) transposed case o) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while (strchr("ulton", ans) == NULL) {
        puts("Please enter a u, l, t, o, or n:");
        eatline();
    }
    return ans;
}

void eatline(void){
    while (getchar() != '\n') {
        continue;
    }
}

void ToUpper(char * str){
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char * str){
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void Transpose(char * str){
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        }else if (isupper(*str)){
            *str = tolower(*str);
        }
        str++;
    }
}

void Dummy(char * str){
    //不改变字符串
}

void show(void(*fp)(char *), char* str){
    (*fp)(str);
    puts(str);
}















