// File: format_specifiers_example.c
// Contoh penggunaan berbagai format specifier di bahasa C dengan komentar penjelas.

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("\n=== Integer Specifiers ===\n");
    int decimal = 42;
    unsigned int unsigned_decimal = 42;
    printf("Decimal integer (%%d): %d\n", decimal); // Format untuk integer desimal
    printf("Unsigned integer (%%u): %u\n", unsigned_decimal); // Format untuk unsigned integer
    printf("Octal integer (%%o): %o\n", decimal); // Format untuk integer oktal
    printf("Hexadecimal integer (%%x): %x\n", decimal); // Format untuk integer heksadesimal (huruf kecil)
    printf("Hexadecimal integer (%%X): %X\n", decimal); // Format untuk integer heksadesimal (huruf besar)

    printf("\n=== Floating-Point Specifiers ===\n");
    float f = 3.14159f;
    double d = 3.14159265358979;
    printf("Floating-point (%%f): %.2f\n", f); // Format untuk floating-point (2 digit desimal)
    printf("Scientific notation (%%e): %e\n", d); // Format untuk notasi ilmiah (huruf kecil)
    printf("Scientific notation (%%E): %E\n", d); // Format untuk notasi ilmiah (huruf besar)
    printf("Shortest representation (%%g): %g\n", d); // Format dengan representasi lebih pendek
    printf("Shortest representation (%%G): %G\n", d); // Format pendek dengan huruf besar

    printf("\n=== Character and String Specifiers ===\n");
    char c = 'A';
    char str[] = "Hello, C!";
    printf("Character (%%c): %c\n", c); // Format untuk karakter tunggal
    printf("String (%%s): %s\n", str); // Format untuk string

    printf("\n=== Pointer Specifiers ===\n");
    int num = 100;
    int *ptr = &num;
    printf("Pointer address (%%p): %p\n", ptr); // Format untuk alamat pointer

    printf("\n=== Length Modifiers ===\n");
    long long large_num = 123456789012345LL;
    unsigned long long large_unsigned = 123456789012345ULL;
    printf("Long long integer (%%lld): %lld\n", large_num); // Format untuk long long integer
    printf("Unsigned long long integer (%%llu): %llu\n", large_unsigned); // Format untuk unsigned long long integer

    printf("\n=== Miscellaneous Specifiers ===\n");
    printf("Literal %% symbol: 100%% done!\n"); // Menampilkan tanda '%' secara literal

    printf("\n=== Example of %%n Specifier ===\n");
    int char_count;
    printf("This sentence has %n characters before this point.\n", &char_count);
    printf("The count is: %d\n", char_count); // Menampilkan jumlah karakter yang telah dicetak

    return 0;
}
