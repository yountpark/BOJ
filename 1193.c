#include <stdio.h>

int main() {

    int x, denom, numer;
    scanf("%d", &x);
    int tot = 0, times = 1;
    for(int i = 1;;i++){

        for(int j = 0;j < i;j++){}

        tot += i;
        times++;

        if(tot >= x){
            break;
        }

    }
    //printf("%d   %d\n", tot, times);
    if(times % 2 == 0){
        numer = tot - x + 1;
        denom = times - numer;
    }
    else{
        denom = tot - x + 1;
        numer = times - denom;
    }
    printf("%d/%d", numer, denom);
    return 0;
}