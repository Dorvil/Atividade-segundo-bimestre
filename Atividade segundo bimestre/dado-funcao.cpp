#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dado(){
	
	cout << rand()%7;
	
}

int main(){
	
	unsigned seed = time (0);
	srand (seed);
	
	
	return dado();
}