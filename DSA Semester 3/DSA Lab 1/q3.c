#include<stdio.h>
int main()
{
    float y1[12], y2[12];
    printf("Enter the amount of rainfall in the city for the last year and the first year respectively: \n");
    for (int i=0;i<12;i++){
        scanf("%f %f", &y1[i], &y2[i]);
    }
    printf("\t   January  February  March  April   May    June    July  August  September October November December\n");
    printf("This Year: ");
    for (int i=0;i<12;i++){
        printf("%5.1f   ", y2[i]);
    }
    printf("\nLast Year: ");
    for (int i=0;i<12;i++){
        printf("%5.1f   ", y1[i]);
    }
    float sum1=0, sum2=0;
    for (int i=0;i<12;i++){
        sum1+=y2[i];
        sum2+=y1[i];
    }
    printf("\nTotal Rainfall this Year : %5.2f\n", sum1);
    printf("Total Rainfall this Year : %5.2f\n", sum2);
    float avg1=sum1/12, avg2=sum2/12;
    printf("Average monthly Rainfall for this Year: %5.2f\n", avg1);
    printf("Average monthly Rainfall for this Year: %5.2f\n", avg2);
    return 0;
}