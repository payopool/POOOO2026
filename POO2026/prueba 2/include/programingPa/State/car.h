#pragma once
#include"programingPa/State/StateCar.h"
#include"programingPa/State/CarFater.h"
#include"Header.h"
class Car  {
	public:
	Car() {
		state = new CarFater();
	}
	~Car() = default;
	void setState(StateCar* newState) {
		if (state) {
			delete state;
		}
		state = newState;
	}
	void Accelerate() {
		state->Accelerate();
	}
	void Brake() {
		state->Brake();
	}
	void Turn() {
		state->Turn();
	}
private:
	StateCar* state;


};
