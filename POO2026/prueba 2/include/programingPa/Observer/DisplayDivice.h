#pragma once
#include"Header.h"
#include"programingPa/Observer/Observer.h"

class DisplayDivice : public Observer {
public: 
	DisplayDivice() = default;
	~DisplayDivice() = default;

	void onNotify(int _value) override {
		std::cout << "Display Device: Temperature changed to " << _value << " degrees.\n";
	}


};