#pragma once
#include"Header.h"
#include"programingPa/Builder/Producto.h"
#include"programingPa/Builder/Builder.h"
class BuilderConcret : public Builder {
public:
	BuilderConcret();
	~BuilderConcret()=default;
	void buildParteM() override;
	void buildParteT() override;
	Producto* getProducto() override;
private:
	Producto* producto;
};


