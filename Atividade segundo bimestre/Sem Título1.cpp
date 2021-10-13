#include <iostream>

float somaDoisNumeros (float n1, float n2){
	
	return n1 + n2;
}


int main () {
	float soma = somaDoisNumeros(2.7, 3.1415);
	std::cout << soma;
	return 0;
}