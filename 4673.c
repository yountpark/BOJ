#include <stdio.h>


int selfnumber(int num){

    int result = num;
    while(num > 0){
        result += num % 10;
        num /= 10;
    }
    result += num;
    return result;
}

int main() {

    int save[20000] = { 0, };
    for(int i = 1; i <= 10000; i++){
        save[selfnumber(i)] = 1;
    }
    for(int i = 1; i <= 10000; i++){
        if(save[i] != 1){
            printf("%d\n", i);
        }
    }
    return 0;
}
