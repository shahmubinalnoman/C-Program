#include <stdio.h>

void print_spaces(int n) {
    for(int i = 0; i < n; i++) {
        printf(" ");
    }
}

void print_asterisks(int n) {
    for(int i = 0; i < n; i++) {
        printf("*");
    }
}

void print_diamond(int size) {
    for(int i = 1; i <= size; i++) {
        print_spaces(size-i);
        print_asterisks(2*i-1);
        printf("\n");
    }

    for(int i = size-1; i >= 1; i--) {
        print_spaces(size-i);
        print_asterisks(2*i-1);
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the diamond: ");
    scanf("%d", &size);

    print_diamond(size);

    return 0;
}
