#pragma once

#include <string>
#include <vector>

std::vector<uint8_t> ReadFile(std::string file_name);
void WriteFile(std::string file_name, std::vector<uint8_t> data);
