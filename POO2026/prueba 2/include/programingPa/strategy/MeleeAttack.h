#pragma once
#include"Header.h"
#include"IAattackStrategy.h"
class MeleeAttack : public IAattackStrategy {
public:
	MeleeAttack() = default;
	~MeleeAttack() = default;
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1);
	}
};
