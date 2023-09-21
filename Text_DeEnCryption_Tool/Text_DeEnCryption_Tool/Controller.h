#pragma once
#include <vector>
#include <map>
#include "CMD.h"
#include "EncryptionContext.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"


class Controller
{
private:

	int selection{};
	int mode{};
	std::string text{};
	std::string key{};
	std::map<int, std::string> algo_list = {
		{1, "Caeser Cipher"},
		{2, "Vigenere Cipher"}
	};
	CMD ui;
	EncryptionStrategy* algoSelector();



public:
	Controller() ;
	void init();
	void getData();
};

