#include <stdio.h>
#include <string.h>

int main() {

    int mark = 0;
    int sixnine = 0;
    int arr[10] = {0, };
    char num[1000001] = {0,};
    scanf("%s", num);
    

    for(int i = 0; i < strlen(num); i++){
        if(num[i] == '6' || num[i] == '9'){
            arr[6]++;
        }
        else{
            arr[num[i]-48]++;
        }
    }

    for(int i = 0; i < 10; i++){
        if(i == 6){
            sixnine = arr[i];
        }
        else{
            if(arr[i] > mark){
                mark = arr[i];
            }
        }
    }

    if(sixnine % 2 == 1){
        sixnine /= 2;
        sixnine++;
    }
    else{
        sixnine /= 2;
    }

    if(mark >= sixnine){
        printf("%d", mark);
    }
    else{
        printf("%d", sixnine);
    }
    return 0;
}