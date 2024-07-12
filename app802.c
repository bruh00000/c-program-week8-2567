#include <stdio.h>
int forloop();
int main(){

    int number, i;
    printf("Enter a number to generate the table in C : ");
    scanf("%d",&number);

    printf("\nThe multiplication table of %d\n", number);
    forloop();
    printf("\n");
    // printf("******************************\n");
    for(i = 1; i <= 12; i = i + 1)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}

int forloop(){
    int i = 1, count = 30;
    for ( i = 1; i <= count; i++)
    {
        printf("*");
    }
    return 0;
}