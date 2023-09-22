#pragma once
#include "EncryptionStrategy.h"
class VigenereCipher :
    public EncryptionStrategy
{
private:
    // std::string text;
    std::string vig_key{};

    std::string generateKey(const std::string& text, const std::string& key);
public:
 
    std::string encrypt(const std::string &text, const std::string &key) override;
    std::string decrypt(const std::string &text, const std::string &key) override;


};

