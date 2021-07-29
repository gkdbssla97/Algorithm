//
// Created by 하윤 on 2021/07/29.
//prob.8393

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}