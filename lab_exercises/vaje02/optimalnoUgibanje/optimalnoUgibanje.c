#include <stdio.h>

int main() {
	
	int spMeja;
	int zgMeja;
	int jeEna = 1;
	int x;
	
	scanf("%d %d", &spMeja, &zgMeja);
	
	while (jeEna == 1) {
	
		scanf("%d", &x);
		int povprecje = ((spMeja + zgMeja) / 2);
		
		if (x == 1) {
			spMeja = povprecje + 1;
		}
		
		if (x == -1) {
			zgMeja = povprecje - 1;
		}
		
		if (x == 0) {
			jeEna = 0;
		}
	}
	
	//imamo samo enega kandidata -> output == kandidat
	if (zgMeja == spMeja) {
		printf("%d\n", zgMeja);
	}
	
	//imamo vec kot enega kandidata -> output == meje
	if (zgMeja > spMeja) {
		printf("%d %d\n", spMeja, zgMeja);
	}
	
	//nimamo kandidata -> output == PROTISLOVJE
	if (zgMeja < spMeja) {
		printf("PROTISLOVJE");
	}
	
	
	
}


