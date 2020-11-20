#include "ReadWrite.h"
#include <fstream>
#include <locale>
#include <iostream>
#include <vector>
#include <stdlib.h>

std::vector<uint8_t> ReadFile(std::string file_name)
{
	std::vector<uint8_t> line;
	std::ifstream myfile(file_name,  ios::binary));
	
	char temp;
	int i = 0;
	while (myfile.read(&temp, sizeof(uint8_t)))
		line.push_back(temp);
	
	myfile.close();
	return line;
}

void WriteFile(std::string file_name, std::vector<uint8_t> data)
{
	std::ofstream myfile;
	myfile.open(file_name,  ios::binary));
	for (int i = 0; i < data.size(); i++)
	{
		myfile << data[i];
	}
	myfile.close();
}

