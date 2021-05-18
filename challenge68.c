#include <stdio.h>

void print_bishops(int m, int pos[]){
    for(int i = 0; i<=m; i++){
        printf("|");
        for(int j = 0; j<=m; j++){
            printf(" 0 |");
        }
        printf("\n");
    }
    printf("%d", pos[0]);
}
int main(int argc, char *argv[]) {
    int number;
    scanf("%d", &number);
    int arr[4] = {0, 1, 2, 3};
    print_bishops(number, arr);
    return 0;
}

