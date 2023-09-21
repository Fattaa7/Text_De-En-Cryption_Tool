#include "CaeserCipher.h"


std::string CaeserCipher::encrypt(const std::string &text, const std::string &key) {

	int key_num = stoi(key);
	std::string final_txt = text;

	for (int i{}; i < text.length(); i++) {
		final_txt[i] = text[i];

		if (final_txt[i] >= 'a' && final_txt[i] <= 'z') {
			final_txt[i] += key_num;

			if (final_txt[i] > 'z')
			{
				final_txt[i] = final_txt[i] - 'z' + 'a' - 1;
			}
		}

		

		if (final_txt[i] >= 'A' && final_txt[i] <= 'Z') {
	

			final_txt[i] += key_num;
		if (final_txt[i] > 'Z')
			{
				final_txt[i] = final_txt[i] - 'Z' + 'A' - 1;
			}
		}



	};

	return final_txt;
}

std::string CaeserCipher::decrypt(const std::string &text, const std::string &key) {

	return "hello";
}