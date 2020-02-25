//
//  main.c
//  clianxi
//
//  Created by mingyue on 15/10/21.
//  Copyright © 2015年 G. All rights reserved.
//

//  C_Primer_Plus 第四章


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");
    printf("Here's the newest way to print a"
           "long string.\n");
    
    int age;
    float assets;
    char pet[30];
    
    printf("Enter your age,assets, and favorite pet.\n");
    scanf("%d  %f",&age,&assets);
    scanf("%s",pet);
    printf("%d $%.2f %s\n",age,assets,pet);
    
    
    int m,n;
    scanf("%d, %d",&n,&m);
    printf("%d %d\n",n,m);
    
    char pig[5];
    scanf("%s",pig);
    printf("%s\n",pig);
    
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;
    
    printf("what field width?\n");
    scanf("%d",&width);
    printf("The number is: %*d: \n",width,number);
    printf("Now enter a width and a precison:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f\n",width,precision,weight);
    
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d\n",n);
    
    int a = 1;
    int b = a++;
    printf("b = %d, a = %d\n",b, a);
    
    int c = 2;
    printf("c = %d",-c);
    
    
    return 0;
}
