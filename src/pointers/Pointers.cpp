//
// Created by José Acuña on 25/02/2019.
//

#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

void pointers() {

    // Variable pointers
    int a = 10;
    int b = a;
    int* p1 = &a;
    int* p2 = p1;

    int* p3 = (int*)malloc(sizeof(int));
    *p3 = *p1;

    printf("Variable pointer:\n");
    printf("a: %d, b: %d, p1: %p, p2: %p \n", a, b, p1, p2);


    // Pointer pointers
    int c = 7;
    int* cPtr = &c;
    int ** ptrPtr = &cPtr;

    printf("\nPointer pointers:\n");
    printf("c: %d, cPtr: %p, ptrPtr: %p \n", c, cPtr, ptrPtr);

    // Array pointers
    int array[5];
    array[0] = 2;
    array[1] = 5;

    int* array2 = (int*)malloc(sizeof(int) * 5);
    *(array2 + 0) = 2;
    *(array2 + 1) = 5;

    printf("\nArray pointers:\n");
    printf("array[0]: %d, array[1]: %d \n", array[0], array[1]);
    printf("array2[0]: %d, array2[1]: %d \n", array2[0], array2[1]);

    // Function pointers
    int(*sumPtr)(int, int) = &sum;
    int sumArray[3] = {
            sumPtr(2, 3),
            sumPtr(5, 6),
            sumPtr(1, 2)};

    printf("\nFunction pointers:\n");
    printf("5 + 2 = %d \n", sumPtr(5, 2));
    printf("sumArray[0]: %d, sumArray[1]: %d, sumArray[2]: %d",
    sumArray[0], sumArray[1], sumArray[2]);
}