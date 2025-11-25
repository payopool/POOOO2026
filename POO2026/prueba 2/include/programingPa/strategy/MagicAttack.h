#pragma once
#include"Header.h"
#include"IAattackStrategy.h"
class MagicAttack : public IAattackStrategy {
public:
	MagicAttack() = default;
	~MagicAttack() = default;
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1.2);
	}
};
