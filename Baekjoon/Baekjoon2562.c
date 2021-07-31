//
// Created by 하윤 on 2021/07/31.
//prob.2562

#include <stdio.h>

int main(void){
    int arr[9];
    int max = 0;

    for(int i = 0; i<9;i++) {
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }printf("%d\n",max);

    for(int i = 0;i<9;i++)
        if(max == arr[i])
            printf("%d\n",i+1);
    return 0;
}