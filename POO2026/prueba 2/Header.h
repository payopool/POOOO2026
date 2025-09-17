#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
struct Fecha {
	int dia;
	int mes;
	int year;

	void getFecha() {
		time_t t = time(0);
		tm* now = localtime(&t);

		dia = now->tm_mday;
		mes = now->tm_mon + 1;
		year = now->tm_year + 1900;

		std::cout << "fecha: " << toString() << "\n";
	}

	std::string toString() const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(year);
	}
};