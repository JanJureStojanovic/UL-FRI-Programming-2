#include <stdio.h>
#include <stdbool.h>

/*
• Niz, ki ga sestavlja samo števka 0.

• Niz, ki se prične z eno od števk z intervala [1, 9] in nadaljuje s poljubno dolgim
  zaporedjem števk z intervala [0, 9].
  
• Niz, ki se prične z znakom + ali - in nadaljuje bodisi s števko 0 bodisi z zapored-
  jem, ki se prične z eno od števk z intervala [1, 9] in nadaljuje s poljubno dolgim
  zaporedjem števk z intervala [0, 9].
  
*/

int main() {
    
    bool goodNum = true;
    bool nextWord = false;
    bool konec;
    
    int i;
    int x = getchar();
    
    while (x != '\n') {
    
        if (x == '+' || x == '-') { //zacnemo s predznakom in nadaljujemo do presledka
            
            i = 0;
            
            while (x != ' ' && x != '\n') {
            
                x = getchar();
                
                if (x == '+' || x == '-') { // 1. napaka; ce imamo se en plus ali minus
                    goodNum = false;
                }
                
                if (x == '\n') {
                    konec = true;
                }
                
                i += 1;
            }
            
            if (i == 1) {
                goodNum = false;
            }
        }
        
        if (x >= '0' && x <= '9') { //zacnemo s stevilom in nadaljujem dokler ne dobimo presledka
            
            while (x != ' ' && x != '\n') {
            
                x = getchar();
                
                if (x == '+' || x == '-') { // 1. napaka; ce imamo plus ali minus znotraj stevila
                    goodNum = false;
                }
                
                if (x == '\n') {
                    konec = true;
                }
            }
        }
        
        
        
        if (goodNum == true) {
            printf("1");
        } else {
            printf("0");
        }
        
        if (konec == true) {
            break;
        }
        
        goodNum = true;
        nextWord = false;
        
        x = getchar();
    }
    
    printf("\n");
}

