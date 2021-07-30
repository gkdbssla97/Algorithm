//
// Created by 하윤 on 2021/07/30.
//prob.1110

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int a,tmp;

    scanf("%d", &a);
    if (a < 10) a *= 10;
    int x = 0, y = 0, result = 0, cnt = 1;
    tmp = a;
    while (1) {
        y = a % 10;
        a /= 10;
        x = a;
        result = x + y;
        if (result < 10)
            a = y*10 + result;
        else {
            result %= 10;
            a = y*10 + result;
        }
        if (tmp == a) break;
        cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}