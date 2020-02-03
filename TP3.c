#include <stdio.h>
#include <string.h>

struct Ocject{

	int price;
	char name[30];
	
};

typedef struct Ocject generate;

int main(){
	
	int choice;
	int choice2;
	int nbObject = 4;
	int nbArticle = 4;
	int i,j,z;
	int a = 0;
	int gold = 35;
	int choose;
	
	generate banana = { 5, "banana" };
	generate sword = { 100, "sword" };
	generate rawMeat = { 5, "raw meat" };
	generate potion = { 30, "potion" };
	generate slotEmpty1 = { 0, " " };
	generate slotEmpty2 = { 0, " " };
	generate slotEmpty3 = { 0, " " };
	generate slotEmpty4 = { 0, " " };
	generate slotEmpty5 = { 0, " " };
	
	generate garlic = { 5, "garlic" };
	generate excalibur = { 10000, "excalibur" };
	generate stGraal = { 5000000, "st graal" };
	generate crucifix = { 30, "crucifix" };
	generate empty1 = { 0, " " };
	generate empty2 = { 0, " " };
	generate empty3 = { 0, " " };
	generate empty4 = { 0, " " };
	generate empty5 = { 0, " " };
	
	generate c = { 0, "   " };
	
	generate store[9];
	store[0] = garlic;
	store[1] = excalibur;
	store[2] = stGraal;
	store[3] = crucifix;
	store[4] = empty1;
	store[5] = empty2;
	store[6] = empty3;
	store[7] = empty4;
	store[8] = empty5;
	
	generate inventory[9];
	inventory[0] = banana;
	inventory[1] = sword;
	inventory[2] = rawMeat;
	inventory[3] = potion;
	inventory[4] = slotEmpty1;
	inventory[5] = slotEmpty2;
	inventory[6] = slotEmpty3;
	inventory[7] = slotEmpty4;
	inventory[8] = slotEmpty5;
	
	while ( choice != 3 ){
		
		printf("Open inventory - 1\nBuy something from Seller - 2\nExit - 3\n");
		scanf("%d", &choice);
		
		if ( choice == 1 ){
			
			for(i=0;i<nbObject-1;i++){
				
				for(j=i+1;j<nbObject;j++){
					
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
			
			printf("You have %d gold\n", gold );
			
			for ( z = 0 ; z < nbObject ; z++ ){
		
				printf("%s\n", inventory[z].name);
				printf("%d gold\n", inventory[z].price);
	
			}
		
		}

		if ( choice == 2 ){
			
				for(i=0;i<nbArticle-1;i++){
					
					for(j=i+1;j<nbArticle;j++){
						
					if ( store[i].price > store[j].price ){
							
							strcpy ( c.name, store[i].name );
							c.price = store[i].price;
							
							strcpy ( store[i].name, store[j].name );
							store[i].price = inventory[j].price;
							
							strcpy ( store[j].name, c.name );
							store[j].price = c.price;
						}
					
					}
				
				}
				
				printf("You have %d gold\n", gold );
				
				for ( z = 0 ; z < nbArticle ; z++ ){
					
					printf ("%d\n", a );
			
					printf("%s\n", store[z].name);
					printf("%d gold\n", store[z].price);
					
					a += 1;
					
				}
				
				printf("Do you want to add an object ( 1 ), buy something ( 2 ) or exit ( 3 )?\n");
				scanf("%d", &choice2 );
				
				if ( choice2 == 1 ){
					
					nbArticle += 1;
					
					printf("ENter the name and then the price of the object");
					scanf("%s", store[nbArticle].name );
					
					scanf("%d", store[nbArticle].price );
					
				}
				
				if ( choice2 == 2 ){
					
					printf("What do you want to buy ?\n");
					scanf("%d", &choose);
					
					if ( gold >= store[choose].price ){
						
						nbObject += 1;
						
						inventory[nbObject].price = store[choose].price;
						strcpy ( inventory[nbObject].name, store[choose].name );
						
						gold -= store[choose].price;
						
					}
				
				}
				
			
		
		}
			
			
			
			
	}
	return 0;
	
}