#include<stdio.h>
int main(){
    float num[3], min;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &num[i]);
    }
    min = num[0];
    for (int i = 0; i < 3; i++)
    {
        while (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("%f", min);
    return 0;    
}