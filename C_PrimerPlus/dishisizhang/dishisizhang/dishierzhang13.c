//
//  dishierzhang13.c
//  dishisizhang
//
//  Created by mingyue on 15/11/26.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum spectrum {red, orange, yellow, green, blue, violet};
const char* colors[] = {"red","orange","yellow","green","blue","violet"};
#define LEN 30

int main(int argc, const char* argv[]){

    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;
    
    puts("Enter a color (empty line to quit):");
    while (gets(choice) != NULL && choice[0] != '\0') {
        for (color = red; color <= violet; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }
        
        if (color_is_found) {
            switch (color) {
                case red:
                    puts("Rose are red:");
                    break;
                case orange:
                    puts("Poppies are orange:");
                    break;
                case yellow:
                    puts("Sunflowers are yellow:");
                    break;
                case green:
                    puts("Grass are green:");
                    break;
                case blue:
                    puts("Bluebells are blue:");
                    break;
                case violet:
                    puts("Violets are violet:");
                    break;
                default:
                    break;
            }
        }else{
            printf("I don't know about the color %s.\n",choice);
        }
        color_is_found = false;
        puts("Next color, please (empty line to quit):");
        
    }
    
    puts("Goodbye!");
    
    int p[3] = {1,5,3};
    int *a;
    a = p;
    printf("%d\n",*(a+1));
    
    char * q = "ahc";
    char * b;
    b = q;
    printf("%s\n",b+2);
    
    char  o = 'b';
    char * m = &o;
    printf("%c\n",*m);
    
    
    return 0;
}
