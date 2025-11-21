#pragma once
#include"programingPa/State/playerstate.h"
#include"programingPa/State/Normalstate.h"
class Player {
public:
	Player() {
		state = new Normalsate();
	}
	~Player() = default;
	void setState(PlayerState* newState) {
		if (state) {
			delete state;
		}
		state = newState;
	}
	void Attack() {
		state->Attack();
	}
	void Defend() {
		state->Defend();
	}
	void Move() {
		state->Move();
	}
private:

	PlayerState* state;
};