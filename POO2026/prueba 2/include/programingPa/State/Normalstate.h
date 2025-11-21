#pragma once
#include"programingPa/State/playerstate.h"
#include"Header.h"
class Normalsate : public PlayerState {
public:
	Normalsate() =default ;
	~Normalsate() = default;
	void Attack() override {
		std::cout << "player attack normal uwu\n";
	 }

	void Defend() override {
		std::cout << "player defend normal uwu\n";
	}
	void Move() override {
		std::cout << "player move normal uwu\n";
	}
};