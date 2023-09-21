#pragma once
#include <iostream>

class EncryptionStrategy
{
public:
	virtual std::string encrypt(const std::string text, const std::string key) = 0;
	virtual std::string decrypt(const std::string text, const std::string key) = 0;
	virtual ~EncryptionStrategy() {}; // virtual destructor

};

