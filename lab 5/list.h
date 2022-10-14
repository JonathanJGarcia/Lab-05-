#pragma once
#include<string>
#include "cartas.h"

class Lista
{

public:

	cartas* header = nullptr;

public:

	Lista();

	void AddInicio(std::string carta, std::string numero);

	void AddFinal(std::string carta, std::string numero);

	void Clear();

	int Count();


	cartas* getIndex(int number);
	cartas* getFirstItem();

	



};