#pragma once
#include"programingPa/State/StateCar.h"
#include"Header.h"
class CarSlow : public StateCar {
public:
	CarSlow() = default;
	~CarSlow() = default;
	void Accelerate() override {
		std::cout << "Car Slow Accelerate uwu\n";
	}
	void Brake() override {
		std::cout << "Car Slow Brake uwu\n";
	}
	void Turn() override {
		std::cout << "Car Slow Turn uwu\n";
	}
};