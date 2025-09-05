#include<iostream>
#include<string>
class
	OBJ{
public:
	void agree(const std::string name, int cant) {
		if (tol <= 10) {
			items[tol].name = name;
			items[tol].can = cant;
			tol++;
		}
	}
	void most() const {
		for (int i = 0; i < tol; i++) {
			std::cout << "item" << i << ":" << items[i].name << "//" << items[i].can << "//\n";
		}
	}
	
private:
	struct Item {
		std::string name;
		int can;
	};

	Item items[10];  
	int tol = 0;   
};

	

int main() {
	OBJ cos;
	cos.agree("sword", 8);
	cos.agree("pocion", 2);
	cos.most();
	return 0;

}
