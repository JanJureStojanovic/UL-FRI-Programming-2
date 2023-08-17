#include <stdio.h>
#include <stdbool.h>

/*
• Niz, ki se prične z eno od števk z intervala [1, 9] in nadaljuje s poljubno dolgim
  zaporedjem števk z intervala [0, 9].
• Niz, ki se prične s števko 0 in nadaljuje s poljubno dolgim zaporedjem števk z
  intervala [0, 7].
• Niz, ki se prične z nizom 0x in nadaljuje s poljubno dolgim nepraznim zaporedjem
  znakov iz množice {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}. 
*/

int main() {
    
    bool goodNum = true;
    bool konec;
    bool empty; // bool
    int x = getchar();
    
    while (x != '\n') {
    
        if (x == '0') { // zacetek z 0
        
            x = getchar();
            
            if (x == 'x') { //HEX
            
                x = getchar();
                empty = true;
                while (x != ' ' && x != '\n') { 
                    empty = false;       
                    if (x < 'A' || x > 'F') { // ni crka
                        if (x < '0' || x > '9') { // ni stevilo
                            goodNum = false;
                        }
                    }
                    x = getchar();  
                }            
                if (empty == true) {
                    goodNum = false;
                }
                if (x == '\n') {
                    konec = true;
                } 
            } else if (x >= '0' && x <= '7') { // not HEX 
                while (x != ' ' && x != '\n') {
                    if (x < '0' || x > '7') {
                        goodNum = false;
                    }
                    x = getchar();
                }
                if (x == '\n') {
                    konec = true;
                }
            } else if (x == ' ' || x == '\n') { // zadnja opicja ---> st. = 0 
                if (x == '\n') {
                    konec = true;
                }
            } else {
                while (x != ' ' && x != '\n') {
                    x = getchar();   
                }
                goodNum = false;
                if (x == '\n') {
                    konec = true;
                }
            }
            
         } else if (x >= '1' && x <= '9') {
            while (x != ' ' && x != '\n') {
                if (x < '0' || x > '9') {
                    goodNum = false;
                }
                x = getchar();
            }
            if (x == '\n') {
                konec = true;
            }
            
        } else {
            while (x != ' ' && x != '\n') {
                x = getchar();   
            }
            goodNum = false;
            if (x == '\n') {
                konec = true;
            }
        }
        
        if (goodNum == true) {
            putchar(49);
        } else {
            putchar(48);
        }
        
        if (konec == true) {
            break;
        }
        
        goodNum = true;
        
        x = getchar();
    }
    
    printf("\n");
}
