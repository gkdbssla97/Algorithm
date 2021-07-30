//
// Created by 하윤 on 2021/07/30.
//prob.10951

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int H, M;
    char ch;
    while (scanf("%d %d", &H, &M) != EOF) {
        //scanf("%d %d", &H, &M);

        printf("%d\n", H + M);

    }
    return 0;
}
