#include <stdio.h>
#include <time.h>

int custom_random() {
    // timestamp saat ini sebagai seed
    unsigned int seed = (unsigned int)time(NULL);
    
    unsigned int a = 1664525;
    unsigned int c = 1013904223;
    // rumus
    int number = (seed * a + c + 7931) % 6 + 1 ;
    return number;
}

int main() {
    int result = custom_random();
    printf("%d\n", result);

    return 0;
}
