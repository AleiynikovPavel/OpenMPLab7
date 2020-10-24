#include <iostream>
#include <omp.h>

#define N1 4
#define N2 5
#define N3 3
#define N4 6
#define NRES N1*N2*N3*N4

int A1 [] = {1,2,3,4};
int A2 [] = {1,2,3,4,5};
int A3 [] = {1,2,3};
int A4 [] = {1,2,3,4,5,6};

int RES [N1*N2*N3*N4*4];

void serial();
void parallel();
void print();

int main() {
    parallel();
    print();
    return 0;
}

void serial() {
    for (int i1 = 0; i1 < N1; i1++) {
        for (int i2 = 0; i2 < N2; i2++) {
            for (int i3 = 0; i3 < N3; i3++) {
                for (int i4 = 0; i4 < N4; i4++) {
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4)] = A1[i1];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 1] = A2[i2];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 2] = A3[i3];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 3] = A4[i4];
                }
            }
        }
    }
}

void parallel() {
    int i1, i2, i3, i4;
    #pragma omp parallel for private(i1, i2, i3, i4) shared(RES, A1, A2, A3, A4)
    for (i1 = 0; i1 < N1; i1++) {
        for (i2 = 0; i2 < N2; i2++) {
            for (i3 = 0; i3 < N3; i3++) {
                for (i4 = 0; i4 < N4; i4++) {
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4)] = A1[i1];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 1] = A2[i2];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 2] = A3[i3];
                    RES[4 * (i1 * N2 * N3 * N4 + i2 * N3 * N4 + i3 * N4 + i4) + 3] = A4[i4];
                }
            }
        }
    }
}

void print() {
    for (int i = 0; i < NRES; i++) {
        printf("%d, ", RES[i * 4]);
        printf("%d, ", RES[i * 4 + 1]);
        printf("%d, ", RES[i * 4 + 2]);
        printf("%d\n", RES[i * 4 + 3]);
    }
}
