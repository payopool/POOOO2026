#pragma once
#include"Header.h"
#include"programingPa/Observer/Observer.h"
class TemperatureServer {
	public:
	TemperatureServer() = default;
	~TemperatureServer() = default;

	void addObserver(Observer* observer) {
		observers.push_back(observer);
	}
	
	void setTemperature(int _value) {
		temperature = _value;
		notify();
	}
	void notify() {
		for (auto observer : observers) {
			observer->onNotify(temperature);
		}
	}
private:
	std::vector<Observer*> observers;
	int temperature;
};