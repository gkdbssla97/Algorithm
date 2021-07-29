//
// Created by 하윤 on 2021/07/29.
//prob.10950

#include <stdio.h>
int main() {
    int a,b,t;
    scanf("%d", &t);

    for (int i=0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}