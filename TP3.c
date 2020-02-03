struct Ocject{

	int price;
	char name [30];
	
};

typedef struct Ocject generate;

void sorting( int i, int j,    ){
	
	
	
}

int main(){
	
	int z;
	int iSize = 4;
	
	
	generate banana = { 5, "banana" };
	generate sword = { 100, "sword" };
	generate rawMeat = { 5, "raw meat" };
	generate potion = { 30, "potion" };
	
	generate inventory[iSize] = { banana, sword, rawMeat, potion };
	
	for ( z = 0 ; z == iSize ; z++ ){
		
		printf("%s\n", inventory->name)
		printf("%d gold\n", inventory->price)
	
	}
	
	return 0;
	
}