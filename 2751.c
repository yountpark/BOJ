#include <stdio.h>

void QuickSort(int arr[], int left, int right) {

    int l = left, r = right;
    int temp;
    int pivot = arr[(left + right) / 2];

    while (l <= r) {

        while (arr[l] < pivot) {
            l++;
        }
        while (arr[r] > pivot){
            r--;
        }

        if (l <= r) {
            if (l != r) {
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
            }
            l++;
            r--;

        }
    }
    if (left < r)
        QuickSort(arr, left, r);
    if (l < right)
        QuickSort(arr, l, right);
}


int main() {

    int num;
    int arr[1000001] = { 0, };
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    QuickSort(arr, 0, num-1);

    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}


