# include <stdio.h>

int main() {

    int n, i = 0;
    printf("Enter number to print its multiplication table: ");
    scanf("%d", &n);

    while(i < 10) {
        i++;
        printf("%d", n);
        printf(" x ");
        printf("%d", i);
        printf(" = ");
        printf("%d \n", n * i);
    }

    return 0;
}
