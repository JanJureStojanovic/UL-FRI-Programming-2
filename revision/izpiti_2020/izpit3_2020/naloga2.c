#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Klub {
    char ime[21];
    int st;
    char **clani;
} Klub;

Klub* produce() {

    Klub* newClub = (Klub*)malloc(sizeof(Klub));
    
    // Read club name
    scanf("%s", newClub->ime);
    
    // Read member count
    scanf("%d", &newClub->st);
    
    // Allocate memory for member names
    newClub->clani = (char**)malloc(newClub->st * sizeof(char*));
    
    // Read and store member names
    for (int i = 0; i < newClub->st; i++) {
        newClub->clani[i] = (char*)malloc(21 * sizeof(char));  // 20 chars + null terminator
        scanf("%s", newClub->clani[i]);
    }
    
    return newClub;
}

int main() {

    Klub *myClub = produce();
    
    if (myClub != NULL) {
        printf("Club Name: %s\n", myClub->ime);
        printf("Member Count: %d\n", myClub->st);
        
        for (int i = 0; i < myClub->st; i++) {
            printf("Member %d: %s\n", i + 1, myClub->clani[i]);
            free(myClub->clani[i]);
        }
        
        free(myClub->clani);
        free(myClub);
    }
    
    return 0;
}
