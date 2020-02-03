#include <stdio.h>
#include <string.h>

struct Ocject{

	int price;
	char name[30];
	
};

typedef struct Ocject generate;

int main(){
	
	int choice;
	int nbOject = 4;
	int i,j,z;
	
	generate banana = { 5, "banana" };
	generate sword = { 100, "sword" };
	generate rawMeat = { 5, "raw meat" };
	generate potion = { 30, "potion" };
	
	generate c = { 0, "   " };
	
	generate inventory[9];
	inventory[0] = banana;
	inventory[1] = sword;
	inventory[2] = rawMeat;
	inventory[3] = potion;
	
	while ( choice != 3 ){
		
		printf("Open inventory - 1\nBuy something from Seller - 2\nExit - 3\n");
		scanf("%d", &choice);
		
		if ( choice == 1 ){
			
			for(i=0;i<nbOject-1;i++){
				
				for(j=i+1;j<nbOject;j++){
					
					if ( strcmp ( inventory[i].name, inventory[j].name ) > 0 ){
						
						strcpy ( c.name, inventory[i].name );
						c.price = inventory[i].price;
						
						strcpy ( inventory[i].name, inventory[j].name );
						inventory[i].price = inventory[j].price;
						
						strcpy ( inventory[j].name, c.name );
						inventory[j].price = c.price;
					}
				
				}
			
			}
			
			for ( z = 0 ; z < nbOject ; z++ ){
		
				printf("%s\n", inventory[z].name);
				printf("%d gold\n", inventory[z].price);
	
			}
		
		}

		
			
			
			
			
	}
	return 0;
	
}