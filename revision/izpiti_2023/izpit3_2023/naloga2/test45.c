
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {114, 87, 0, 4, 0},
    (int[]) {50, 31, 197, 158, 191},
    (int[]) {39, 141, 71, 81, 99},
    (int[]) {86, 115, 209, 238, 139},
    (int[]) {259, 180, 186, 106, 136},
    (int[]) {274, 246, 242, 234, 112},
    (int[]) {139, 326, 158, 229, 217},
    (int[]) {202, 175, 360, 301, 224},
    (int[]) {219, 355, 253, 356, 347},
    (int[]) {287, 321, 409, 316, 312},
    (int[]) {449, 394, 307, 402, 479},
    (int[]) {515, 428, 425, 371, 501},
    (int[]) {620, 601, 572, 620, 608},
    (int[]) {503, 658, 645, 571, 507},
    (int[]) {681, 683, 668, 723, 658},
    (int[]) {662, 759, 739, 723, 655},
    (int[]) {775, 887, 914, 757, 717},
    (int[]) {972, 891, 833, 988, 791},
    (int[]) {1006, 948, 1077, 882, 918},
    (int[]) {1053, 1007, 1033, 1016, 1067},
    (int[]) {1123, 1089, 1198, 1244, 1116},
    (int[]) {1316, 1292, 1200, 1171, 1138},
    (int[]) {1429, 1388, 1287, 1249, 1255},
    (int[]) {1344, 1450, 1518, 1447, 1324},
    (int[]) {1612, 1616, 1506, 1466, 1513},
    (int[]) {1562, 1688, 1656, 1618, 1635},
    (int[]) {1596, 1727, 1646, 1718, 1725},
    (int[]) {1852, 1765, 1817, 1665, 1777},
    (int[]) {1794, 1811, 1789, 1789, 1778},
    (int[]) {1887, 1875, 1783, 1881, 1747},
    (int[]) {1919, 1935, 1860, 1838, 1836},
    (int[]) {1938, 2007, 2023, 1880, 1887},
    (int[]) {1940, 1964, 1926, 1918, 2004},
    (int[]) {1959, 2023, 2004, 1969, 2023},
    (int[]) {2023, 2023, 2007, 2023, 1973},
    (int[]) {1953, 1994, 2023, 2023, 1900},
    (int[]) {2023, 1901, 1990, 1972, 2023},
    (int[]) {1976, 1954, 2020, 1988, 1987},
    (int[]) {1924, 2015, 1903, 1826, 1956},
    (int[]) {1815, 1910, 1911, 1796, 1851},
    (int[]) {1760, 1885, 1882, 1721, 1863},
    (int[]) {1712, 1813, 1785, 1740, 1731},
    (int[]) {1746, 1658, 1588, 1632, 1610},
    (int[]) {1568, 1636, 1694, 1584, 1531},
    (int[]) {1511, 1516, 1562, 1462, 1459},
    (int[]) {1408, 1475, 1401, 1366, 1379},
    (int[]) {1324, 1303, 1331, 1425, 1297},
    (int[]) {1242, 1306, 1289, 1245, 1248},
    (int[]) {1101, 1265, 1098, 1073, 1126},
    (int[]) {1119, 982, 1072, 1123, 1098},
    (int[]) {948, 959, 1009, 1075, 876},
    (int[]) {889, 811, 948, 893, 870},
    (int[]) {847, 912, 867, 825, 813},
    (int[]) {806, 775, 750, 679, 779},
    (int[]) {577, 609, 613, 616, 683},
    (int[]) {691, 542, 557, 537, 572},
    (int[]) {446, 607, 600, 506, 579},
    (int[]) {390, 440, 472, 410, 430},
    (int[]) {331, 410, 399, 427, 477},
    (int[]) {441, 419, 414, 435, 437},
    (int[]) {402, 288, 323, 268, 232},
    (int[]) {179, 338, 336, 295, 270},
    (int[]) {277, 290, 179, 227, 127},
    (int[]) {218, 183, 204, 288, 104},
    (int[]) {233, 84, 242, 234, 231},
    (int[]) {235, 175, 178, 122, 217},
    (int[]) {184, 112, 214, 155, 70},
    (int[]) {9, 7, 79, 113, 70},
    (int[]) {176, 113, 141, 3, 0},
    (int[]) {0, 49, 9, 127, 139},
    (int[]) {78, 127, 103, 17, 0},
    (int[]) {6, 66, 64, 40, 38},
    (int[]) {78, 48, 101, 97, 0},
    (int[]) {78, 0, 0, 7, 116},
    (int[]) {0, 36, 85, 70, 88},
    (int[]) {0, 0, 69, 0, 0},
    (int[]) {0, 0, 85, 104, 27},
    (int[]) {101, 0, 0, 106, 0},
    (int[]) {40, 0, 26, 0, 13},
    (int[]) {50, 84, 16, 0, 105},
    (int[]) {0, 0, 0, 0, 0},
    (int[]) {0, 82, 64, 0, 80},
    (int[]) {88, 41, 0, 87, 50},
    (int[]) {73, 56, 0, 0, 33},
    (int[]) {40, 0, 86, 0, 0},
    (int[]) {0, 0, 84, 17, 0},
    (int[]) {43, 75, 65, 0, 0},
    (int[]) {0, 0, 72, 62, 0},
    (int[]) {0, 0, 0, 0, 0},
    (int[]) {8, 86, 0, 65, 0},
    (int[]) {0, 0, 50, 4, 0},
    (int[]) {0, 0, 0, 31, 34},
    (int[]) {15, 0, 0, 73, 0},
    (int[]) {6, 0, 70, 0, 0},
    (int[]) {84, 0, 18, 0, 4},
    (int[]) {0, 0, 0, 0, 0},
    (int[]) {0, 0, 0, 21, 55},
    (int[]) {36, 0, 42, 80, 12},
    (int[]) {0, 0, 54, 0, 15},
    (int[]) {0, 0, 0, 0, 39},
    (int[]) {82, 0, 0, 0, 0},
    (int[]) {42, 0, 0, 23, 35},
    (int[]) {6, 0, 0, 0, 66},
    (int[]) {0, 0, 0, 0, 6},
    (int[]) {0, 0, 0, 70, 42},
    (int[]) {14, 0, 45, 99, 59},
    (int[]) {0, 5, 0, 0, 0},
    (int[]) {92, 0, 77, 0, 51},
    (int[]) {0, 97, 0, 17, 0},
    (int[]) {96, 72, 71, 26, 0},
    (int[]) {0, 95, 0, 90, 0},
    (int[]) {40, 92, 0, 0, 32},
    (int[]) {0, 0, 63, 0, 69},
    (int[]) {0, 0, 31, 54, 0},
    (int[]) {0, 59, 0, 0, 0},
    (int[]) {91, 14, 0, 0, 78},
    (int[]) {63, 0, 81, 0, 6},
    (int[]) {71, 0, 0, 83, 0},
    (int[]) {0, 0, 21, 74, 24},
    (int[]) {85, 13, 29, 63, 0},
    (int[]) {0, 63, 0, 21, 0},
    (int[]) {0, 74, 89, 68, 0},
    (int[]) {0, 20, 0, 64, 73},
    (int[]) {67, 89, 0, 91, 0},
    (int[]) {0, 0, 0, 0, 0},
    (int[]) {18, 0, 57, 80, 68},
    (int[]) {0, 54, 0, 0, 0},
    (int[]) {17, 77, 46, 0, 63},
    (int[]) {8, 0, 0, 0, 61},
    (int[]) {57, 28, 0, 0, 0},
    (int[]) {0, 18, 42, 0, 63},
    (int[]) {64, 71, 0, 53, 0},
    (int[]) {0, 0, 0, 27, 9},
};

int N = 133;
int M = 5;
int D = 2;

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
