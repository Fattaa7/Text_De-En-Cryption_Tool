#include "EncryptionContext.h"

EncryptionContext::~EncryptionContext()
{
	delete algorithm;
}

void EncryptionContext::setStrategy(EncryptionStrategy* new_strat)
{
	this->algorithm = new_strat;
}

std::string EncryptionContext::encrypt(const std::string& text, const std::string& key)
{
	return algorithm->encrypt(text, key);
}

std::string EncryptionContext::decrypt(const std::string& text, const std::string& key)
{
	return algorithm->decrypt(text, key);
}
