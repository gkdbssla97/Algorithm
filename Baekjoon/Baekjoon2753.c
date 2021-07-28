//
// Created by 하윤 on 2021/07/28.
//prob.2753

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int n1;
    scanf("%d", &n1);

    int result = (n1 % 4 == 0 && (n1 % 100 != 0 || n1 % 400 == 0))? 1:0;

    printf("%d\n", result);




    return 0;
}