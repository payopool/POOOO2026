#include"Header.h"
#include"item.h"
#include"inventory.h"

class
	character{};
int main() {
	Inventory inventori;
	inventori.additem("pocion vida", 3);
	inventori.additem("elixir de dios", 5);
		inventori.additem("oro", 1300);
		inventori.useitem("pocion vida", 3);
		inventori.ShowInventory();		
		std::cout << "bienevendo a veracruz\n";
		return 0;
}