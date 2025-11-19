#pragma once
#include"Flayweith.h"
#include"ConcretFlayweith.h"
#include"Header.h"
class FactoryFlayweith {
public:
	FactoryFlayweith() = default;
	~FactoryFlayweith() = default;


	Flyweight* getFlyweight(char key) {
		if (flyweights.find(key) == flyweights.end()) {
			flyweights[key] = new ConcretFlayweith(key);
			
		}
		
		return flyweights[key];
	
	}
private:
	std::unordered_map<char, Flyweight*> flyweights;
};

