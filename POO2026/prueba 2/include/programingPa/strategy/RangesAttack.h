#pragma once
#include"Header.h"
#include"IAattackStrategy.h"
class RangesAttack : public IAattackStrategy {
public:
	RangesAttack() = default;
	~RangesAttack() = default;
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 0.9);
	}
};