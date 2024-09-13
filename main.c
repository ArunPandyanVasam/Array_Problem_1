#include <stdio.h>

int main(void) {
    //Write a program in C to store elements in an array and print them.
    int n;
    int arr[100];
    scanf("%d", &n);
    printf("\nInput %d elements in the array", n);

    for (int i = 0; i < n; i++) {
        printf("\nelement - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
