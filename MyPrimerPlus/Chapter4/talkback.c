
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void) {
    float weight,volume;
    int size,letters;
    char name[40];

    printf("Hi！ What's your first name?");
    scanf("%s",name);
    printf("whats your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight/DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
    printf("also,your first name has %d letters,\n",letters);
    printf("you have %d bytes to store it ",size);



    return 0;
}