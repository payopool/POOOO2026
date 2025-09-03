#include<iostream>

class
	Character {
public:
	Character() = default;
	Character(int health) :m_heath(health) {}
	void
		rebith() {
		if (!ischaracteralive && m_heath <= 0) {
			std::cout << "spawn point\n";
			ischaracteralive = true;
		}
	}
	int getheath() const {
		return m_heath;
	}
	void setheath(int health) {
		m_heath = health;
	}
private:
	
	bool ischaracteralive = false;
protected:
	int m_heath;
};
int main() {
	Character nora(150);
	nora.getheath();
	std::cout << nora.getheath() << "\n";
	nora.setheath(-50);
	std::cout << nora.getheath() << "\n";
	if (nora.getheath() <= 0) {
		std::cout << "nora muerio\n";
		nora.rebith();
	}

	std::cout << "helo word \n"; 
	return 0;
}
