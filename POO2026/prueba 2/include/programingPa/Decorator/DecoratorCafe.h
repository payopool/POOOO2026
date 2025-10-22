#pragma once
#include"Header.h"
#include"programingPa/Decorator/Cafe.h"
class DecoratorCafe : public Cafe {
	public:
	DecoratorCafe(Cafe* cafe) : cafe_(cafe) {}
	~DecoratorCafe() = default;
	void prepararCafe() override {
		cafe_->prepararCafe();
	}
private:
	Cafe* cafe_;
};