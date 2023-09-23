#include <iostream>
#include "EncryptionStrategy.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"
#include "EncryptionContext.h"
#include "Controller.h"

int main() {

	Controller con;

	while (1) {
		con.getData();

		con.init();
	}



	return 0;
}