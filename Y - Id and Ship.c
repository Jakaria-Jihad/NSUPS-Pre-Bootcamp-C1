#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    char c;
	    scanf(" %c", &c);
	    
	    if(c=='B'|| c=='b')
	        printf("BattleShip");
	    else if(c=='C'|| c=='c')
	        printf("Cruiser");
	    else if(c=='D'|| c=='d')
	        printf("Destroyer");
	    else if(c=='F'|| c=='f')
	        printf("Frigate");
	        
	    printf("\n");
	}
	return 0;
}
