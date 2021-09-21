#include <stdio.h>
int tree(int len) {
    int i, m, n, a = 1;
    for (i = len - 1; i > -1; i--) {
        for (m = i; m > 0; m--) {
            printf(" ");
        }
        for (n = 0; n < a; n++) {
            printf("*");
        }
        printf("\n");
        a = a + 2;
    }
    return 0;
}
int main() {
    int number;
    scanf("%d", &number);
    tree(number);
    return 0;
}
