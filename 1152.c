#include <stdio.h>
#define MAX_SIZE 1000001
int main() {

    int cnt = 0;
    char mark[MAX_SIZE] = {0,};
    char arr[MAX_SIZE] = {0,};
    fgets(arr, MAX_SIZE, stdin);
    for(int i = 0; i < MAX_SIZE; i++){
        if(arr[i] >= 65){
            mark[i] = 1;
        }
    }
    for(int i = 1; i < MAX_SIZE; i++){
        if(mark[i-1] == 1 && mark[i] == 0){
            cnt++;
        }
    }
    printf("%d", cnt);
    //printf("%s",arr);
    return 0;
}