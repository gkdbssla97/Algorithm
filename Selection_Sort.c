#include <stdio.h>

int main(void){
    int tmp = 0,idx,min;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    for(int i = 0; i<10;i++){
        min = 9999;
        for(int j = i; j<10;j++){
            if(min > arr[j]){
                min = arr[j];
                idx = j;
            }
        }tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }for(int i = 0; i<10; i++)
        printf("%d ",arr[i]);

    return 0;
}