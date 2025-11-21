#pragma once
#pragma once
#include"programingPa/State/playerstate.h"
#include"Header.h"

class BerserkState : public PlayerState {
public:
	BerserkState() = default;
	~BerserkState() = default;

	void Attack() override {
		std::cout << "player Berserk attack uwu\n";
	}

	void Defend() override {
		std::cout << "player Berserk defend uwu\n";
	}
	void Move() override {
		std::cout << "player move Berserk uwu\n";
	}
};