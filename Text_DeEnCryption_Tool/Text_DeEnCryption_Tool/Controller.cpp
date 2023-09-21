#include "Controller.h"

EncryptionStrategy* Controller::algoSelector()
{
	EncryptionStrategy* ptr{ nullptr };

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

	return ptr;
}

Controller::Controller()
{


}

void Controller::init()
{
	
	EncryptionContext* con;
	EncryptionStrategy* ptr{ nullptr };
	std::string output{};

	
	ptr = algoSelector();

	 con = new EncryptionContext(ptr);

	switch (mode)
	{
	case 1:
		output = con->encrypt(text, key);
		break;
	case 2:
		output = con->decrypt(text, key);
		break;
	default:
		break;
	}



	delete con;

	std::cout << output << std::endl;

	
}

void Controller::getData()
{
	ui.sayHello();
	ui.showAvailableAlgo(algo_list);
	selection = ui.selectAlgo();
	text = ui.inputText();
	key = ui.inputKey();
	mode = ui.selectMode();
}


