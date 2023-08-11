
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

Oseba* ustvari(char* ime, int starost) {
    Oseba* os = malloc(sizeof(Oseba));
    os->ime = ime;
    os->starost = starost;
    return os;
}

int __main__() {
    int n = 906;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Dragana", 98);
    osebe[1] = ustvari("Elin", 82);
    osebe[2] = ustvari("Dan", 99);
    osebe[3] = ustvari("Jadranka", 49);
    osebe[4] = ustvari("Edita", 27);
    osebe[5] = ustvari("Domen", 1);
    osebe[6] = ustvari("Edina", 65);
    osebe[7] = ustvari("Milovan", 61);
    osebe[8] = ustvari("Jovanka", 29);
    osebe[9] = ustvari("Viktor", 75);
    osebe[10] = ustvari("Henrik", 90);
    osebe[11] = ustvari("Dijana", 13);
    osebe[12] = ustvari("Zoran", 87);
    osebe[13] = ustvari("Ferdinand", 49);
    osebe[14] = ustvari("Evelin", 98);
    osebe[15] = ustvari("Dragana", 14);
    osebe[16] = ustvari("Florijan", 77);
    osebe[17] = ustvari("Lina", 39);
    osebe[18] = ustvari("Jelka", 35);
    osebe[19] = ustvari("Kris", 25);
    osebe[20] = ustvari("Nana", 94);
    osebe[21] = ustvari("Liljana", 15);
    osebe[22] = ustvari("Erika", 20);
    osebe[23] = ustvari("Vito", 61);
    osebe[24] = ustvari("Laura", 29);
    osebe[25] = ustvari("Jure", 54);
    osebe[26] = ustvari("Adriana", 44);
    osebe[27] = ustvari("Nadica", 17);
    osebe[28] = ustvari("Zlatko", 29);
    osebe[29] = ustvari("Florjan", 29);
    osebe[30] = ustvari("Matilda", 70);
    osebe[31] = ustvari("Radojka", 34);
    osebe[32] = ustvari("Albert", 65);
    osebe[33] = ustvari("Fikret", 22);
    osebe[34] = ustvari("Alenka", 50);
    osebe[35] = ustvari("Ramiz", 63);
    osebe[36] = ustvari("Din", 90);
    osebe[37] = ustvari("Alenka", 1);
    osebe[38] = ustvari("Elina", 77);
    osebe[39] = ustvari("Marina", 31);
    osebe[40] = ustvari("Erik", 34);
    osebe[41] = ustvari("Tone", 41);
    osebe[42] = ustvari("Dominik", 79);
    osebe[43] = ustvari("Liza", 75);
    osebe[44] = ustvari("Rade", 98);
    osebe[45] = ustvari("Josipa", 83);
    osebe[46] = ustvari("Tim", 11);
    osebe[47] = ustvari("Dunja", 53);
    osebe[48] = ustvari("Maksimiljan", 92);
    osebe[49] = ustvari("Arne", 7);
    osebe[50] = ustvari("Liza", 14);
    osebe[51] = ustvari("Amra", 83);
    osebe[52] = ustvari("Alex", 33);
    osebe[53] = ustvari("Mustafa", 7);
    osebe[54] = ustvari("Teodor", 38);
    osebe[55] = ustvari("Lan", 29);
    osebe[56] = ustvari("Justina", 65);
    osebe[57] = ustvari("Ljubica", 34);
    osebe[58] = ustvari("Isabella", 56);
    osebe[59] = ustvari("Manja", 85);
    osebe[60] = ustvari("Inja", 92);
    osebe[61] = ustvari("Tristan", 67);
    osebe[62] = ustvari("Tara", 12);
    osebe[63] = ustvari("Vilibald", 54);
    osebe[64] = ustvari("Henrik", 9);
    osebe[65] = ustvari("Silvija", 73);
    osebe[66] = ustvari("Helena", 10);
    osebe[67] = ustvari("Sandra", 58);
    osebe[68] = ustvari("Tine", 3);
    osebe[69] = ustvari("Mai", 53);
    osebe[70] = ustvari("Mina", 66);
    osebe[71] = ustvari("Admir", 19);
    osebe[72] = ustvari("Terezija", 97);
    osebe[73] = ustvari("Valerija", 96);
    osebe[74] = ustvari("Alisa", 72);
    osebe[75] = ustvari("Voranc", 23);
    osebe[76] = ustvari("Rade", 52);
    osebe[77] = ustvari("Dan", 5);
    osebe[78] = ustvari("Dominik", 67);
    osebe[79] = ustvari("Patrik", 89);
    osebe[80] = ustvari("Ismet", 76);
    osebe[81] = ustvari("Nika", 55);
    osebe[82] = ustvari("Aneja", 93);
    osebe[83] = ustvari("Fikret", 83);
    osebe[84] = ustvari("Mario", 9);
    osebe[85] = ustvari("Nastja", 70);
    osebe[86] = ustvari("Romana", 78);
    osebe[87] = ustvari("Evgen", 71);
    osebe[88] = ustvari("Erin", 98);
    osebe[89] = ustvari("Nenad", 45);
    osebe[90] = ustvari("Anja", 57);
    osebe[91] = ustvari("Alen", 22);
    osebe[92] = ustvari("Esad", 38);
    osebe[93] = ustvari("Evelin", 74);
    osebe[94] = ustvari("Ismet", 98);
    osebe[95] = ustvari("Avgust", 55);
    osebe[96] = ustvari("Suad", 65);
    osebe[97] = ustvari("Leonida", 63);
    osebe[98] = ustvari("Klara", 60);
    osebe[99] = ustvari("Ladislav", 64);
    osebe[100] = ustvari("Henrik", 33);
    osebe[101] = ustvari("Mirza", 40);
    osebe[102] = ustvari("Semir", 37);
    osebe[103] = ustvari("Rudi", 29);
    osebe[104] = ustvari("Tomi", 22);
    osebe[105] = ustvari("Pija", 5);
    osebe[106] = ustvari("Nea", 62);
    osebe[107] = ustvari("Vili", 18);
    osebe[108] = ustvari("Nace", 67);
    osebe[109] = ustvari("Taj", 41);
    osebe[110] = ustvari("Dunja", 5);
    osebe[111] = ustvari("Miroslava", 84);
    osebe[112] = ustvari("Mojca", 70);
    osebe[113] = ustvari("Klemen", 30);
    osebe[114] = ustvari("Dragomir", 4);
    osebe[115] = ustvari("Bojan", 4);
    osebe[116] = ustvari("Anika", 56);
    osebe[117] = ustvari("Vilibald", 1);
    osebe[118] = ustvari("Petra", 22);
    osebe[119] = ustvari("Aja", 87);
    osebe[120] = ustvari("Klavdija", 89);
    osebe[121] = ustvari("Romana", 72);
    osebe[122] = ustvari("Zdenko", 77);
    osebe[123] = ustvari("Rajmund", 45);
    osebe[124] = ustvari("Janez", 42);
    osebe[125] = ustvari("Silvestra", 87);
    osebe[126] = ustvari("Karolina", 33);
    osebe[127] = ustvari("Iztok", 84);
    osebe[128] = ustvari("Ivo", 24);
    osebe[129] = ustvari("Matilda", 4);
    osebe[130] = ustvari("Milovan", 87);
    osebe[131] = ustvari("Majda", 49);
    osebe[132] = ustvari("Anel", 51);
    osebe[133] = ustvari("Noel", 98);
    osebe[134] = ustvari("Tristan", 82);
    osebe[135] = ustvari("Ivona", 69);
    osebe[136] = ustvari("Polona", 93);
    osebe[137] = ustvari("Anna", 77);
    osebe[138] = ustvari("Mile", 70);
    osebe[139] = ustvari("Klavdija", 29);
    osebe[140] = ustvari("Marijan", 39);
    osebe[141] = ustvari("Lukas", 58);
    osebe[142] = ustvari("Teodora", 99);
    osebe[143] = ustvari("Ksenija", 37);
    osebe[144] = ustvari("Ali", 47);
    osebe[145] = ustvari("Aneja", 26);
    osebe[146] = ustvari("Vanja", 82);
    osebe[147] = ustvari("Avgust", 78);
    osebe[148] = ustvari("Ella", 6);
    osebe[149] = ustvari("Violeta", 70);
    osebe[150] = ustvari("Marinka", 28);
    osebe[151] = ustvari("Dean", 81);
    osebe[152] = ustvari("Slavica", 54);
    osebe[153] = ustvari("Elvira", 69);
    osebe[154] = ustvari("Berta", 68);
    osebe[155] = ustvari("Zara", 51);
    osebe[156] = ustvari("Viljem", 30);
    osebe[157] = ustvari("Leon", 4);
    osebe[158] = ustvari("Nenad", 11);
    osebe[159] = ustvari("Viktorija", 78);
    osebe[160] = ustvari("Ljubo", 90);
    osebe[161] = ustvari("Admir", 78);
    osebe[162] = ustvari("Tjan", 96);
    osebe[163] = ustvari("Drago", 94);
    osebe[164] = ustvari("Polona", 23);
    osebe[165] = ustvari("Taj", 78);
    osebe[166] = ustvari("Asmir", 39);
    osebe[167] = ustvari("Antun", 81);
    osebe[168] = ustvari("Verica", 53);
    osebe[169] = ustvari("Anica", 88);
    osebe[170] = ustvari("Polona", 49);
    osebe[171] = ustvari("Viktor", 89);
    osebe[172] = ustvari("Milivoj", 84);
    osebe[173] = ustvari("Ela", 95);
    osebe[174] = ustvari("Izabela", 28);
    osebe[175] = ustvari("Lina", 7);
    osebe[176] = ustvari("Leo", 58);
    osebe[177] = ustvari("Nika", 14);
    osebe[178] = ustvari("Anej", 75);
    osebe[179] = ustvari("Noel", 97);
    osebe[180] = ustvari("Ajla", 88);
    osebe[181] = ustvari("Mehmed", 10);
    osebe[182] = ustvari("Suad", 87);
    osebe[183] = ustvari("Mirzet", 88);
    osebe[184] = ustvari("Tajda", 88);
    osebe[185] = ustvari("Neja", 35);
    osebe[186] = ustvari("Alex", 6);
    osebe[187] = ustvari("Semir", 54);
    osebe[188] = ustvari("Brina", 89);
    osebe[189] = ustvari("Zala", 90);
    osebe[190] = ustvari("Brigita", 98);
    osebe[191] = ustvari("Sabina", 17);
    osebe[192] = ustvari("Rade", 99);
    osebe[193] = ustvari("Hermina", 12);
    osebe[194] = ustvari("Zarja", 47);
    osebe[195] = ustvari("Vojko", 4);
    osebe[196] = ustvari("Elin", 8);
    osebe[197] = ustvari("Urban", 77);
    osebe[198] = ustvari("Edina", 80);
    osebe[199] = ustvari("Lan", 40);
    osebe[200] = ustvari("Valerija", 80);
    osebe[201] = ustvari("Cvetko", 10);
    osebe[202] = ustvari("Silva", 12);
    osebe[203] = ustvari("Leo", 48);
    osebe[204] = ustvari("Timon", 32);
    osebe[205] = ustvari("Nana", 90);
    osebe[206] = ustvari("Matic", 77);
    osebe[207] = ustvari("Nej", 79);
    osebe[208] = ustvari("Eman", 97);
    osebe[209] = ustvari("Tjan", 79);
    osebe[210] = ustvari("Filip", 75);
    osebe[211] = ustvari("Zdenko", 63);
    osebe[212] = ustvari("Nace", 75);
    osebe[213] = ustvari("Tomi", 61);
    osebe[214] = ustvari("Jerica", 89);
    osebe[215] = ustvari("Erika", 23);
    osebe[216] = ustvari("Mitja", 1);
    osebe[217] = ustvari("Karolina", 3);
    osebe[218] = ustvari("Anica", 15);
    osebe[219] = ustvari("Anica", 30);
    osebe[220] = ustvari("Genovefa", 74);
    osebe[221] = ustvari("Nik", 90);
    osebe[222] = ustvari("Aleksandar", 39);
    osebe[223] = ustvari("Elma", 81);
    osebe[224] = ustvari("Florijan", 28);
    osebe[225] = ustvari("Jadranka", 43);
    osebe[226] = ustvari("Bor", 37);
    osebe[227] = ustvari("Alex", 13);
    osebe[228] = ustvari("Nives", 13);
    osebe[229] = ustvari("Alenka", 5);
    osebe[230] = ustvari("Osman", 37);
    osebe[231] = ustvari("Andrej", 3);
    osebe[232] = ustvari("Julian", 22);
    osebe[233] = ustvari("Hilda", 32);
    osebe[234] = ustvari("Viktor", 11);
    osebe[235] = ustvari("Anica", 79);
    osebe[236] = ustvari("Ali", 83);
    osebe[237] = ustvari("Timon", 54);
    osebe[238] = ustvari("Asja", 33);
    osebe[239] = ustvari("Tea", 65);
    osebe[240] = ustvari("Mirzet", 35);
    osebe[241] = ustvari("Tea", 61);
    osebe[242] = ustvari("Tine", 90);
    osebe[243] = ustvari("Vilibald", 28);
    osebe[244] = ustvari("Neo", 10);
    osebe[245] = ustvari("Noel", 33);
    osebe[246] = ustvari("Ladislav", 73);
    osebe[247] = ustvari("Teo", 22);
    osebe[248] = ustvari("Pavlina", 10);
    osebe[249] = ustvari("Nada", 88);
    osebe[250] = ustvari("Marijan", 53);
    osebe[251] = ustvari("Tim", 16);
    osebe[252] = ustvari("Fran", 6);
    osebe[253] = ustvari("Monika", 16);
    osebe[254] = ustvari("Pia", 37);
    osebe[255] = ustvari("Rene", 39);
    osebe[256] = ustvari("Alan", 94);
    osebe[257] = ustvari("Slobodan", 48);
    osebe[258] = ustvari("Glorija", 85);
    osebe[259] = ustvari("Nejla", 79);
    osebe[260] = ustvari("Laura", 48);
    osebe[261] = ustvari("Suzana", 23);
    osebe[262] = ustvari("Anja", 4);
    osebe[263] = ustvari("Kristijan", 93);
    osebe[264] = ustvari("Lin", 33);
    osebe[265] = ustvari("Ali", 58);
    osebe[266] = ustvari("Senad", 93);
    osebe[267] = ustvari("Ignacij", 77);
    osebe[268] = ustvari("Mateo", 58);
    osebe[269] = ustvari("Mirza", 54);
    osebe[270] = ustvari("Olivija", 69);
    osebe[271] = ustvari("Elina", 95);
    osebe[272] = ustvari("Milovan", 6);
    osebe[273] = ustvari("Admir", 81);
    osebe[274] = ustvari("Kristijan", 99);
    osebe[275] = ustvari("Nika", 31);
    osebe[276] = ustvari("Naja", 53);
    osebe[277] = ustvari("Diana", 41);
    osebe[278] = ustvari("Nenad", 88);
    osebe[279] = ustvari("Tim", 95);
    osebe[280] = ustvari("Matija", 40);
    osebe[281] = ustvari("Val", 93);
    osebe[282] = ustvari("Meta", 97);
    osebe[283] = ustvari("Jasna", 49);
    osebe[284] = ustvari("Val", 34);
    osebe[285] = ustvari("Igor", 36);
    osebe[286] = ustvari("Ignacij", 44);
    osebe[287] = ustvari("Alex", 26);
    osebe[288] = ustvari("Ajda", 59);
    osebe[289] = ustvari("Rudi", 55);
    osebe[290] = ustvari("Zmagoslav", 26);
    osebe[291] = ustvari("Nastja", 57);
    osebe[292] = ustvari("Izabela", 18);
    osebe[293] = ustvari("Jela", 88);
    osebe[294] = ustvari("Semir", 61);
    osebe[295] = ustvari("Matilda", 90);
    osebe[296] = ustvari("Elvis", 46);
    osebe[297] = ustvari("Daniel", 53);
    osebe[298] = ustvari("Marsel", 26);
    osebe[299] = ustvari("Leonida", 11);
    osebe[300] = ustvari("Sabina", 7);
    osebe[301] = ustvari("Mojca", 5);
    osebe[302] = ustvari("Dominik", 84);
    osebe[303] = ustvari("Elina", 14);
    osebe[304] = ustvari("Dijana", 7);
    osebe[305] = ustvari("Edvin", 7);
    osebe[306] = ustvari("Hedvika", 39);
    osebe[307] = ustvari("Mustafa", 35);
    osebe[308] = ustvari("Amalija", 4);
    osebe[309] = ustvari("Izabela", 12);
    osebe[310] = ustvari("Aldo", 61);
    osebe[311] = ustvari("Admir", 99);
    osebe[312] = ustvari("Ava", 34);
    osebe[313] = ustvari("Ciril", 41);
    osebe[314] = ustvari("Rozina", 9);
    osebe[315] = ustvari("Dan", 96);
    osebe[316] = ustvari("Elvira", 95);
    osebe[317] = ustvari("Ankica", 63);
    osebe[318] = ustvari("Nea", 8);
    osebe[319] = ustvari("Grega", 19);
    osebe[320] = ustvari("Zoran", 57);
    osebe[321] = ustvari("Patricia", 36);
    osebe[322] = ustvari("Inja", 81);
    osebe[323] = ustvari("Matija", 64);
    osebe[324] = ustvari("Jovanka", 20);
    osebe[325] = ustvari("Jelica", 64);
    osebe[326] = ustvari("Nea", 17);
    osebe[327] = ustvari("Tijan", 89);
    osebe[328] = ustvari("Zlatica", 52);
    osebe[329] = ustvari("Tajda", 74);
    osebe[330] = ustvari("Val", 62);
    osebe[331] = ustvari("Tristan", 82);
    osebe[332] = ustvari("David", 83);
    osebe[333] = ustvari("Antun", 10);
    osebe[334] = ustvari("Sven", 75);
    osebe[335] = ustvari("Sofija", 1);
    osebe[336] = ustvari("Aleksej", 75);
    osebe[337] = ustvari("Senad", 35);
    osebe[338] = ustvari("Mehmed", 82);
    osebe[339] = ustvari("Tristan", 22);
    osebe[340] = ustvari("Josip", 32);
    osebe[341] = ustvari("Andrej", 64);
    osebe[342] = ustvari("Isabella", 56);
    osebe[343] = ustvari("Hilda", 15);
    osebe[344] = ustvari("Julia", 67);
    osebe[345] = ustvari("Alojzija", 5);
    osebe[346] = ustvari("Laura", 51);
    osebe[347] = ustvari("Slavka", 5);
    osebe[348] = ustvari("Iztok", 42);
    osebe[349] = ustvari("Edina", 85);
    osebe[350] = ustvari("Jana", 29);
    osebe[351] = ustvari("Albert", 28);
    osebe[352] = ustvari("Pavlina", 70);
    osebe[353] = ustvari("Vanja", 43);
    osebe[354] = ustvari("Lenart", 54);
    osebe[355] = ustvari("Jelica", 24);
    osebe[356] = ustvari("Stjepan", 88);
    osebe[357] = ustvari("Aria", 20);
    osebe[358] = ustvari("Asja", 78);
    osebe[359] = ustvari("Suzana", 83);
    osebe[360] = ustvari("Ivica", 92);
    osebe[361] = ustvari("Tone", 99);
    osebe[362] = ustvari("Pavlina", 54);
    osebe[363] = ustvari("Bernard", 2);
    osebe[364] = ustvari("Zmagoslav", 14);
    osebe[365] = ustvari("Lukas", 27);
    osebe[366] = ustvari("Ajna", 78);
    osebe[367] = ustvari("Maks", 91);
    osebe[368] = ustvari("Jolanda", 70);
    osebe[369] = ustvari("Nikolina", 81);
    osebe[370] = ustvari("Nik", 39);
    osebe[371] = ustvari("Melani", 97);
    osebe[372] = ustvari("Mateo", 74);
    osebe[373] = ustvari("Leo", 59);
    osebe[374] = ustvari("Ignac", 1);
    osebe[375] = ustvari("Lin", 60);
    osebe[376] = ustvari("Jelka", 33);
    osebe[377] = ustvari("Amanda", 84);
    osebe[378] = ustvari("Mario", 8);
    osebe[379] = ustvari("Kristijan", 94);
    osebe[380] = ustvari("Albert", 36);
    osebe[381] = ustvari("Dragana", 94);
    osebe[382] = ustvari("Alisa", 91);
    osebe[383] = ustvari("Eli", 50);
    osebe[384] = ustvari("Sabina", 50);
    osebe[385] = ustvari("Drago", 66);
    osebe[386] = ustvari("Aja", 8);
    osebe[387] = ustvari("Alma", 93);
    osebe[388] = ustvari("Rudi", 64);
    osebe[389] = ustvari("Asmir", 15);
    osebe[390] = ustvari("Emina", 45);
    osebe[391] = ustvari("Romana", 1);
    osebe[392] = ustvari("Darinka", 58);
    osebe[393] = ustvari("Lukas", 17);
    osebe[394] = ustvari("Nana", 94);
    osebe[395] = ustvari("Silvija", 96);
    osebe[396] = ustvari("Tisa", 9);
    osebe[397] = ustvari("Lenart", 57);
    osebe[398] = ustvari("Jasmina", 80);
    osebe[399] = ustvari("Radmila", 86);
    osebe[400] = ustvari("Sanja", 1);
    osebe[401] = ustvari("Daris", 14);
    osebe[402] = ustvari("Roman", 30);
    osebe[403] = ustvari("Marjetica", 23);
    osebe[404] = ustvari("Radmila", 77);
    osebe[405] = ustvari("Jana", 79);
    osebe[406] = ustvari("Nastja", 60);
    osebe[407] = ustvari("Goran", 37);
    osebe[408] = ustvari("Barbka", 54);
    osebe[409] = ustvari("Boro", 10);
    osebe[410] = ustvari("Lina", 9);
    osebe[411] = ustvari("Nino", 8);
    osebe[412] = ustvari("Geza", 43);
    osebe[413] = ustvari("Marjan", 94);
    osebe[414] = ustvari("Ranko", 56);
    osebe[415] = ustvari("Patricia", 52);
    osebe[416] = ustvari("Henrik", 44);
    osebe[417] = ustvari("Igor", 8);
    osebe[418] = ustvari("Sabina", 5);
    osebe[419] = ustvari("Kristijan", 74);
    osebe[420] = ustvari("Elma", 33);
    osebe[421] = ustvari("Azra", 66);
    osebe[422] = ustvari("Borut", 11);
    osebe[423] = ustvari("Ajna", 3);
    osebe[424] = ustvari("Ruben", 93);
    osebe[425] = ustvari("Esad", 43);
    osebe[426] = ustvari("Fatima", 29);
    osebe[427] = ustvari("Lana", 38);
    osebe[428] = ustvari("Fikret", 84);
    osebe[429] = ustvari("Tarik", 60);
    osebe[430] = ustvari("Ivica", 2);
    osebe[431] = ustvari("Ava", 12);
    osebe[432] = ustvari("Fatima", 38);
    osebe[433] = ustvari("Oliver", 5);
    osebe[434] = ustvari("Taj", 11);
    osebe[435] = ustvari("Rozalija", 41);
    osebe[436] = ustvari("Brina", 98);
    osebe[437] = ustvari("Nemanja", 79);
    osebe[438] = ustvari("Nevenka", 65);
    osebe[439] = ustvari("Zoja", 89);
    osebe[440] = ustvari("Zdenko", 4);
    osebe[441] = ustvari("Lars", 1);
    osebe[442] = ustvari("Val", 2);
    osebe[443] = ustvari("Alojzija", 8);
    osebe[444] = ustvari("Domen", 15);
    osebe[445] = ustvari("Radomir", 61);
    osebe[446] = ustvari("Marijana", 73);
    osebe[447] = ustvari("Igor", 88);
    osebe[448] = ustvari("Hermina", 60);
    osebe[449] = ustvari("Jelka", 21);
    osebe[450] = ustvari("Irina", 39);
    osebe[451] = ustvari("Ajda", 86);
    osebe[452] = ustvari("Albert", 33);
    osebe[453] = ustvari("Admir", 64);
    osebe[454] = ustvari("Din", 55);
    osebe[455] = ustvari("Miran", 92);
    osebe[456] = ustvari("Ladislava", 84);
    osebe[457] = ustvari("Jela", 68);
    osebe[458] = ustvari("Osman", 71);
    osebe[459] = ustvari("Rajmund", 17);
    osebe[460] = ustvari("Sara", 26);
    osebe[461] = ustvari("Zvonko", 98);
    osebe[462] = ustvari("Ratko", 5);
    osebe[463] = ustvari("Martin", 4);
    osebe[464] = ustvari("Alenka", 92);
    osebe[465] = ustvari("Aleksandar", 58);
    osebe[466] = ustvari("Albert", 95);
    osebe[467] = ustvari("Majda", 13);
    osebe[468] = ustvari("Erin", 2);
    osebe[469] = ustvari("Lejla", 25);
    osebe[470] = ustvari("Zdravko", 28);
    osebe[471] = ustvari("Teodora", 48);
    osebe[472] = ustvari("Adis", 4);
    osebe[473] = ustvari("Darinka", 90);
    osebe[474] = ustvari("Anej", 5);
    osebe[475] = ustvari("Barbara", 82);
    osebe[476] = ustvari("Dijana", 54);
    osebe[477] = ustvari("Jasmina", 63);
    osebe[478] = ustvari("Dan", 24);
    osebe[479] = ustvari("Taja", 45);
    osebe[480] = ustvari("Lija", 79);
    osebe[481] = ustvari("Tit", 40);
    osebe[482] = ustvari("Evgen", 53);
    osebe[483] = ustvari("Stana", 90);
    osebe[484] = ustvari("Nives", 19);
    osebe[485] = ustvari("Eva", 45);
    osebe[486] = ustvari("Biljana", 6);
    osebe[487] = ustvari("Sebastjan", 56);
    osebe[488] = ustvari("Nace", 35);
    osebe[489] = ustvari("Daniel", 64);
    osebe[490] = ustvari("Anica", 65);
    osebe[491] = ustvari("Alex", 95);
    osebe[492] = ustvari("Leon", 68);
    osebe[493] = ustvari("Mirzet", 42);
    osebe[494] = ustvari("Jadranka", 36);
    osebe[495] = ustvari("Julian", 18);
    osebe[496] = ustvari("Jasminka", 39);
    osebe[497] = ustvari("Maid", 17);
    osebe[498] = ustvari("Anna", 29);
    osebe[499] = ustvari("Marinka", 97);
    osebe[500] = ustvari("Patrik", 27);
    osebe[501] = ustvari("Marijana", 69);
    osebe[502] = ustvari("Fatima", 21);
    osebe[503] = ustvari("Eldin", 95);
    osebe[504] = ustvari("Mirjam", 94);
    osebe[505] = ustvari("Lina", 56);
    osebe[506] = ustvari("Ivica", 59);
    osebe[507] = ustvari("Radoslav", 22);
    osebe[508] = ustvari("Zoran", 71);
    osebe[509] = ustvari("Nenad", 6);
    osebe[510] = ustvari("Klavdija", 90);
    osebe[511] = ustvari("Nika", 50);
    osebe[512] = ustvari("Viktor", 97);
    osebe[513] = ustvari("Genovefa", 33);
    osebe[514] = ustvari("Valentin", 61);
    osebe[515] = ustvari("Zoja", 95);
    osebe[516] = ustvari("Jaka", 76);
    osebe[517] = ustvari("Verona", 81);
    osebe[518] = ustvari("Tinkara", 64);
    osebe[519] = ustvari("Esad", 44);
    osebe[520] = ustvari("Teodor", 48);
    osebe[521] = ustvari("Tim", 80);
    osebe[522] = ustvari("Lucas", 13);
    osebe[523] = ustvari("Lian", 60);
    osebe[524] = ustvari("Darjan", 60);
    osebe[525] = ustvari("Drejc", 31);
    osebe[526] = ustvari("Mirsad", 7);
    osebe[527] = ustvari("Ana", 57);
    osebe[528] = ustvari("Din", 42);
    osebe[529] = ustvari("Julija", 93);
    osebe[530] = ustvari("Mario", 84);
    osebe[531] = ustvari("Romana", 88);
    osebe[532] = ustvari("Erin", 40);
    osebe[533] = ustvari("Elena", 76);
    osebe[534] = ustvari("Bogomil", 12);
    osebe[535] = ustvari("Mai", 16);
    osebe[536] = ustvari("Marta", 48);
    osebe[537] = ustvari("Nikolina", 34);
    osebe[538] = ustvari("Alan", 90);
    osebe[539] = ustvari("Polonca", 35);
    osebe[540] = ustvari("Zvonimir", 47);
    osebe[541] = ustvari("Diana", 62);
    osebe[542] = ustvari("Tea", 85);
    osebe[543] = ustvari("Milorad", 43);
    osebe[544] = ustvari("Isabella", 94);
    osebe[545] = ustvari("Marina", 62);
    osebe[546] = ustvari("Kristijan", 83);
    osebe[547] = ustvari("Nika", 17);
    osebe[548] = ustvari("Jasmina", 32);
    osebe[549] = ustvari("Manuela", 91);
    osebe[550] = ustvari("Anna", 34);
    osebe[551] = ustvari("Erik", 66);
    osebe[552] = ustvari("Amadej", 58);
    osebe[553] = ustvari("Toni", 61);
    osebe[554] = ustvari("Rozalija", 30);
    osebe[555] = ustvari("Jakob", 88);
    osebe[556] = ustvari("Ladislav", 31);
    osebe[557] = ustvari("Vlasta", 90);
    osebe[558] = ustvari("Lian", 30);
    osebe[559] = ustvari("Erik", 98);
    osebe[560] = ustvari("Gabrijel", 96);
    osebe[561] = ustvari("Evelin", 80);
    osebe[562] = ustvari("Aleksandar", 8);
    osebe[563] = ustvari("Helena", 21);
    osebe[564] = ustvari("Nace", 91);
    osebe[565] = ustvari("Ignac", 27);
    osebe[566] = ustvari("Kristijan", 96);
    osebe[567] = ustvari("Ciril", 35);
    osebe[568] = ustvari("Ajda", 91);
    osebe[569] = ustvari("Zdenko", 48);
    osebe[570] = ustvari("Jona", 6);
    osebe[571] = ustvari("Dimitrij", 51);
    osebe[572] = ustvari("Nik", 73);
    osebe[573] = ustvari("Berta", 33);
    osebe[574] = ustvari("Pavel", 25);
    osebe[575] = ustvari("Leon", 18);
    osebe[576] = ustvari("Petra", 37);
    osebe[577] = ustvari("Jozefa", 21);
    osebe[578] = ustvari("Ciril", 22);
    osebe[579] = ustvari("Ankica", 27);
    osebe[580] = ustvari("Vida", 92);
    osebe[581] = ustvari("Maid", 53);
    osebe[582] = ustvari("Jana", 10);
    osebe[583] = ustvari("Drago", 54);
    osebe[584] = ustvari("Laura", 27);
    osebe[585] = ustvari("Marjeta", 98);
    osebe[586] = ustvari("Asja", 36);
    osebe[587] = ustvari("Din", 47);
    osebe[588] = ustvari("Rene", 58);
    osebe[589] = ustvari("Nives", 41);
    osebe[590] = ustvari("Hilda", 73);
    osebe[591] = ustvari("Karolina", 54);
    osebe[592] = ustvari("Rozalija", 48);
    osebe[593] = ustvari("Jurij", 97);
    osebe[594] = ustvari("Arne", 97);
    osebe[595] = ustvari("Tine", 89);
    osebe[596] = ustvari("Anja", 71);
    osebe[597] = ustvari("Zvonko", 43);
    osebe[598] = ustvari("Lenart", 83);
    osebe[599] = ustvari("Genovefa", 91);
    osebe[600] = ustvari("Rozalija", 71);
    osebe[601] = ustvari("Naja", 77);
    osebe[602] = ustvari("Zlatko", 77);
    osebe[603] = ustvari("Kristjan", 93);
    osebe[604] = ustvari("Miroslava", 56);
    osebe[605] = ustvari("Lavra", 65);
    osebe[606] = ustvari("Nadica", 61);
    osebe[607] = ustvari("Alex", 16);
    osebe[608] = ustvari("Lenart", 28);
    osebe[609] = ustvari("Brin", 19);
    osebe[610] = ustvari("Erna", 96);
    osebe[611] = ustvari("Milenko", 59);
    osebe[612] = ustvari("Nik", 44);
    osebe[613] = ustvari("Aja", 57);
    osebe[614] = ustvari("Eva", 10);
    osebe[615] = ustvari("Aleksandar", 81);
    osebe[616] = ustvari("Izabela", 33);
    osebe[617] = ustvari("Antun", 29);
    osebe[618] = ustvari("Mirza", 53);
    osebe[619] = ustvari("Rozalija", 70);
    osebe[620] = ustvari("Verica", 51);
    osebe[621] = ustvari("Voranc", 87);
    osebe[622] = ustvari("Mitja", 69);
    osebe[623] = ustvari("Biljana", 73);
    osebe[624] = ustvari("Roman", 15);
    osebe[625] = ustvari("Anja", 82);
    osebe[626] = ustvari("Barica", 6);
    osebe[627] = ustvari("Manuel", 49);
    osebe[628] = ustvari("Ivana", 79);
    osebe[629] = ustvari("Evita", 26);
    osebe[630] = ustvari("Tajda", 3);
    osebe[631] = ustvari("Silva", 49);
    osebe[632] = ustvari("Brina", 34);
    osebe[633] = ustvari("Vida", 4);
    osebe[634] = ustvari("Vanja", 65);
    osebe[635] = ustvari("Arne", 46);
    osebe[636] = ustvari("Elena", 27);
    osebe[637] = ustvari("Zdenka", 41);
    osebe[638] = ustvari("Karolina", 94);
    osebe[639] = ustvari("Patricia", 68);
    osebe[640] = ustvari("Fatima", 93);
    osebe[641] = ustvari("Barbka", 99);
    osebe[642] = ustvari("Josipa", 75);
    osebe[643] = ustvari("Goran", 11);
    osebe[644] = ustvari("Elvisa", 2);
    osebe[645] = ustvari("Ljiljana", 95);
    osebe[646] = ustvari("Elma", 47);
    osebe[647] = ustvari("Nace", 69);
    osebe[648] = ustvari("Sanja", 87);
    osebe[649] = ustvari("Sven", 35);
    osebe[650] = ustvari("Olga", 65);
    osebe[651] = ustvari("Aldo", 42);
    osebe[652] = ustvari("Alex", 11);
    osebe[653] = ustvari("Tit", 1);
    osebe[654] = ustvari("Meta", 60);
    osebe[655] = ustvari("Dijana", 37);
    osebe[656] = ustvari("Mirsad", 66);
    osebe[657] = ustvari("Mirsad", 78);
    osebe[658] = ustvari("Vlasta", 82);
    osebe[659] = ustvari("Jasmina", 93);
    osebe[660] = ustvari("Milenko", 1);
    osebe[661] = ustvari("Julij", 35);
    osebe[662] = ustvari("Minka", 67);
    osebe[663] = ustvari("Jurij", 52);
    osebe[664] = ustvari("Lorena", 7);
    osebe[665] = ustvari("Justina", 66);
    osebe[666] = ustvari("Bor", 94);
    osebe[667] = ustvari("Nemanja", 20);
    osebe[668] = ustvari("Lin", 34);
    osebe[669] = ustvari("Jasminka", 90);
    osebe[670] = ustvari("Kris", 27);
    osebe[671] = ustvari("Mirnes", 42);
    osebe[672] = ustvari("Erin", 43);
    osebe[673] = ustvari("Jasmin", 18);
    osebe[674] = ustvari("Anel", 12);
    osebe[675] = ustvari("Ratko", 52);
    osebe[676] = ustvari("Manja", 83);
    osebe[677] = ustvari("Marijana", 51);
    osebe[678] = ustvari("Erna", 53);
    osebe[679] = ustvari("Mehmed", 67);
    osebe[680] = ustvari("Sabina", 80);
    osebe[681] = ustvari("Filip", 28);
    osebe[682] = ustvari("Lucas", 61);
    osebe[683] = ustvari("Neo", 17);
    osebe[684] = ustvari("Manuel", 33);
    osebe[685] = ustvari("Edvard", 17);
    osebe[686] = ustvari("Mario", 42);
    osebe[687] = ustvari("Vito", 84);
    osebe[688] = ustvari("Emina", 40);
    osebe[689] = ustvari("Senad", 91);
    osebe[690] = ustvari("Nik", 98);
    osebe[691] = ustvari("Iztok", 13);
    osebe[692] = ustvari("Vilibald", 18);
    osebe[693] = ustvari("Rafael", 29);
    osebe[694] = ustvari("Rudi", 6);
    osebe[695] = ustvari("Nej", 13);
    osebe[696] = ustvari("Zara", 94);
    osebe[697] = ustvari("Emina", 63);
    osebe[698] = ustvari("Nai", 81);
    osebe[699] = ustvari("Mirzet", 57);
    osebe[700] = ustvari("Hilda", 13);
    osebe[701] = ustvari("Ladislav", 61);
    osebe[702] = ustvari("Bor", 39);
    osebe[703] = ustvari("Zdravko", 57);
    osebe[704] = ustvari("Melani", 48);
    osebe[705] = ustvari("Igor", 47);
    osebe[706] = ustvari("Barbka", 20);
    osebe[707] = ustvari("Irina", 90);
    osebe[708] = ustvari("Laura", 19);
    osebe[709] = ustvari("Daliborka", 13);
    osebe[710] = ustvari("Danilo", 14);
    osebe[711] = ustvari("Nace", 90);
    osebe[712] = ustvari("Zvonko", 71);
    osebe[713] = ustvari("Ervin", 95);
    osebe[714] = ustvari("Valentin", 94);
    osebe[715] = ustvari("Tijan", 82);
    osebe[716] = ustvari("Viktor", 26);
    osebe[717] = ustvari("Ali", 31);
    osebe[718] = ustvari("Amadeja", 95);
    osebe[719] = ustvari("Oliver", 3);
    osebe[720] = ustvari("Gabrijel", 74);
    osebe[721] = ustvari("Eli", 95);
    osebe[722] = ustvari("Mina", 46);
    osebe[723] = ustvari("Ali", 63);
    osebe[724] = ustvari("Mustafa", 1);
    osebe[725] = ustvari("Stanislav", 6);
    osebe[726] = ustvari("Sofija", 60);
    osebe[727] = ustvari("Matija", 6);
    osebe[728] = ustvari("David", 93);
    osebe[729] = ustvari("Tomi", 81);
    osebe[730] = ustvari("Hinko", 47);
    osebe[731] = ustvari("Jasmina", 55);
    osebe[732] = ustvari("Nina", 16);
    osebe[733] = ustvari("Elena", 35);
    osebe[734] = ustvari("Lucas", 8);
    osebe[735] = ustvari("Bernardka", 14);
    osebe[736] = ustvari("Nevenka", 34);
    osebe[737] = ustvari("Marjan", 58);
    osebe[738] = ustvari("Marjetica", 92);
    osebe[739] = ustvari("Helena", 22);
    osebe[740] = ustvari("Stefan", 75);
    osebe[741] = ustvari("Tomi", 2);
    osebe[742] = ustvari("Nemanja", 59);
    osebe[743] = ustvari("Sara", 38);
    osebe[744] = ustvari("Sanel", 97);
    osebe[745] = ustvari("Lenart", 14);
    osebe[746] = ustvari("Pija", 99);
    osebe[747] = ustvari("Igor", 41);
    osebe[748] = ustvari("Jona", 7);
    osebe[749] = ustvari("Romana", 56);
    osebe[750] = ustvari("Manuel", 40);
    osebe[751] = ustvari("Brigita", 30);
    osebe[752] = ustvari("Sead", 90);
    osebe[753] = ustvari("Mirzet", 39);
    osebe[754] = ustvari("Pia", 83);
    osebe[755] = ustvari("Semir", 78);
    osebe[756] = ustvari("Tea", 42);
    osebe[757] = ustvari("Marijana", 33);
    osebe[758] = ustvari("Kevin", 26);
    osebe[759] = ustvari("Maid", 62);
    osebe[760] = ustvari("Vanesa", 67);
    osebe[761] = ustvari("Anabela", 35);
    osebe[762] = ustvari("Verona", 74);
    osebe[763] = ustvari("Milenko", 44);
    osebe[764] = ustvari("Dijana", 63);
    osebe[765] = ustvari("Eman", 89);
    osebe[766] = ustvari("Ivona", 59);
    osebe[767] = ustvari("Andrej", 34);
    osebe[768] = ustvari("Biljana", 52);
    osebe[769] = ustvari("Julij", 85);
    osebe[770] = ustvari("Genovefa", 68);
    osebe[771] = ustvari("Lea", 6);
    osebe[772] = ustvari("Stanko", 35);
    osebe[773] = ustvari("Izet", 10);
    osebe[774] = ustvari("Marijan", 57);
    osebe[775] = ustvari("Stjepan", 14);
    osebe[776] = ustvari("Silvija", 19);
    osebe[777] = ustvari("Vili", 90);
    osebe[778] = ustvari("Nick", 37);
    osebe[779] = ustvari("Ljiljana", 68);
    osebe[780] = ustvari("Bogomir", 54);
    osebe[781] = ustvari("Adriana", 83);
    osebe[782] = ustvari("Timon", 73);
    osebe[783] = ustvari("Pija", 15);
    osebe[784] = ustvari("Zvonimir", 1);
    osebe[785] = ustvari("Edi", 35);
    osebe[786] = ustvari("Asja", 56);
    osebe[787] = ustvari("Julija", 46);
    osebe[788] = ustvari("Vlasta", 49);
    osebe[789] = ustvari("Patrik", 21);
    osebe[790] = ustvari("Daris", 16);
    osebe[791] = ustvari("Inja", 88);
    osebe[792] = ustvari("Ciril", 59);
    osebe[793] = ustvari("Leonida", 47);
    osebe[794] = ustvari("Silvija", 52);
    osebe[795] = ustvari("Erik", 66);
    osebe[796] = ustvari("Terezija", 58);
    osebe[797] = ustvari("Slavka", 44);
    osebe[798] = ustvari("Pavlina", 13);
    osebe[799] = ustvari("Mile", 11);
    osebe[800] = ustvari("Matic", 33);
    osebe[801] = ustvari("Melita", 75);
    osebe[802] = ustvari("Olga", 31);
    osebe[803] = ustvari("Nikolina", 85);
    osebe[804] = ustvari("Tjan", 41);
    osebe[805] = ustvari("Klemen", 64);
    osebe[806] = ustvari("Leo", 76);
    osebe[807] = ustvari("Jan", 80);
    osebe[808] = ustvari("Eva", 40);
    osebe[809] = ustvari("Mojca", 55);
    osebe[810] = ustvari("Predrag", 50);
    osebe[811] = ustvari("Lin", 26);
    osebe[812] = ustvari("Slavica", 22);
    osebe[813] = ustvari("Vili", 39);
    osebe[814] = ustvari("Ignac", 89);
    osebe[815] = ustvari("Teodor", 1);
    osebe[816] = ustvari("Tinkara", 8);
    osebe[817] = ustvari("Viktorija", 8);
    osebe[818] = ustvari("Tim", 70);
    osebe[819] = ustvari("Rok", 94);
    osebe[820] = ustvari("Nada", 30);
    osebe[821] = ustvari("Lukas", 92);
    osebe[822] = ustvari("Anika", 94);
    osebe[823] = ustvari("Alma", 56);
    osebe[824] = ustvari("Julian", 34);
    osebe[825] = ustvari("Hanna", 73);
    osebe[826] = ustvari("Aleksandar", 40);
    osebe[827] = ustvari("Zvonko", 26);
    osebe[828] = ustvari("Zvonimir", 96);
    osebe[829] = ustvari("Jana", 67);
    osebe[830] = ustvari("Tiara", 50);
    osebe[831] = ustvari("Vili", 46);
    osebe[832] = ustvari("Alan", 64);
    osebe[833] = ustvari("Jelica", 33);
    osebe[834] = ustvari("Bernardka", 76);
    osebe[835] = ustvari("Nena", 32);
    osebe[836] = ustvari("Aneja", 54);
    osebe[837] = ustvari("Ljiljana", 21);
    osebe[838] = ustvari("Viktor", 28);
    osebe[839] = ustvari("Stefan", 26);
    osebe[840] = ustvari("Tit", 40);
    osebe[841] = ustvari("Zdenka", 61);
    osebe[842] = ustvari("Jovanka", 72);
    osebe[843] = ustvari("Ava", 46);
    osebe[844] = ustvari("Lidija", 42);
    osebe[845] = ustvari("Domen", 4);
    osebe[846] = ustvari("Adriana", 67);
    osebe[847] = ustvari("Tine", 86);
    osebe[848] = ustvari("Zarja", 48);
    osebe[849] = ustvari("Danilo", 52);
    osebe[850] = ustvari("Vilma", 39);
    osebe[851] = ustvari("Bogomil", 23);
    osebe[852] = ustvari("Darko", 41);
    osebe[853] = ustvari("Geza", 19);
    osebe[854] = ustvari("Zoja", 32);
    osebe[855] = ustvari("Patrik", 36);
    osebe[856] = ustvari("Mirzet", 95);
    osebe[857] = ustvari("Matej", 18);
    osebe[858] = ustvari("Hermina", 63);
    osebe[859] = ustvari("Rade", 55);
    osebe[860] = ustvari("Zoja", 63);
    osebe[861] = ustvari("Meta", 73);
    osebe[862] = ustvari("Olivija", 35);
    osebe[863] = ustvari("Dean", 44);
    osebe[864] = ustvari("Taja", 96);
    osebe[865] = ustvari("Jasna", 3);
    osebe[866] = ustvari("Tim", 55);
    osebe[867] = ustvari("Anika", 22);
    osebe[868] = ustvari("Stefan", 82);
    osebe[869] = ustvari("Nemanja", 65);
    osebe[870] = ustvari("Sara", 82);
    osebe[871] = ustvari("Borut", 61);
    osebe[872] = ustvari("Elvisa", 90);
    osebe[873] = ustvari("Julian", 90);
    osebe[874] = ustvari("Cvetko", 71);
    osebe[875] = ustvari("Monika", 23);
    osebe[876] = ustvari("Elin", 76);
    osebe[877] = ustvari("Amra", 28);
    osebe[878] = ustvari("Majda", 93);
    osebe[879] = ustvari("Henrik", 10);
    osebe[880] = ustvari("Hedvika", 47);
    osebe[881] = ustvari("Elvira", 93);
    osebe[882] = ustvari("Milenko", 69);
    osebe[883] = ustvari("Patrik", 81);
    osebe[884] = ustvari("Jana", 80);
    osebe[885] = ustvari("Nadica", 14);
    osebe[886] = ustvari("Sanja", 28);
    osebe[887] = ustvari("Max", 35);
    osebe[888] = ustvari("Ella", 22);
    osebe[889] = ustvari("Jasmin", 24);
    osebe[890] = ustvari("Maksimiljan", 31);
    osebe[891] = ustvari("Jurij", 55);
    osebe[892] = ustvari("Justina", 18);
    osebe[893] = ustvari("Dean", 54);
    osebe[894] = ustvari("Lina", 15);
    osebe[895] = ustvari("Katica", 62);
    osebe[896] = ustvari("Tijan", 70);
    osebe[897] = ustvari("Boro", 89);
    osebe[898] = ustvari("Stefan", 64);
    osebe[899] = ustvari("Sanel", 6);
    osebe[900] = ustvari("Bernardka", 26);
    osebe[901] = ustvari("Jelica", 17);
    osebe[902] = ustvari("Dragana", 66);
    osebe[903] = ustvari("Kris", 52);
    osebe[904] = ustvari("Lija", 59);
    osebe[905] = ustvari("Iztok", 72);

    uredi(osebe, n);
    for (int i = 0;  i < n;  i++) {
        printf("%s/%d\n", osebe[i]->ime, osebe[i]->starost);
    }

    for (int i = 0;  i < n;  i++) {
        free(osebe[i]);
    }
    free(osebe);

    exit(0);
    return 0;
}
