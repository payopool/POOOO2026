#pragma once
#include"programingPa/State/playerstate.h"
#include"Header.h"

class damageState : public PlayerState {
public:
	damageState() = default;
	~damageState() = default;

	void Attack() override {
		std::cout << "player damage attack uwu\n";
	}

	void Defend() override {
		std::cout << "player damage defend uwu\n";
	}
	void Move() override {
		std::cout << "player move damage uwu\n";
	}
};