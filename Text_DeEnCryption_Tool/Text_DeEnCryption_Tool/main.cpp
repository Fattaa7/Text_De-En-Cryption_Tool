#include <iostream>
#include "EncryptionStrategy.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"
#include "EncryptionContext.h"
#include "Controller.h"

int main() {

	//EncryptionStrategy* ptr = new CaeserCipher();
	Controller con;




	std::string x = "abcd";
	std::string z = "1";
	std::string y{};

	con.init(2, x, z);


	//y = con->encrypt(x, z);


	return 0;
}