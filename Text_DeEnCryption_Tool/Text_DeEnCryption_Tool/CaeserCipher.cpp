#include "CaeserCipher.h"


std::string CaeserCipher::encrypt(const std::string &text, const std::string &key) {

	int key_num = stoi(key);
	std::string final_txt = "";

	for (int i = 0; i < text.length(); i++) {
		char currentChar = text[i];

		if (islower(currentChar)) {
			currentChar = 'a' + (currentChar - 'a' + key_num) % 26;
		}
		else if (isupper(currentChar)) {
			currentChar = 'A' + (currentChar - 'A' + key_num) % 26;
		}

		final_txt += currentChar;
	}

	return final_txt;
}


std::string CaeserCipher::decrypt(const std::string &text, const std::string &key) {

	int key_num = stoi(key);
	std::string final_txt = "";

	for (int i = 0; i < text.length(); i++) {
		char currentChar = text[i];

		if (islower(currentChar)) {
			currentChar = 'a' + (currentChar - 'a' - key_num + 26) % 26;
		}
		else if (isupper(currentChar)) {
			currentChar = 'A' + (currentChar - 'A' - key_num + 26) % 26;
		}

		final_txt += currentChar;
	}

	return final_txt;
}

