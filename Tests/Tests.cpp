#include <iostream>
#include <fstream>
#include <locale>
#include <stdlib.h>
#include <ctime>
#include "ReadWrite.h"
#include "gtest/gtest.h"

TEST(Test, ReadWrite)
{
	int NUMBER_OF_ELEMENTS = 5;
	std::vector<uint8_t> data = {5, 7, 9, 0, 4};
	std::string file_name = "myfile";
	std::vector<uint8_t> Line(NUMBER_OF_ELEMENTS);

	WriteFile(file_name, data);
	Line = ReadFile(file_name);/*
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
		std::cout << (int)Line[i] << ' ';
	std::cout << std::endl;*/

	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
		ASSERT_EQ(data[i], Line[i]) << "Ошибка";
}	

int main(int argc, char **argv)
{	
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
