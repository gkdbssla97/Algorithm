//
// Created by 하윤 on 2021/07/29.
//prob.10871

#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d",&N,&X);
    int arr[10000];

    for(int i = 0; i<N;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<N;i++) {
        if (arr[i] < X)
            printf("%d ", arr[i]);
    }


    return 0;
}
