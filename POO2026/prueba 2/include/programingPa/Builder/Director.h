#pragma once
#include"programingPa/Builder/Builder.h"
class Director {
public:
	Director(Builder* b) :builder(b) {}
	~Director() = default;
	void construir() {
		if (builder) {
			builder->buildParteM();
			builder->buildParteT();
		}
	}
	private:
		Builder* builder;
};