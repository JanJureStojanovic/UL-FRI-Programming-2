
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {0, 0, 0, 80, 99, 0, 0, 92, 0, 0, 97, 36, 69, 9, 0, 0, 45, 45, 0, 0, 85, 30, 0, 0, 0, 30, 2, 82, 16, 0, 0, 0, 36, 166, 23, 152, 100, 219, 187, 300, 393, 400, 408, 654, 586, 660, 809, 990, 1124, 1054, 1168, 1442, 1541, 1525, 1731, 1662, 1765, 1889, 1848, 2023, 1939, 2023, 2023, 2023, 1883, 1955, 1793, 1658, 1650, 1634, 1401, 1266, 1240, 1053, 1093, 862, 748, 698, 659, 650, 579, 438, 374, 225, 241, 286, 180, 58, 20, 4, 43, 135, 66, 39, 0, 107, 68, 18, 26},
    (int[]) {0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 9, 8, 0, 68, 82, 12, 0, 78, 0, 56, 96, 0, 0, 0, 7, 0, 68, 105, 19, 95, 110, 62, 0, 162, 75, 142, 262, 129, 191, 265, 408, 370, 432, 569, 648, 797, 757, 857, 1021, 1107, 1180, 1265, 1431, 1646, 1675, 1779, 1918, 1921, 1899, 1969, 2023, 2023, 2023, 1904, 1910, 1871, 1879, 1746, 1687, 1616, 1432, 1439, 1221, 1154, 1047, 873, 918, 783, 699, 482, 426, 433, 369, 389, 248, 287, 243, 61, 164, 145, 126, 0, 8, 10, 68, 74, 0, 0, 105},
    (int[]) {0, 0, 0, 28, 0, 0, 0, 28, 5, 92, 0, 54, 0, 73, 12, 94, 0, 59, 0, 0, 68, 0, 24, 0, 93, 0, 6, 0, 7, 6, 145, 0, 55, 152, 12, 122, 111, 189, 335, 218, 412, 350, 494, 576, 714, 771, 827, 941, 1116, 1056, 1288, 1373, 1429, 1652, 1706, 1832, 1864, 1907, 1919, 2023, 1964, 2023, 2023, 1908, 1886, 1988, 1817, 1710, 1638, 1627, 1441, 1415, 1338, 1133, 1025, 852, 860, 654, 560, 544, 436, 416, 375, 202, 337, 159, 77, 221, 152, 6, 142, 7, 0, 96, 74, 116, 45, 0, 23},
};

int N = 3;
int M = 99;
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
