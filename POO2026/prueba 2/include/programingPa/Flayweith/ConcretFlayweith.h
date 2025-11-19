#pragma once
#include"Flayweith.h"
#include"Header.h"
class ConcretFlayweith : public Flyweight {
public:
	ConcretFlayweith(char s) :symbol(s) {}

	~ConcretFlayweith()= default;
	void draw(int x, int y) override {
		std::cout << "Drawing symbol: " << symbol << " at (" << x << ", " << y << ")\n";
	}
private:
	char symbol;
};