#include <iostream>
#include "EncryptionStrategy.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"

int main() {

	EncryptionStrategy* ptr = new CaeserCipher();

	std::string x = "hi";
	std::string y{};

	y = ptr->encrypt(x, x);

	std::cout << y;
	return 0;
}