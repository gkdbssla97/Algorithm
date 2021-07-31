//
// Created by 하윤 on 2021/07/31.
//prob.2577

#include <stdio.h>

int main(void){
    int a,b,c,sum = 0;
    int arr[10] = {0,};

    scanf("%d %d %d",&a,&b,&c);
    sum = a*b*c;
    for(int i = sum;i!=0;i/=10)
        arr[i%10]++;
    for(int i = 0; i<10;i++)
        printf("%d\n",arr[i]);

    return 0;
}