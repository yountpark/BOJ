#include <stdio.h>
#define MAX_SIZE 10001

int main() {

    int cnt = 0;
    int mini = MAX_SIZE + 1;
    int total = 0;
    int start = 0;
    int end = 0;
    int test[10001] = {1,1,0, };

    scanf("%d", &start);
    scanf("%d", &end);

    for(int i = 2; i <= end; i++){
        for(int j = 2; j < i-1; j++){
            if(i%j == 0){
                test[i] = 1;
            }
        }
    }

    for(int i = start; i <= end; i++){
        //printf("%d, ", test[i]);
        if(test[i] == 0){
            total += i;
            cnt++;
            if(mini > i){
                mini = i;
            }
        }

    }
    //printf("\n");

    if(cnt == 0){
        printf("-1");
    }
    else{
        printf("%d\n", total);
        printf("%d", mini);
    }
    return 0;
}