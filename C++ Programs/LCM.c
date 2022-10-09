#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n1, n2, max;
    int x1, v1, x2, v2;
    char y[]={'Y','E','S','\0'}, n[]={'N','O', '\0'};
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (x1<x2 && v1<v2){
        printf("%s\n", n);
    }
    else{
        n1=x1+v1;
        n2=x2+v2;
        if (n1>n2)
        max = n1;
        else if (n2>n1)
        max = n2;
        while (true){
            if (max%n1==0 && max%n2==0){
                break;
            }
            else{
                max++;
            }
        }
        if (max){
            printf("%s\n", y);
        }
        else{
            printf("%s\n", n);
        }
    }
}