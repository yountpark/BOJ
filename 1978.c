#include <stdio.h>
#define MAX_SIZE 1001

int main() {

    int cnt = 0;
    int num = 0;
    int arr[1001] = {0, };
    int test[1001] = {1,0, };
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 2; i < MAX_SIZE; i++){
        for(int j = i+1; j < MAX_SIZE; j++){
            if(j%i == 0){
                test[j] = 1;
            }
        }
    }
    for(int i = 0; i < num; i++){
        if(test[arr[i]] == 0){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}