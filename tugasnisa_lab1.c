#include <stdio.h>
// untuk mengukur durasi eksekusi program
#include <time.h>

int custom_random() {
    // timestamp saat ini sebagai seed
    //unsigned int bilangan bulat non negatif
    unsigned int seed = (unsigned int)time(NULL);

    // rumusnya
    int number = (seed * seed / 1000000) % 6 + 1;
    //Mengembalikan nilai angka random yang dihasilkan oleh fungsi 
    return number;
}

int main() {
    int result = custom_random();
    printf("%d\n", result);

    return 0;
}
