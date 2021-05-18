#include <stdio.h>

int main(int argc, char *argv[]) {
    int length, k;
    printf("How long is arr: ");
    scanf("%d", &length);
    printf("How many rotations: ");
    scanf("%d", &k);
    int arr[length];
    int t = length, t_0;
    while (t){
        scanf("%d", &t_0);
        arr[length-t] = t_0;
        t--;
    }
    int temp;
    for (int i=0; i<k; i++) {
        temp = arr[0];
        for (int j = 0; j<length-1;j++){
            arr[j]=arr[j+1];
        }
        arr[length-1] = temp;
    }
    printf("[");
    for (int i = 0; i<length-1; i++){
        printf("%d, ", arr[i]);
        //printf("element arr[%d] = %d\n", i, arr[i]);
    }
    printf("%d]", arr[length-1]);
    return 0;
}


