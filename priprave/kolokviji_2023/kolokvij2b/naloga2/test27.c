#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {3311, 9103, 896, 8033, 284, 5103, 8004, 3709, 6539, 1319, 5969, 4321, 6620, 9842, 1510, 1651, 4194, 4150, 9635, 4769, 4521, 1627, 3110, 6302, 5137, 7382, 398, 1492, 3460, 5946, 8091, 2012, 9843, 57, 7048, 4232, 1310, 9919, 1958, 5516, 3324, 739, 5278, 9894, 3166, 5765, 2279, 3391, 1144, 1963, 1555, 7013, 5551, 7198, 2431, 413, 9686, 4740, 6198, 4385, 9938, 5995, 1079, 2831, 4724, 1197, 8309, 8723, 5112, 471, 4653, 6040, 3752, 559, 2528, 5746, 7439, 5380, 6217, 2693, 7351, 82, 5250, 9988, 3445, 4880, 9264, 3908, 8023, 7832, 532, 2869, 2587, 7381, 8737, 2222, 5522, 840, 4044, 7455, 5213, 220, 7630, 9331, 1031, 4206, 2737, 2549, 7269, 9498, 1182, 7035, 7434, 3063, 4790, 4998, 3178, 9175, 3331, 8601, 8979, 6490, 9911, 1913, 6560, 9071, 5495, 7105, 3966, 9050, 9306, 5989, 5545, 5357, 5640, 4450, 6686, 5730, 4292, 7277, 7160, 5840, 3196, 4681, 4862, 6281, 5628, 9676, 4624, 3426, 514, 2254, 977, 9226, 7807, 3019, 9892, 1526, 4904, 9237, 8416, 7676, 6297, 9539, 313, 8716, 2762, 4501, 7417, 4732, 1506, 5319, 8736, 5617, 5549, 6632, 474, 9998, 7049, 4359, 5375, 3846, 8733, 2109, 5454, 1698, 2943, 6534, 423, 6485, 4370, 1078, 4910, 5634, 9863, 1401, 3418, 6599, 621, 9848, 6666, 6375, 3750, 2875, 730, 4802, 1329, 3197, 3875, 7258, 6229, 2384, 2835, 3198, 595, 430, 5159, 2897, 2603, 2654, 446, 9472, 8958, 4657, 3040, 202, 8364, 2733, 8464, 5709, 6577, 5851, 7699, 9956, 379, 2784, 6426, 4354, 2744, 1745, 8419, 4079, 4339, 3829, 1208, 9641, 5304, 8550, 9682, 5420, 1972, 1795, 7672, 2357, 7061, 8697, 9705, 2148, 4281, 838, 2554, 97, 2424, 9273, 4110, 1051, 1840, 7842, 9583, 7819, 372, 2588, 4885, 8502, 2045, 8486, 4191, 6593, 3082, 5887, 3369, 8382, 1772, 672, 2797, 7242, 4625, 9599, 7958, 1309, 5871, 146, 2952, 3008, 2496, 4300, 7469, 390, 829, 2232, 6743, 802, 6822, 9883, 1029, 1569, 2759, 5396, 9448, 2416, 4392, 6308, 3929, 1942, 3774, 5033, 4089, 8547, 7790, 399, 1136, 2152, 8624, 6933, 1810, 2445, 2434, 3979, 4662, 7840, 201, 724, 1663, 9765, 7006, 5907, 9881, 497, 6019, 7291, 6123, 5099, 2629, 6841, 395, 8618, 555, 9912, 3666, 5458, 4403, 8065, 4747, 4393, 9469, 4899, 170, 3746, 4870, 6906, 6821, 2790, 1467, 4215, 9199, 2135, 5735, 2187, 2786, 2097, 9763, 4204, 5082, 6469, 6309, 101, 7474, 8863, 9465, 391, 1807, 3506, 4612, 8568, 7084, 9168, 4587, 2321, 3880, 641, 5879, 6214, 9697, 4871, 1343, 538, 9684, 6584, 6603, 6639, 267, 5481, 6633, 754, 7760, 6249, 3067, 9540, 7511, 6010, 3674, 2795, 4240, 924, 8758, 9997, 2352, 4669, 8396, 778, 134, 1681, 4725, 9783, 4055, 4510, 5798, 8839, 5144, 6151, 7547, 619, 310, 6631, 139, 3450, 4269, 9379, 9781, 7965, 2, 4308, 5763, 3108, 4586, 8844, 6088, 5891, 3009, 3214, 8147, 9907, 1859, 8192, 8379, 2907, 7030, 6464, 6950, 8636, 8246, 7618, 2973, 7782, 4957, 9518, 4941, 7235, 1789, 809, 1004, 9659, 8423, 4148, 886, 4117, 35, 5143, 2180, 5399, 4680, 7125, 1997, 1513, 5398, 7740, 826, 9016, 3984, 3904, 1712, 962, 2550, 1048, 7651, 5209, 344, 4821, 4011, 4844, 254, 2335, 4972, 2173, 4581, 7545, 1015, 9271, 7004, 4092, 7701, 3356, 323, 9437, 895, 1487, 3416, 1460, 4378, 2417, 9373, 4230, 9490, 7444, 9394, 6127, 6589, 157, 5486, 8313, 9811, 9218, 5721, 1738, 6526, 2161, 6689, 6720, 4384, 3628, 7508, 8487, 2636, 274, 1719, 6543, 5130, 3565, 1982, 4775, 4845, 6669, 2212, 7260, 640, 4692, 1722, 6189, 467, 5023, 4429, 61, 4857, 2488, 8969, 1844, 2997, 4772, 9656, 3018, 5157, 1687, 2367, 5140, 2565, 8532, 1675, 308, 5935, 4283, 8116, 7057, 4317, 8986, 3959, 2255, 6467, 6269, 8836, 1558, 2935, 4100, 9501, 8656, 3719, 6525, 9726, 6838, 9573, 4499, 1202, 6494, 8362, 7356, 3028, 1022, 569, 427, 5593, 9871, 5645, 6128, 6026, 5788, 9758, 2809, 9316, 5154, 3607, 2146, 3685, 3421, 7415, 4812, 2622, 3712, 2511, 9148, 3554, 7021, 9364, 49, 1582, 1445, 1474, 8462, 3081, 1833, 1661, 9301, 147, 796, 5386, 3620, 2963, 3843, 6937, 3791, 7715, 643, 336, 9647, 9100, 8851, 5535, 8719, 512, 8842, 6140, 5642, 7492, 1228, 7051, 1505, 3725, 5681, 8281, 4475, 205, 9118, 8820, 6751, 3933, 83, 3816, 1066, 8413, 4853, 7942, 5519, 4493, 5162, 2053, 4068, 4716, 2583, 4947, 9795, 6449, 3753, 1611, 1946, 3291, 8536, 2011, 1950, 7046, 1414, 240, 5057, 7118, 1463, 2760, 38, 3530, 2661, 5406, 8978, 353, 8407, 9340, 2599, 1801, 697, 1587, 1968, 703, 6243, 3268, 6208, 384, 6731, 7881, 2607, 9194, 9677, 6119, 6436, 3497, 969, 3825, 6533, 6139, 7373, 8185, 3204, 8090, 6116, 2683, 2355, 8095, 9296, 6303, 1966, 1488, 195, 2953, 4523, 2633, 9289, 6472, 8946, 4743, 8963, 9915, 6674, 5688, 5846, 9092, 8577, 6984, 1904, 6136, 6432, 8173, 3786, 8466, 4664, 3948, 7272, 7161, 1806, 6507, 7014, 3052, 9669, 787, 5055, 6774, 3054, 7131, 6158};
int _RAZREDI[] = {0, 0, 0, 1, 2, 3, 0, 4, 5, 1, 6, 0, 7, 1, 8, 3, 9, 3, 0, 10, 9, 0, 0, 11, 1, 1, 12, 6, 3, 13, 6, 6, 13, 14, 15, 6, 0, 14, 0, 0, 16, 0, 17, 0, 0, 4, 16, 18, 0, 19, 6, 20, 9, 21, 22, 23, 13, 24, 25, 26, 1, 20, 0, 14, 13, 9, 27, 0, 9, 28, 1, 9, 29, 30, 0, 1, 31, 9, 27, 32, 33, 34, 9, 35, 9, 19, 1, 36, 37, 38, 39, 6, 0, 40, 41, 14, 3, 42, 14, 1, 6, 43, 0, 44, 14, 14, 0, 45, 0, 0, 46, 6, 6, 39, 47, 17, 48, 0, 6, 49, 50, 0, 51, 5, 3, 22, 52, 53, 54, 55, 41, 23, 56, 14, 5, 1, 57, 58, 23, 0, 59, 55, 30, 60, 25, 1, 14, 0, 47, 59, 26, 3, 61, 62, 63, 64, 9, 6, 39, 65, 3, 5, 33, 0, 0, 1, 0, 3, 35, 24, 66, 35, 51, 54, 67, 68, 69, 70, 0, 71, 20, 0, 3, 72, 73, 74, 3, 75, 76, 64, 77, 30, 68, 78, 51, 75, 27, 1, 79, 80, 0, 81, 82, 83, 84, 85, 9, 6, 86, 0, 1, 0, 59, 47, 3, 32, 1, 87, 32, 88, 14, 36, 1, 14, 89, 3, 23, 19, 9, 67, 90, 49, 91, 59, 92, 0, 93, 0, 27, 6, 64, 93, 94, 59, 14, 3, 95, 24, 96, 97, 98, 69, 14, 24, 1, 29, 41, 6, 1, 1, 3, 99, 100, 54, 101, 14, 6, 25, 102, 14, 98, 6, 30, 103, 104, 3, 0, 3, 105, 3, 91, 106, 3, 1, 49, 26, 107, 24, 0, 108, 87, 1, 0, 109, 86, 0, 87, 17, 0, 110, 1, 3, 41, 111, 10, 88, 68, 16, 9, 112, 63, 113, 114, 115, 1, 91, 60, 1, 116, 59, 117, 35, 41, 1, 118, 119, 6, 6, 20, 120, 121, 122, 1, 101, 123, 67, 124, 56, 1, 125, 126, 127, 68, 3, 0, 0, 128, 129, 55, 130, 5, 75, 131, 10, 3, 0, 83, 23, 20, 45, 91, 132, 112, 122, 133, 134, 59, 2, 39, 2, 0, 135, 136, 137, 6, 138, 139, 140, 11, 141, 142, 68, 54, 13, 142, 98, 71, 1, 143, 144, 41, 35, 145, 146, 14, 3, 147, 143, 148, 149, 1, 57, 0, 89, 3, 13, 150, 151, 13, 152, 153, 6, 0, 1, 128, 154, 3, 86, 155, 6, 30, 24, 5, 0, 9, 17, 156, 0, 2, 157, 158, 1, 57, 130, 89, 54, 69, 148, 12, 6, 59, 0, 106, 60, 159, 74, 160, 91, 6, 161, 87, 162, 163, 17, 49, 30, 164, 165, 166, 17, 91, 37, 42, 167, 168, 54, 169, 6, 32, 155, 170, 171, 172, 173, 174, 133, 92, 69, 6, 13, 117, 49, 0, 24, 175, 176, 37, 135, 3, 177, 178, 31, 171, 36, 1, 179, 180, 32, 29, 181, 44, 17, 9, 68, 182, 183, 3, 184, 143, 57, 3, 133, 185, 77, 72, 79, 12, 60, 0, 134, 122, 92, 129, 186, 124, 111, 14, 59, 187, 173, 6, 160, 188, 29, 12, 174, 67, 189, 190, 1, 16, 1, 3, 191, 25, 60, 192, 9, 193, 14, 9, 191, 116, 30, 88, 87, 126, 194, 195, 92, 59, 0, 1, 22, 0, 196, 91, 14, 197, 198, 199, 12, 200, 83, 1, 201, 128, 72, 202, 148, 203, 107, 204, 55, 205, 206, 57, 6, 55, 207, 208, 59, 209, 59, 28, 37, 54, 9, 210, 79, 29, 86, 26, 63, 0, 142, 211, 212, 213, 214, 215, 216, 116, 217, 218, 29, 97, 13, 219, 105, 220, 60, 221, 222, 73, 55, 77, 208, 14, 1, 3, 114, 6, 223, 224, 225, 87, 0, 226, 227, 136, 36, 73, 228, 165, 198, 17, 6, 72, 69, 6, 1, 229, 111, 91, 230, 231, 25, 87, 232, 141, 24, 14, 184, 233, 55, 234, 14, 235, 33, 236, 32, 237, 238, 3, 239, 57, 37, 0, 150, 64, 23, 240, 241, 208, 242, 75, 243, 244, 30, 164, 245, 10, 14, 77, 0, 246, 0, 30, 111, 159, 243, 1, 247, 248, 249, 1, 250, 6, 251, 3, 14, 252, 210, 176, 253, 254, 255, 20, 128, 14, 27, 3, 256, 257, 190, 80, 190, 231, 133, 26, 1, 122, 41, 236, 2, 258, 226, 13, 155, 1, 89, 259, 260, 200, 0, 261, 5, 3, 262, 263, 264, 96, 110, 69, 79, 265, 29, 266, 267, 268, 269, 270, 116, 271, 272, 273, 0, 274, 275, 210, 41, 276, 1, 6, 176, 6, 277, 278, 55, 1, 221};
int _ST_VOZLISC = sizeof(_RAZREDI) / sizeof(_RAZREDI[0]);
#define  _ST_RAZREDOV (sizeof(_P) / sizeof(_P[0]))
Vozlisce* _I2V[_ST_RAZREDOV];
bool _POBRISAN[_M];

Vozlisce* _ustvari() {
    Vozlisce* zacetek = NULL;
    Vozlisce* prej = NULL;
    int zadnjiRazred = -1;

    for (int i = 0; i < _ST_VOZLISC; i++) {
        Vozlisce* v = calloc(1, sizeof(Vozlisce));
        int r = _RAZREDI[i];
        if (r > zadnjiRazred) {
            zadnjiRazred = r;
            v->p = malloc(sizeof(int));
            *v->p = _P[r];
            _I2V[r] = v;
        } else {
            v->p = _I2V[r]->p;
        }
        if (i == 0) {
            zacetek = v;
        } else {
            prej->naslednje = v;
        }
        prej = v;
    }
    return zacetek;
}

void _izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        printf("%s%d", (w == v ? "" : ", "), *w->p);
        w = w->naslednje;
    }
    printf("]\n");
}

void _preveriIstovetnost(Vozlisce* v) {
    int i = 0;
    for (Vozlisce* w = v; w != NULL; w = w->naslednje) {
        printf("%d", w == _I2V[i]);
        i++;
    }
    printf("\n");
}

void _pocisti(Vozlisce* v) {
    if (v != NULL) {
        _pocisti(v->naslednje);
        int pp = *v->p;
        if (!_POBRISAN[pp]) {
            free(v->p);
            v->p = NULL;
            _POBRISAN[pp] = true;
        }
        free(v);
    }
}

int main() {
    Vozlisce* v = _ustvari();

    printf("Prej:\n");
    _izpisi(v);
    printf("\n");

    izlociDuplikate(v);

    printf("Potem:\n");
    _izpisi(v);
    printf("\n");

    printf("Istovetnost ohranjenih vozlisc:\n");
    _preveriIstovetnost(v);

    _pocisti(v);

    return 0;
}
