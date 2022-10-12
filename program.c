# include <stdio.h>

int main() {

    int n, i = 0;

    printf("Enter number to print its multiplication table: ");
    scanf("%d", &n);
    printf("\n");

    while(i < 10) {
        i++;
        printf("%d x %d = %d \n", n, i, n * i);
    }

    return 0;
}
