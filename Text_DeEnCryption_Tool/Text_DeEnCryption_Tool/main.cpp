#include <iostream>
#include "EncryptionStrategy.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"
#include "EncryptionContext.h"
#include "Controller.h"

int main() {

	//EncryptionStrategy* ptr = new CaeserCipher();
	Controller con;

	con.getData();

	con.init();


	//y = con->encrypt(x, z);


	return 0;
}