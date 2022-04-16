#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number=rand()%100 +1; // Generate a random number between 1 to 100
    //keep runing the loop untill the number is guessed
    printf("The number is %d",number);
}