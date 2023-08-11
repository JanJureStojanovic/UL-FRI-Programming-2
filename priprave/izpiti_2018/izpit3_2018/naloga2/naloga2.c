
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

Vozlisce* odstrani(Vozlisce* osnova, Vozlisce* indeksi) {
    
    Vozlisce* i = osnova;
    
    int kjeSmo = 0;
    bool ujemanje;
    
    while(i != NULL) {
    
        ujemanje = false; // Za vsak krog bomo iskali ujemanje
        
        Vozlisce* j = indeksi;
        while(j != NULL) {
            if (j->podatek == kjeSmo + 1) {
                ujemanje = true;
                break;
            }
            j = j->naslednje;
        }
        
        // Naslednji je za odstraniti
        if (ujemanje == true) {
            i->naslednje = i->naslednje->naslednje;
        } else {
            i = i->naslednje;
        }
        
        
        
        kjeSmo++;
    }
    
    if (indeksi->podatek == 0) {
        osnova = osnova->naslednje;
    }
    
    return osnova;
} 
    
    

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
