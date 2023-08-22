
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {0, 52, 59, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 81, 0, 15, 17, 59, 83, 47, 0, 28, 0, 95, 0, 0, 71, 0, 41, 13, 26, 0, 0, 0, 43, 17, 85, 0, 17, 0, 0, 0, 0, 0, 78, 77, 100, 34, 0, 0, 0, 65, 0, 63, 78, 0, 0, 5, 0, 0, 18, 92, 73, 27, 0, 13, 0, 100, 0, 0, 90, 69, 76, 0, 0, 0, 0, 0, 36, 9, 0, 0, 0, 76, 0, 18, 0, 15, 0, 64, 0, 52, 31, 19, 0, 0, 0, 0, 33, 0, 0, 54, 54, 0, 40, 81, 0, 0, 0, 51, 0, 0, 0, 94, 0, 0, 0, 0, 0, 13, 0, 71, 45, 14, 10, 70, 80, 0, 0, 0, 0, 0, 0, 58, 17, 0, 99, 0, 102, 0, 86, 82, 125, 0, 120, 114, 163, 126, 207, 133, 60, 210, 173, 322, 205, 401, 350, 485, 486, 449, 659, 594, 672, 820, 1001, 1082, 1132, 1186, 1158, 1418, 1507, 1409, 1523, 1642, 1749, 1768, 1752, 1874, 1899, 1899, 1991, 2023, 2023},
    (int[]) {62, 0, 80, 1, 88, 0, 0, 51, 98, 0, 52, 0, 87, 2, 40, 67, 1, 0, 0, 89, 0, 16, 49, 94, 0, 86, 48, 0, 0, 42, 0, 0, 0, 31, 0, 21, 0, 82, 99, 13, 0, 0, 70, 0, 35, 62, 0, 0, 87, 88, 0, 91, 57, 49, 0, 71, 51, 14, 46, 42, 30, 53, 0, 0, 0, 0, 0, 76, 16, 6, 85, 0, 0, 45, 0, 0, 0, 9, 82, 70, 0, 82, 73, 0, 0, 0, 0, 0, 0, 37, 46, 0, 4, 0, 14, 0, 15, 0, 0, 82, 20, 0, 0, 0, 64, 11, 0, 1, 0, 57, 0, 84, 11, 0, 0, 0, 21, 84, 0, 0, 33, 0, 53, 0, 59, 97, 7, 38, 0, 78, 48, 57, 0, 54, 97, 51, 30, 0, 0, 0, 30, 74, 63, 12, 0, 109, 100, 7, 45, 77, 174, 129, 137, 225, 353, 254, 364, 481, 393, 562, 548, 699, 728, 817, 861, 940, 1017, 1094, 1256, 1412, 1313, 1587, 1532, 1713, 1664, 1784, 1899, 1906, 1852, 1986, 1943, 2023, 2019},
    (int[]) {0, 8, 42, 89, 0, 83, 0, 0, 0, 15, 0, 0, 78, 65, 0, 0, 0, 15, 93, 0, 26, 53, 0, 63, 0, 88, 26, 0, 0, 0, 1, 0, 0, 12, 70, 0, 0, 0, 30, 0, 95, 97, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 100, 74, 77, 0, 35, 0, 69, 45, 0, 0, 56, 28, 0, 79, 36, 84, 0, 52, 73, 0, 0, 0, 0, 88, 0, 10, 33, 93, 7, 27, 71, 0, 53, 0, 19, 48, 4, 0, 0, 72, 0, 0, 0, 0, 0, 0, 25, 33, 17, 62, 34, 61, 43, 31, 35, 54, 0, 0, 51, 0, 0, 60, 0, 0, 0, 0, 0, 82, 0, 0, 0, 101, 0, 0, 0, 0, 41, 21, 42, 0, 0, 5, 114, 0, 0, 98, 0, 131, 43, 5, 137, 113, 34, 45, 65, 261, 154, 208, 255, 360, 337, 361, 414, 608, 561, 587, 650, 818, 844, 1068, 1015, 1068, 1323, 1334, 1439, 1568, 1647, 1649, 1697, 1872, 1854, 1816, 1870, 2023, 1989, 1941, 2023},
};

int N = 3;
int M = 183;
int D = 1;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}
