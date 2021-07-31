//
// Created by 하윤 on 2021/07/31.
//prob.10818

#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);

    int num;
    int max = -1000001, min = 1000001;
    for(int i = 0;i < a;i++) {
        scanf("%d", &num);
        if(max < num)
            max = num;
        if(min > num)
            min = num;
    }
    // int max = -99999, min = 99999;

    printf("%d %d",min, max);

    return 0;
}