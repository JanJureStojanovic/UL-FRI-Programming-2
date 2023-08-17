

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    // For loop cez vse studente
    for (int i = 0; i < stStudentov; i++) {
        // Preverimo ujemanje vpisne stevilke
        if (studentje[i]->vpisna == vpisna) {
            // Vrnemo indeks studenta, ce se ujema
            return i;
        }
    }
    // Nismo nasli studenta -> vrnemo -1
    return -1;
}

int poisciPO(Student* student, char* predmet) {
    // For loop cez vse pare predemt-ocena
    for (int i = 0; i < student->stPO; i++) {
        // Preverimo, ce je student opravljal podan predmet
        if (strcmp(student->po[i].predmet, predmet) == 0) {
            // Vrnemo indeks predmeta, ce se ujema
            return i;
        }
    }
    // Nismo nasli predmeta -> vrnemo -1
    return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    // Najdemo indeks studenta
    int indeks = poisciStudenta(studentje, stStudentov, vpisna);
    
    // Ce student ne obstaja: indeks == -1, moramo narediti nov struct
    if (indeks == -1) {

        // Array sestavljen iz objektov predmet-ocena, z desetimi mesti
        PO* tabelaPredmetOcena = malloc(sizeof(PO) * 10);
        // Prvi objekt tabele uredimo na pravo oceno in predmet
        tabelaPredmetOcena[0].ocena = ocena;
        // memcpy kopira predmet na mesto tabelaPredmetOcena[0].predmet
        // Zraven podamo se st. 4 (velikost)
        memcpy(tabelaPredmetOcena[0].predmet , predmet, 4);

        // Ustvarimo 'studenta' in dolocimo vse njegove podatke
        Student* novStudent = malloc(sizeof(Student));
        novStudent->po = tabelaPredmetOcena;
        // Le en par predmet ocena -> ta ki smo ga ravno dodali
        novStudent->stPO = 1;
        novStudent->vpisna = vpisna;

        // Novega studenta dodamo na konec tabele
        studentje[stStudentov] = novStudent;
        stStudentov++;

    // Nasli smo indeks, student obstaja
    } else {

        // Izberemo studenta in poiscemo najdti indeks para predmet-ocena
        Student* student = studentje[indeks];
        int indeksPo = poisciPO(student, predmet);

        // Par predmet-ocena ne obstaja: indeksPo == -1, moramo narediti nov struct
        if (indeksPo == -1) {
            // Na 'nov' konec tabele parov dodamo oceno in predmet
            student->po[student->stPO].ocena = ocena;
            // memcpy kopira predmet na mesto student->po[student->stPO].predmet
            // Zraven podamo se st. 4 (velikost)
            memcpy(student->po[student->stPO].predmet, predmet, 4);
            // Povecamo stevilo parov predmet-ocena za tega studenta
            student->stPO++;

        // Par predmet-ocena obstaja - lahko ga samo posodobimo
        } else {
            // Posodobimo oceno na prej najdenem indeksu
            student->po[indeksPo].ocena = ocena;
        }
    }
    // Vrnemo stevilo studentov
    return stStudentov;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
