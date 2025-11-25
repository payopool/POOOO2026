#pragma once
#include"Header.h"
#include"programingPa/strategy/IAattackStrategy.h"
class Player {
public: 
	Player() = default;
	~Player() = default;


	void SetAttackStrategy(std::unique_ptr<IAattackStrategy> newstrategy) {
		if(!newstrategy) {
			throw std::invalid_argument("Strategy pointer cannot be null");
		}
		_Strategy = std::move(newstrategy);
	}
	int Attack(int baseDamage) const {
		if(!_Strategy) {
			throw std::runtime_error("Attack strategy not set");
		}
		return _Strategy->Execute(baseDamage);
	}


private:
	std::unique_ptr<IAattackStrategy> _Strategy;
};