//
// Created by 하윤 on 2021/07/29.
//prob.2438

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    //int a,b;
    for(int i = 1; i<=n;i++) {
        for(int j = 0;j<i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
