//
// Created by 하윤 on 2021/08/01.
// prob.1065

#include <stdio.h>

int main(void){
    int num, sum = 0;
    int tmp;
    scanf("%d",&num);

    int cnt = 0;
    int n1, n2, n3;
    if(num<100)
        sum = num;
    else {
        for (int i = 100; i <= num; i++) {
            n1 = i/100;
            n2 = (i % 100) / 10;
            n3 = (i % 100) % 10;
            if ((n1 - n2) == (n2 - n3)) {
                //printf("n3: %d n2: %d n1: %d \n", n3, n2, n1);
                cnt++;
            }
        }
        sum = 99 + cnt;
    }
    printf("%d \n",sum);

    return 0;
}
