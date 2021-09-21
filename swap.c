#include <stdio.h>
int swap(int num1, int num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("%d %d", num1, num2);
    return 0;
}
int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}
