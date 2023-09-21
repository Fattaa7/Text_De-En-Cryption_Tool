#pragma once
#include <iostream>
#include <string>
#include "EncryptionStrategy.h"

class EncryptionContext
{
private:
	EncryptionStrategy *algorithm;

public:
	EncryptionContext(EncryptionStrategy* ptr) : algorithm(ptr) {};

	~EncryptionContext();

	void setStrategy(EncryptionStrategy *new_strat);

	std::string encrypt(const std::string& text, const std::string& key);
	std::string decrypt(const std::string& text, const std::string& key);
};

