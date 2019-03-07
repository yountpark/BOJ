#include <stdio.h>

int main() {

    int check1 = 0;
    int now = 0;
    int yut[12] = { 0, };
    for(int i = 0; i < 12; i++){
        scanf("%d", &yut[i]);
    }

    for(int i = 0; i < 3; i++){
        check1 = 0;
        for(int j = 0; j < 4; j++){
            if(yut[now] == 1){
                check1++;
            }
            now++;
        }
        switch(check1){
            case 0:
                printf("D\n");
                break;
            case 1:
                printf("C\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("A\n");
                break;
            case 4:
                printf("E\n");
                break;

        }
    }
    return 0;
}