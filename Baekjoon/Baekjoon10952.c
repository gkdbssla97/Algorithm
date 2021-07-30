//
// Created by 하윤 on 2021/07/30.
//prob.10952

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int H, M;

    while (1) {
        scanf("%d %d", &H, &M);

        if (H == 0 && M == 0)
            break;
        printf("%d\n", H + M);



    }
    return 0;
}