//
// Created by 하윤 on 2021/08/01.
// prob.4673

#include <stdio.h>
#include <string.h>

int main(void){
    int sum = 0;
    int arr[10001];
    for(int i = 1; i<=10000;i++){
        sum += i;
        for(int j = i;j!=0;j/=10){
            sum += j%10;
        }//printf("**%d \n",sum);
        if(sum < 10001) arr[sum] = 1;
        sum = 0;
    }

    for(int i = 1;i<=10000;i++) {
        if (arr[i] != 1)
            printf("%d \n", i);
    }

    return 0;
}