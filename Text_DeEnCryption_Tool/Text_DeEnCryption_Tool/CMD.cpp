#include "CMD.h"

void CMD::sayHello()
{
	std::cout << "*==== Welcome to The Encryption/Decryption Tool ====*" << std::endl \
		<< "This works by inputing a text and then choosing from available Algorithms,\
 and then choosing a key." << std::endl << std::endl ;

}

void CMD::showAvailableAlgo(std::map<int, std::string> algo)
{
	std::cout << "These are the available Algorithms,\
 please pick the number opposite to the algorithm you want to pick:" << std::endl << std::endl;

	for (auto const & i : algo)
	{
		std::cout << i.first
			<< " : "
			<< i.second
			<< std::endl;
			
	}

	std::cout << std::endl;
}

int CMD::selectAlgo()
{
	std::cout << "Please pick from the previous Algorithms:"
		<< std::endl;

	std::cin >> choice;

	return choice;
}

std::string CMD::inputText()
{
	std::cout << "Please enter your text:"
		<< std::endl;

	std::cin.ignore();
	std::getline(std::cin, text);


	return text;
}

std::string CMD::inputKey()
{
	std::cout << "Please enter your key:"
		<< std::endl;

	//std::cin.ignore();
	std::getline(std::cin, key);


	return key;
}

int CMD::selectMode()
{
	std::cout << "Please enter the Mode, (1) for Encryption, and (2) for Decryption:"
		<< std::endl;
	std::cin >> mode;

	return mode;
}

void CMD::outputText()
{
}
