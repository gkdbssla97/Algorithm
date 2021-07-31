//
// Created by 하윤 on 2021/07/31.
//prob.1546

#include <stdio.h>

int main(void){
    int n, max = 0;
    double arr[1000];

    scanf("%d",&n);
    for(int i = 0; i<n;i++) {
        scanf("%lf", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }//printf("%d\n",max);
    double avg= 0.0;
    for(int i = 0; i<n; i++) {
        arr[i] = arr[i] / max * 100;
        avg += arr[i];
    }
    printf("%lf\n",avg/n);

    return 0;
}