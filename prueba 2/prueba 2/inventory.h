#pragma once
#include "Header.h"
#include "item.h"
class
	Inventory {
private:
	std::vector<Item> M_items;
public:
	Inventory()=default;
~Inventory()=default;
void additem(const std::string& name, int quantity) {
	//Se busca elemento para gregar y lo va incrementando la cantidad
	for (auto& item:M_items) {
		if (item.getName() == name) {
			item.add(quantity);
			return;
		}
	}
	//si no existe se agrega uno nuevo
	M_items.emplace_back(name, quantity);
}
void ShowInventory()const {
	//inventario no este  vacio
	std::cout << "inventario:\n";
	for (const auto& item : M_items) {
		std::cout << "_" << item.getName() << ":" << item.getQuantity() << "\n";
	}
}
	void useitem(const std::string& name, int quantity) {
		for (auto& item : M_items) {
			if (item.getName() == name) {
				item.remove(quantity);
				//si la cantidad es 0 se elimina el inventario
				if (item.getQuantity() == 0) {
					//M_items.erase(std::remove(M_items.begin(), M_items.end(), item), M_items.end());
				}
				std::cout << "usate" << quantity << "de" << name << "(s)\n";
				return;
			}
		}
		std::cout << "no tienes" << name << "en el inventario\n";
	}

};
	