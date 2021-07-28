//
// Created by 하윤 on 2021/07/28.
//prob.2884

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    int rH = 0, rM = 0;
    if (M >= 45) {
        rM = M - 45;
        rH = H;
    }
    else{
        M = 45 - M;
        rM = 60 - M;
        if (H == 0)
            H = 24;
        H -= 1;
    }
    printf("%d %d\n", H, rM);



    return 0;
}