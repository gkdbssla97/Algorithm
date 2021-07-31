//
// Created by 하윤 on 2021/07/31.
//prob.3052

#include <stdio.h>

int main(void){
    int num;
    int arr[42] = {0,};

    for(int i = 0; i<10; i++){
        scanf("%d",&num);
        arr[num % 42]++;
    }
    int cnt = 0;
    for(int i = 0; i<42; i++){
        if(arr[i] != 0)
            cnt++;
    }
    printf("%d\n",cnt);


    return 0;
}