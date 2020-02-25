//
//  diqizhang9.c
//  diqizhang
//
//  Created by mingyue on 15/10/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argv, const char* argc[]){

    char ch;
    printf("Give me a letter of the alphabet,and I will give");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter:type # to end my act.\n");
    
    while ((ch = getchar()) != '#') {
        
        if ('\n' == ch) {
            continue;
        }
        
        if (islower(ch)) {//是否小写字母
            switch (ch) {
                case 'a':
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati, racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher, brownish marten\n");
                    break;
                default:
                    printf("That's a stumper!\n");
                    break;
            }
        }else{
            printf("I recognize only lowercase letters.\n");
        }
        
        while (getchar() != '\n') {
            continue;
        }
        
        printf("Please type another letter or a #.\n");
    }
    
    printf("Bye!\n");

    return 0;
}
