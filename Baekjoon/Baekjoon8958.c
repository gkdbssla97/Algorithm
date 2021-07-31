//
// Created by 하윤 on 2021/07/31.
//prob.8958

#include <stdio.h>
#include <string.h>

int main(void){
    int num;
    scanf("%d", &num);

    char str[81];
    int cnt,sum,n = 0;
    for(int i = 0;i < num;i++){
        cnt = 0, sum = 0, n = 0;
        scanf("%s",str);
        getchar();
        //printf("%s \n",str);
        for(int j = 0; j<strlen(str);j++){
            if(str[n] == 'O')
                cnt++;
            if(str[n] == 'X')
                cnt = 0;
            sum += cnt;
            n++;
        }
        printf("%d\n", sum);
    }

    return 0;
}