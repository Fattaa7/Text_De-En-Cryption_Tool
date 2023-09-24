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
	ui.sayHello();


}

int Controller::init()
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


	if (output == "")
	{
		std::cout << "YOU ENETERED SOMETHING WRONG!" << std::endl << std::endl;

		return -1;
	}

	

	std::cout << output << std::endl << std::endl;

	return 1;
}

void Controller::getData()
{
	ui.showAvailableAlgo(algo_list);
	selection = ui.selectAlgo();
	text = ui.inputText();
	key = ui.inputKey();
	mode = ui.selectMode();
}


