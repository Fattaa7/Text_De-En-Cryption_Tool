#pragma once
#include "EncryptionStrategy.h"
class VigenereCipher :
    public EncryptionStrategy
{
    // std::string text;
    // std::string key;
    std::string encrypt(const std::string text, const std::string key) override;
    std::string decrypt(const std::string text, const std::string key) override;


};

