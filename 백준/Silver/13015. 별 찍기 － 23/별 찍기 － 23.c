#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i; j++) putchar(' ');
        for (int j = 1; j <= n; j++) {
            putchar(j == 1 || j == n ? '*' : i == 0 ? '*' : ' ');
        }
        for (int j = 0; j < n * 2 - i * 2 - 3; j++) putchar(' ');
        for (int j = 1; j <= n; j++) putchar(j == 1 || j == n ? '*' : i == 0 ? '*' : ' ');
        printf("\n");
    }
    for (int i = 1; i < n; i++) putchar(' ');
    putchar('*');
    for (int i = 0; i < n - 2; i++) putchar(' ');
    putchar('*');
    for (int i = 0; i < n - 2; i++) putchar(' ');
    putchar('*');
    printf("\n");
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) putchar(' ');
        for (int j = 1; j <= n; j++) putchar(j == 1 || j == n ? '*' : i == 1 ? '*' : ' ');
        for (int j = 0; j < n * 2 - i * 2 - 1; j++) putchar(' ');
        for (int j = 1; j <= n; j++) putchar(j == 1 || j == n ? '*' : i == 1 ? '*' : ' ');
        printf("\n");
    }
    return 0;
}