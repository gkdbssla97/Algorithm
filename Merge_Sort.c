#include <stdio.h>
#define num 8
int sorted[8];// 정렬 배열은 반드시 전역변수로 선언

void merge(int a[], int m, int mid, int n){
    int i = m;
    int j = mid +1;
    int k = m;
    // 작은 순서대로 배열에 삽입
    while(i <= mid && j <= n){
        if(a[i] <= a[j]){
            sorted[k] = a[i];
            i++;
        } else{
            sorted[k] = a[j];
            j++;
        }k++;
    }// 남은 데이터도 삽입
    if(i > mid){
        for(int t = j; t <= n; t++) {
            sorted[k] = a[t];
            k++;
        }
    } else{
        for(int t = i; t <= mid; t++){
            sorted[k] = a[t];
            k++;
        }
    }// 정렬된 배열 삽입
    for(int t = m; t<=n; t++)
        a[t] = sorted[t];
}
void mergeSort(int a[], int m, int n){
    // 크기가 1보다 큰 경우
    if(m < n){
        int mid = (m + n) / 2;
        mergeSort(a, m, mid);
        mergeSort(a, mid+1, n);
        merge(a, m, mid, n);
    }
}
int main(void){
    int arr[num] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(arr,0,num - 1);

    for(int i = 0; i < num; i++)
        printf("%d ",arr[i]);

    return 0;
}
