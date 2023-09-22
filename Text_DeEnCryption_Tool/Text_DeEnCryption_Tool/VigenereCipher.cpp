#include "VigenereCipher.h"

std::string VigenereCipher::generateKey(const std::string& text, const std::string& key)
{
    std::string gen_key = text;
    int key_len = key.size();
    int text_len = text.size();

    for (int i = 0, j = 0; i < text_len; i++) {

        if (isalpha(text[i])) {
            gen_key[i] = key[j % key_len];
            j++;
        }
    }

    return gen_key;
}

std::string VigenereCipher::encrypt(const std::string &text, const std::string &key)
{
    vig_key = generateKey(text, key);
    int text_len = text.size();
    int shift{};
    std::string encrypted_text = text; // Initialize encrypted_text with the same content as text

    for (int i = 0; i < text_len; i++) {
        char currentChar = text[i];

        if (isalpha(currentChar)) {
            // Calculate the shift value based on the Vigenere key
            if (isupper(vig_key[i]))
            {
                shift = vig_key[i] - 'A'; // Assuming key contains uppercase letters
            }
            else if (islower(vig_key[i]))
            {
                shift = vig_key[i] - 'a'; // Assuming key contains uppercase letters
            }
            if (islower(currentChar)) {
                currentChar = 'a' + (currentChar - 'a' + shift) % 26;
            }
            else if (isupper(currentChar)) {
                currentChar = 'A' + (currentChar - 'A' + shift) % 26;
            }
        }

        encrypted_text[i] = currentChar; // Update the character in encrypted_text
    }

    return encrypted_text;
}

std::string VigenereCipher::decrypt(const std::string &text, const std::string &key)
{
    return "hello";
}
