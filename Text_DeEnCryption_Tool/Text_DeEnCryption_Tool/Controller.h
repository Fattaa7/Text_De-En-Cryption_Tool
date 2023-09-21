#pragma once
#include "EncryptionContext.h"
#include "CaeserCipher.h"
#include "VigenereCipher.h"
#include <vector>
#include <map>

class Controller
{
private:

	std::string text{};
	std::string key{};
	std::map<int, std::string> algo_list = {
		{1, "CaeserCipher"},
		{2, "VigenereCipher"}
	};



public:
	Controller() ;
	void init(int selection, std::string txt, std::string key);
};

