#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {6707, 4385, 7537, 8859, 9884, 2682, 1866, 668, 3153, 8450, 7905, 7308, 3169, 3026, 7297, 2666, 3249, 5277, 8392, 4409, 7874, 9750, 6766, 8894, 7839, 2348, 448, 9941, 8007, 4571, 965, 8525, 8643, 3932, 7383, 3498, 4480, 5998, 414, 6829, 3537, 5213, 5272, 134, 7908, 1154, 9749, 5544, 1066, 1601, 805, 512, 4040, 2293, 4054, 35, 4077, 2835, 4647, 1926, 8833, 5865, 7878, 5088, 9147, 2958, 3783, 4854, 4816, 2402, 6512, 7731, 9653, 1398, 7713, 1052, 7522, 4597, 2258, 8758, 832, 4360, 5330, 2268, 5594, 2554, 3503, 3484, 1754, 3721, 9118, 8982, 4747, 6393, 7423, 2095, 690, 3647, 5047, 4463, 8006, 8472, 8346, 8318, 9664, 7018, 482, 7524, 9388, 4139, 4304, 2259, 5451, 9277, 5751, 9259, 897, 6568, 5577, 5976, 39, 6213, 2578, 680, 30, 9472, 9784, 8846, 3790, 1460, 3241, 2156, 3574, 1667, 5973, 1632, 732, 7812, 2684, 7176, 1828, 1264, 9655, 6543, 5604, 9841, 3875, 8437, 2560, 3499, 9044, 6410, 3118, 9642, 8323, 5193, 9762, 6357, 4414, 6289, 9765, 7598, 5843, 899, 3604, 4507, 4152, 2236, 5361, 5240, 3518, 3996, 2238, 9301, 8276, 24, 9506, 566, 124, 7304, 1376, 4422, 9851, 3492, 6152, 180, 6950, 28, 7022, 1330, 2751, 9567, 9568, 9556, 1335, 2507, 798, 7516, 5024, 1216, 998, 8426, 8133, 4345, 1089, 2455, 6330, 730, 4726, 1297, 1696, 4551, 2548, 2473, 801, 4310, 1721, 694, 892, 5177, 4258, 6515, 8347, 5378, 3662, 9908, 9067, 5682, 5556, 8070, 9450, 2183, 9934, 8109, 9780, 9555, 5761, 4775, 1724, 7959, 5764, 2118, 9390, 8624, 5157, 6235, 2509, 9700, 5986, 1992, 8062, 4450, 5692, 8702, 9500, 1080, 8768, 9169, 6910, 3925, 2498, 4060, 966, 3030, 1193, 1115, 1606, 1142, 7442, 8485, 7760, 8650, 376, 1864, 1456, 3181, 4159, 2131, 744, 9888, 4064, 5733, 8902, 6799, 6601, 9911, 6319, 8341, 208, 7158, 1035, 9574, 7758, 6401, 5894, 1958, 3532, 5622, 1962, 8170, 4960, 1879, 5087, 8280, 1185, 8737, 6412, 7014, 9842, 5561, 8593, 2272, 2269, 7880, 8679, 3826, 6290, 5079, 8090, 4410, 1198, 6615, 5048, 7469, 8882, 1049, 889, 994, 6382, 6514, 8965, 995, 5043, 260, 6077, 9418, 7751, 6784, 4326, 7269, 5617, 7096, 6870, 5650, 6903, 5227, 4499, 9940, 2253, 5514, 6295, 3046, 9394, 206, 5002, 319, 1210, 4519, 6824, 2212, 2349, 7032, 5924, 5165, 3151, 234, 5337, 9643, 8047, 3278, 9083, 7126, 9840, 8043, 7080, 3481, 7235, 2501, 4336, 8647, 3638, 1758, 8281, 7079, 605, 7473, 6296, 6108, 2965, 9102, 4489, 540, 8721, 4140, 3618, 2187, 9873, 4678, 9348, 5975, 1832, 7064, 6864, 6267, 4229, 8139, 4093, 9878, 463, 5605, 7028, 4449, 4832, 9865, 8359, 83, 9063, 4138, 7521, 8163, 7799, 7896, 1855, 1236, 9129, 2580, 5709, 8368, 1133, 2959, 1393, 8580, 7702, 3797, 5151, 9691, 7121, 7752, 4745, 2613, 7957, 4456, 3843, 5065, 676, 3254, 9324, 5217, 4971, 7757, 4576, 3514, 3430, 25, 9682, 3227, 8223, 3029, 1465, 3001, 7593, 9215, 5135, 1973, 4153, 1391, 473, 348, 4301, 1265, 3901, 9861, 2744, 9092, 689, 1125, 4419, 4150, 7602, 4821, 3997, 5017, 6201, 859, 4705, 2091, 5798, 6989, 2954, 718, 7871, 2625, 8741, 8213, 3205, 6468, 4400, 6248, 5280, 8410, 4236, 5700, 2284, 1952, 157, 499, 2003, 8678, 215, 4126, 7801, 191, 4720, 8499, 8560, 6613, 5922, 9993, 9501, 2132, 567, 5286, 189, 9717, 5614, 1072, 7273, 4341, 5452, 3378, 854, 2250, 1662, 3531, 2079, 2514, 3352, 9719, 7306, 1362, 7789, 1151, 825, 7647, 1491, 2412, 4453, 4257, 6854, 123, 9347, 5519, 3264, 3313, 4004, 3741, 8188, 4469, 4635, 6452, 5671, 6186, 9964, 3615, 5410, 547, 656, 1917, 6982, 7846, 1021, 7583, 2939, 1397, 289, 3693, 478, 3482, 8694, 8189, 8025, 1201, 7248, 4214, 7706, 1007, 9914, 4809, 9230, 7551, 9351, 4021, 6094, 4613, 9114, 1793, 2357, 887, 1640, 2721, 9356, 1493, 6121, 7256, 1736, 3766, 9072, 4640, 2229, 6588, 4866, 5592, 4240, 2517, 4742, 7549, 2541, 7357, 7562, 152, 2432, 4267, 1048, 9528, 4521, 8383, 6888, 8394, 6344, 412, 4959, 6951, 2138, 9218, 3832, 5292, 2675, 9610, 4485, 5947, 3215, 558, 6079, 5896, 7089, 3958, 93, 2449, 9770, 9133, 1553, 1815, 9278, 970, 9238, 8207, 6437, 2115, 1981, 6798, 7556, 6803, 3808, 3870, 2321, 8514, 6783, 8951, 6388, 6501, 3109, 9346, 3529, 898, 102, 5350, 7707, 5968, 1888, 394, 1789, 8335, 1582, 4757, 587, 7334, 5903, 5422, 2520, 2454, 7662, 8495, 5667, 2663, 7533, 6708, 8360, 203, 5258, 1245, 3471, 7397, 1749, 3965, 2467, 2499, 129, 1865, 6459, 5823, 7097, 5074, 9666, 8308, 6721, 92, 3593, 99, 3217, 8784, 8144, 5505, 1158, 5171, 3371, 1943, 3327, 8760, 3235, 6030, 3038, 5156, 8288, 8781, 3229, 7368, 8699, 2352, 2182, 1012, 9296, 6525, 4946, 6397, 1573, 4116, 4053, 4632, 6772, 1033, 7021, 6551, 6458, 6133, 8465, 5564, 7329, 4145, 5033, 9505, 7363, 667, 3648, 1286, 4221, 8583, 2372, 447, 7249, 7128, 6056, 7171, 7545, 2409, 7352, 7853, 3461, 3862, 3067, 4287, 2922, 9461, 1817, 7240, 6603, 8058, 1253, 1418, 716, 4181, 2484, 9158, 1451, 3773, 6585, 0, 6675, 6116, 6050, 2426, 6488, 6270, 284, 7542, 2826, 2266, 5116, 5005, 7070, 7609, 985, 5153, 6906, 959, 9696, 1365, 9484, 8354, 6288, 6185, 2940, 760, 7277, 7110, 2851, 754, 5323, 8286, 4547, 2164, 7275, 4144, 164, 3438, 8556, 4210, 6345, 2982, 4094, 9342, 870, 488, 7116, 5787, 6430, 2308, 9084, 3057, 9857, 2898, 3031, 8295, 9569, 4995, 9459, 5834, 4862, 3507, 3795, 4462, 1215, 8941, 235, 4692, 4011, 7394, 5110, 7342, 3006, 2028, 5023, 4963, 7909, 492, 4999, 5789, 1434, 2461, 5518, 7148, 8066, 2290, 3952, 2500, 8613, 4290, 8675, 1344, 4938, 3167, 2614, 8458, 6049, 4943, 6703, 4677, 5159, 9797, 1385, 6997, 3152, 1387, 2209, 1813, 8871, 6204, 1827, 9584, 1991, 5300, 9101, 1272, 2713, 9407, 9532, 5501, 2058, 1496, 3362, 6883, 5274, 9852, 6258, 5414, 6541, 9777, 8993, 1752, 9199, 724, 5897, 1538, 9741, 2483, 663, 3796, 4990, 3123, 6955, 6311, 1947, 4563, 6292, 4119, 5399, 3455, 3999, 6600, 7330, 6868, 4791, 3651, 5199, 7718, 8619, 5426, 7970, 1140, 2306, 297, 5855, 4858, 243, 3556, 1737, 9829, 7262, 1850, 8980, 996, 91, 4645, 7749, 3407, 3524, 5726, 9127, 3097, 3139, 1762, 465, 122, 4102, 3755};
int _RAZREDI[] = {0, 1, 1, 1, 1, 2, 1, 3, 4, 1, 5, 4, 6, 4, 7, 4, 1, 1, 8, 4, 1, 9, 1, 10, 7, 1, 11, 12, 13, 14, 12, 15, 16, 17, 18, 4, 12, 1, 19, 1, 20, 1, 21, 21, 22, 23, 21, 24, 21, 1, 25, 1, 7, 22, 12, 4, 4, 7, 26, 27, 28, 29, 4, 30, 31, 1, 32, 26, 33, 23, 18, 18, 34, 17, 18, 35, 36, 37, 24, 1, 23, 17, 14, 38, 39, 40, 10, 24, 41, 28, 17, 1, 42, 43, 44, 1, 12, 1, 39, 24, 45, 26, 24, 46, 47, 48, 17, 1, 10, 41, 4, 36, 24, 21, 21, 7, 49, 4, 50, 51, 4, 36, 52, 40, 41, 53, 45, 54, 4, 34, 47, 55, 56, 6, 57, 58, 59, 4, 4, 23, 60, 61, 62, 63, 0, 64, 1, 34, 27, 65, 21, 66, 67, 68, 27, 69, 13, 70, 71, 7, 1, 66, 36, 72, 24, 73, 74, 23, 64, 21, 1, 75, 76, 77, 23, 21, 49, 78, 22, 79, 35, 4, 27, 80, 65, 81, 20, 4, 27, 21, 1, 81, 12, 6, 82, 83, 17, 71, 84, 85, 86, 87, 1, 88, 1, 13, 1, 1, 41, 89, 1, 90, 4, 64, 10, 51, 15, 91, 71, 67, 92, 93, 94, 95, 96, 49, 49, 10, 34, 39, 97, 98, 4, 21, 38, 68, 99, 100, 4, 33, 68, 100, 101, 102, 103, 95, 104, 51, 58, 47, 105, 106, 107, 63, 4, 108, 1, 109, 98, 23, 10, 110, 51, 4, 4, 81, 77, 47, 111, 1, 69, 1, 88, 11, 71, 1, 2, 112, 113, 95, 114, 115, 4, 58, 116, 117, 38, 71, 27, 118, 78, 24, 36, 119, 36, 27, 120, 121, 62, 122, 29, 29, 65, 123, 21, 124, 97, 36, 125, 4, 1, 27, 126, 112, 4, 127, 128, 23, 31, 129, 4, 20, 29, 130, 53, 38, 86, 131, 78, 58, 33, 132, 133, 134, 33, 48, 102, 8, 112, 135, 11, 25, 121, 49, 136, 53, 45, 46, 4, 137, 65, 27, 102, 23, 48, 138, 139, 1, 140, 15, 141, 38, 33, 142, 139, 125, 11, 143, 31, 69, 23, 144, 109, 128, 88, 145, 146, 41, 25, 11, 147, 70, 10, 21, 36, 1, 148, 10, 85, 47, 1, 36, 89, 149, 150, 151, 1, 152, 153, 154, 58, 7, 4, 25, 155, 31, 156, 157, 35, 62, 158, 0, 159, 160, 17, 1, 161, 162, 123, 26, 21, 21, 1, 78, 1, 163, 24, 164, 165, 166, 68, 167, 168, 20, 1, 21, 109, 169, 21, 90, 121, 170, 21, 171, 139, 172, 173, 60, 64, 68, 48, 17, 174, 36, 175, 62, 23, 176, 177, 178, 102, 179, 180, 181, 53, 28, 111, 24, 182, 15, 63, 183, 184, 185, 21, 33, 186, 117, 187, 188, 96, 4, 189, 190, 191, 1, 192, 193, 177, 194, 35, 23, 188, 118, 62, 78, 63, 45, 23, 27, 4, 10, 27, 195, 39, 10, 196, 197, 4, 198, 45, 199, 200, 21, 201, 202, 1, 36, 71, 48, 203, 1, 1, 1, 23, 204, 14, 205, 98, 21, 24, 36, 206, 2, 207, 208, 209, 210, 211, 212, 4, 213, 214, 34, 63, 215, 14, 31, 216, 217, 218, 219, 1, 171, 220, 221, 34, 41, 222, 223, 4, 224, 4, 225, 226, 227, 68, 1, 112, 12, 187, 123, 228, 1, 229, 65, 17, 62, 230, 102, 45, 219, 231, 232, 233, 234, 235, 1, 109, 23, 236, 237, 112, 104, 238, 239, 173, 7, 155, 134, 215, 240, 16, 241, 242, 25, 243, 244, 245, 21, 103, 246, 2, 7, 36, 8, 213, 175, 247, 88, 164, 103, 248, 249, 180, 250, 251, 252, 96, 32, 238, 253, 219, 254, 136, 104, 255, 256, 21, 92, 12, 98, 33, 71, 69, 21, 1, 257, 81, 21, 246, 258, 193, 21, 41, 259, 260, 247, 121, 230, 60, 1, 261, 262, 263, 264, 134, 109, 242, 265, 62, 266, 158, 84, 267, 125, 15, 68, 268, 95, 164, 269, 78, 270, 271, 272, 0, 41, 160, 142, 273, 274, 270, 4, 266, 275, 51, 276, 47, 277, 278, 1, 279, 35, 117, 47, 1, 11, 280, 281, 227, 1, 282, 105, 283, 284, 224, 285, 48, 286, 3, 11, 7, 4, 33, 287, 23, 195, 288, 169, 289, 290, 47, 291, 48, 17, 239, 292, 110, 121, 173, 118, 4, 293, 97, 294, 88, 17, 295, 296, 297, 298, 299, 7, 300, 301, 102, 302, 303, 17, 155, 304, 263, 36, 27, 112, 305, 306, 307, 308, 17, 43, 170, 257, 309, 21, 298, 310, 33, 26, 1, 311, 312, 18, 313, 314, 315, 316, 248, 317, 318, 36, 227, 104, 36, 319, 6, 34, 81, 21, 57, 31, 117, 150, 181, 320, 321, 1, 322, 323, 324, 100, 168, 164, 45, 325, 326, 327, 317, 121, 250, 328, 271, 329, 330, 4, 257, 331, 2, 256, 327, 65, 84, 36, 332, 218, 333, 21, 20, 334, 335, 1, 336, 306, 337, 338, 1, 339, 340, 341, 1, 342, 343, 28, 344, 92, 345, 1, 4, 262, 46, 346, 1, 1, 347, 348, 349, 350, 351, 205, 352, 270, 134, 238, 170, 353, 354, 355, 356, 357, 241, 21, 45, 12, 358, 359, 117, 287, 360, 361, 362, 363, 21, 15, 364, 365, 366, 21, 367, 368, 163, 36, 369, 47, 21, 265, 370, 284, 36, 371, 1, 372, 96, 373, 36, 374, 344, 375, 10, 41, 98, 376, 377, 378, 8, 49, 379, 21, 380, 76, 139, 381, 4, 295, 373, 208, 382, 383, 384, 1, 4, 373, 385, 386, 387, 388, 21, 51, 389, 390, 391, 392, 33, 393, 88, 0, 181, 51, 366, 394, 34, 395, 396, 397, 15, 398, 232, 399, 400, 81, 401, 402, 25, 403, 1, 23, 191, 404, 405, 36, 46, 406, 407, 408};
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