//
// Created by 하윤 on 2021/07/29.
//prob.11021

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a,b;
    for(int i = 0; i<n;i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i + 1, a + b);
    }

    return 0;
}