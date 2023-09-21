#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>


class CMD
{
private:
	std::string text{};
	std::string key{};
	int choice{};
	int mode{};


public:
	void sayHello();
	void showAvailableAlgo(std::map<int, std::string> algo);
	int selectAlgo();
	int selectMode();
	std::string inputText();
	std::string inputKey();
	void outputText();
};

