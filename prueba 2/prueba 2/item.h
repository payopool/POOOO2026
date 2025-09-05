#pragma once
#include<iostream>
class Item {
public: 
	Item(std::string& name, int quantity): M_name(name),M_quantity(quantity){}
	~Item()=default;
	std::string
		getName() const {
		return M_name;
	}
	int 
		getQuantity()const {
		return M_quantity;
	}
	void add(int quantity) {
		M_quantity += quantity;
	}
	void remove(int quantity) {
		if (quantity <= M_quantity) {
			M_quantity -= quantity;
		}
		else {
			std::cout << "no hay suficiente" << M_name << "para remover\n";
		}
	}
private: 
	std::string M_name;
	int M_quantity;
};