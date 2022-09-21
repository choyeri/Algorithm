#include <stdio.h>
#define MAX 100000

int stack[MAX];
int top = -1;

void push(int num_data) {
    if (top >= MAX - 1) return;
    stack[++top] = num_data;
}

void pop() {
    if (top < 0) return;
    stack[top--] = 0;
}

int main() {
    int K, num_data, sum = 0;
    scanf("%d", &K);
    while (K--) {
        scanf("%d", &num_data);
        if (num_data == 0) pop();
        else push(num_data);
    }

    for (int i = 0; i <= top; i++)
        sum += stack[i];
    printf("%d\n", sum);
    return 0;
}