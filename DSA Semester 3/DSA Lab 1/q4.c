#include<stdio.h>
int main()
{
    float n;
    repeat:
    printf("Enter the Richter Scale Number: ");
    scanf("%f", &n);
    printf("Characterization: ");
    if (n>=1 && n<=10){
        if (n<5.0){
            printf("Little or No Damage.\n");
        }
        else if (n>=5.0 && n<5.5){
            printf("Some Damage.\n");
        }
        else if (n>=5.5 && n<6.5){
            printf("Serious Damage, Walls may crack\n");
        }
        else if (n>=6.5 && n<7.5){
            printf("Disaster, Houses and building may collapse\n");
        }
        else if (n>7){
            printf("Catastrophe: Most Buildings Destroyed");
        }
    }
    else{
        printf("Please enter proper values and try again.\n");
        goto repeat;
    }
}