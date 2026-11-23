
#include <stdio.h>

struct Test1 {
    char a;
    int b;
};

int main() {
    printf("sizeof(struct Test1) = %zu\n", sizeof(struct Test1));
    return 0;
}
