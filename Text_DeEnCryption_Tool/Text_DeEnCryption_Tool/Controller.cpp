#include "Controller.h"

Controller::Controller()
{



}

void Controller::init(int selection,std::string txt, std::string key)
{
	EncryptionStrategy* ptr{ nullptr };
	std::string output{};
	this->text = txt;
	this->key = key;

	switch (selection)
	{
	case 1:
		ptr = new CaeserCipher();
		break;
	case 2:
		ptr = new VigenereCipher();
		break;
	default:
		break;
	}

	EncryptionContext* con = new EncryptionContext(ptr);

	output = con->encrypt(text, this->key);


	delete con;

	std::cout << output << std::endl;
}


