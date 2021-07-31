//
// Created by 하윤 on 2021/07/31.
//prob.4344

#include <stdio.h>
#include <string.h>

int main(void){
    int num;
    scanf("%d",&num);

    int a,sub[1000], sum, cnt;
    double avg = 0.0;
    for(int i = 0;i < num;i++){
        scanf("%d", &a);
        cnt = 0, sum = 0;
        for(int j = 0;j < a; j++) {
            scanf("%d", &sub[j]);
            sum += sub[j];
        }
        avg = (double)sum / a;
        for(int k = 0; k <a; k++){
            if(sub[k] > avg)
                cnt++;
        }
        //printf("cnt: %d a: %d\n",cnt, a);
        printf("%.3lf%% \n",(double)(cnt*100)/a);

    }

    return 0;
}