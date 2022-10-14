#include "list.h"


using namespace std;

Lista::Lista()
{
}


void Lista::AddInicio(std::string carta, std::string numero)
{
	cartas* nuevo = new cartas();
	nuevo->numero = numero;
	nuevo->color = carta;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else if (header != nullptr) {
		nuevo->next = header;
		header = nuevo;
	}
}



void Lista::AddFinal(std::string carta, std::string numero)
{
	cartas* nuevo = new cartas();
	nuevo->numero = numero;
	nuevo->color = carta;

	if (header == nullptr) {
		nuevo->next = nullptr;
		header = nuevo;
	}
	else {
		cartas* temp = header;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = nuevo;
	}
}

void Lista::Clear()
{
	header = new cartas();
}

int Lista::Count()
{
	cartas* temp = header;
	int n = 0;
	while (temp) {
		n++;
		cartas* x = temp->next;
		temp = x;
	}
	return n;
}

cartas* Lista::getIndex(int number) {
	cartas* temp = header;
	for (size_t i = 0; i < number; i++)
	{
		temp = temp->next;
	}

	if (temp != nullptr) {
		return temp;

	}
	else {
		cartas* temp2 = new cartas();
		temp2->numero = "";
		temp2->color = "";
		return temp2;
	}
}
cartas* Lista::getFirstItem() {
	cartas* temp = header;
	cartas* temp1 = header->next;
	header = temp1;
	return temp;
}
