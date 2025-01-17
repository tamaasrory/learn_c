// File: c_language_basics.c
// Penjelasan tentang data types, konsep procedural, file I/O, dan macam-macam loop di bahasa C.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 1. Data Types in C
// C memiliki berbagai tipe data untuk menyimpan informasi berbeda.
void explainDataTypes() {
    printf("\n=== Data Types in C ===\n");

    // Integer (bilangan bulat)
    int a = 10;
    printf("int: %d\n", a);

    // Floating point (bilangan desimal)
    float b = 5.5f;
    printf("float: %.2f\n", b);

    // Double (presisi lebih tinggi dibanding float)
    double c = 10.123456;
    printf("double: %.6f\n", c);

    // Character (satu karakter)
    char d = 'A';
    printf("char: %c\n", d);

    // Boolean (true/false, menggunakan stdbool.h)
    bool e = true;
    printf("bool: %s\n", e ? "true" : "false");

    // String (array karakter)
    char f[] = "Hello, World!";
    printf("string: %s\n", f);

    // Input dari user
    int userInput;
    printf("Enter an integer: ");
    scanf("%d", &userInput);
    printf("You entered: %d\n", userInput);
}

// 2. Procedural Programming Concept in C
// Bahasa C mendukung pemrograman prosedural, yaitu membagi program menjadi fungsi yang lebih kecil.
void greet() {
    printf("Hello, this is a procedural function!\n");
}

void greetUser(char name[]) {
    printf("Hello, %s! Welcome to procedural programming in C.\n", name);
}

void explainProceduralConcept() {
    printf("\n=== Procedural Programming in C ===\n");

    greet(); // Memanggil fungsi greet

    char userName[50];
    printf("Enter your name: ");
    scanf("%s", userName);
    greetUser(userName);
}

// 3. File I/O in C
// Menulis dan membaca file menggunakan fungsi seperti fopen, fprintf, fscanf, fclose.
void explainFileIO() {
    printf("\n=== File I/O in C ===\n");

    FILE *file;

    // Menulis ke file
    file = fopen("example.txt", "w"); // "w" untuk menulis
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fprintf(file, "Hello, file I/O in C!\n");
    fclose(file);
    printf("Data written to file successfully.\n");

    // Membaca dari file
    file = fopen("example.txt", "r"); // "r" untuk membaca
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read from file: %s", buffer);
    }
    fclose(file);

    // Input user untuk menambah data ke file
    printf("\nEnter a line to append to the file: ");
    char userLine[100];
    getchar(); // Clear newline character from input buffer
    fgets(userLine, sizeof(userLine), stdin);
    file = fopen("example.txt", "a"); // "a" untuk menambah data
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }
    fprintf(file, "%s", userLine);
    fclose(file);
    printf("Data appended to file successfully.\n");
}

// 4. Loops in C
// C mendukung berbagai macam loop: for, while, dan do-while.
void explainLoops() {
    printf("\n=== Loops in C ===\n");

    // For loop: Iterasi dengan batas tertentu
    printf("For loop: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop: Iterasi berdasarkan kondisi
    printf("While loop: ");
    int count = 0;
    while (count < 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n");

    // Do-while loop: Kondisi diperiksa setelah eksekusi
    printf("Do-while loop: ");
    count = 0;
    do {
        printf("%d ", count);
        count++;
    } while (count < 5);
    printf("\n");

    // Input user untuk menentukan batas loop
    int limit;
    printf("Enter a limit for a custom for loop: ");
    scanf("%d", &limit);
    printf("Custom for loop: ");
    for (int i = 0; i < limit; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Main Function: Menggabungkan semua penjelasan
int main() {
    explainDataTypes();
    explainProceduralConcept();
    explainFileIO();
    explainLoops();

    return 0;
}
