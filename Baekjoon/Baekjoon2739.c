//
// Created by 하윤 on 2021/07/29.
//prob.2739

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}