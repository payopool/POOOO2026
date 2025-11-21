#pragma once
#include"programingPa/State/StateCar.h"
#include"Header.h"
class CarFater : public StateCar {
	public:
	CarFater() = default;
	~CarFater() = default;
	void Accelerate() override {
		std::cout << "Car Faster Accelerate uwu\n";
	}
	void Brake() override {
		std::cout << "Car Faster Brake uwu\n";
	}
	void Turn() override {
		std::cout << "Car Faster Turn uwu\n";
	}
};
