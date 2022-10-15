#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[5], b[5], c[5], d[5];
    printf("Enter the number of votes for Candidate A: ");
    for (int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number of votes for Candidate B: ");
    for (int i=0;i<5;i++){
        scanf("%d", &b[i]);
    }
    printf("Enter the number of votes for Candidate C: ");
    for (int i=0;i<5;i++){
        scanf("%d", &c[i]);
    }
    printf("Enter the number of votes for Candidate D: ");
    for (int i=0;i<5;i++){
        scanf("%d", &d[i]);
    }
    printf("\t    Precinct   Candidate A   Candidate B   Candidate C   Candidate D\n");
    for (int i=0;i<5;i++){
        printf("\t\t%d\t%d\t\t%d\t\t%d\t\t%d\n", i+1, a[i], b[i], c[i], d[i]);
    }
    int sumA=0, sumB=0,sumC=0, sumD=0;
    for (int i=0;i<5;i++){
        sumA+=a[i];
        sumB+=b[i];
        sumC+=c[i];
        sumD+=d[i];
    }
    printf("Total Votes Gained by Candidates: \n");
    printf("Candidate A: %d\nCandidate B: %d\nCandidate C: %d\nCandidate D: %d\n", sumA, sumB, sumC, sumD);
    int grandsum=sumA+sumB+sumC+sumD;
    printf("GrandSum = %d\n", grandsum);
    int per1=((float)sumA/(float)grandsum)*100;
    int per2=((float)sumB/(float)grandsum)*100;
    int per3=((float)sumC/(float)grandsum)*100;
    int per4=((float)sumD/(float)grandsum)*100;
    if (per1>=50){
        printf("\nCandidate A is the WINNER!!!\n");
    }
    else if (per2>=50){
        printf("\nCandidate B is the WINNER!!!\n");
    }
    else if (per3>=50){
        printf("\nCandidate C is the WINNER!!!\n");
    }
    else if (per4>=50){
        printf("\nCandidate D is the WINNER!!!\n");
    }
    else{
        printf("A runnoff will have to be conducted between ");
        int parr[4]={per1,per2,per3,per4};
        int x=1;
        while (x<4){
            for (int i=0;i<4-x;i++){
                if (parr[i]<parr[i+1]){
                    int temp=parr[i];
                    parr[i]=parr[i+1];
                    parr[i+1]=temp;
                }
            }
            x++;
        }
    if (per1==parr[0]){
    printf("Candidate A and");
    }
    else if (parr[0]==per2)
    printf("Candidate B and");
    else if (parr[0]==per3)
    printf("Candidate C and");
    else{
    printf("Candidate D and");
    }


    if (parr[1]==per1)
    printf(" Candidate A.\n");
    else if (parr[1]==per2)
    printf(" Candidate B.\n");
    else if (parr[1]==per3)
    printf(" Candidate C.\n");
    else
    printf(" Candidate D.\n");
    }
}