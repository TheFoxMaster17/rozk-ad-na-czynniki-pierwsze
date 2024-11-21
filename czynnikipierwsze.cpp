#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int number;
	int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	cout << "podaj liczbe: ";
	cin >> number;
	cout << endl;
	cout << "liczba " << number << " podzielona na liczby pierwsze: ";
	for(int i = 0; number > 0; i++) {
		while(number % primes[i] == 0) {
			number = number / primes[i];
			cout << primes[i] << " ";
		}
	}
}