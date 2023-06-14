#include <stdio.h>

struct Apple {
    void (*g)();
};

void printApple() {
    printf("apple\n");
}

int main() {
    struct Apple apple;
    apple.g = printApple;

    apple.g();

    return 0;
}
