#include <stdio.h>

int num = 10;
int arr[10] = {1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end) {
    if(start >= end)
        return;
    int key = start;
    int i = start + 1;
    int j = end;
    int tmp;

    while(i <= j){
        while(data[i] >= data[key]){
            i++;
        }
        while(data[j] <= data[key] && j > start){
            j--;
        }
        if(i > j) { //현재 엇갈린 상태면 키값과 교체
            tmp = data[j];
            data[j] = data[key];
            data[key] = tmp;
        } else {
            tmp = data[j];
            data[j] = data[i];
            data[i] = tmp;
        }

        quickSort(data, start, j - 1);
        quickSort(data, j + 1, end);
    }

}

int main(void){
    quickSort(arr,0,num - 1);
    for(int i = 0;i < 10;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
