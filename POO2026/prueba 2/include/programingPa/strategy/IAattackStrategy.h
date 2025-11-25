#pragma once
#include"Header.h"
class IAattackStrategy {
public:
	virtual ~IAattackStrategy() = default;
	virtual int Execute(int baseDamage) const = 0;
};