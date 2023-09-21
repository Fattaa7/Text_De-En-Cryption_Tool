#include <iostream>
#include "EncryptionStrategy.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"
#include "EncryptionContext.h"
int main() {

	//EncryptionStrategy* ptr = new CaeserCipher();
	EncryptionContext* con = new EncryptionContext(new CaeserCipher);

	std::string x = "abcd";
	std::string z = "1";

	std::string y{};

	y = con->encrypt(x, z);

	std::cout << y << std::endl;

	return 0;
}