#include <string>

std::string toUpperCase(std::string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
			input[i] = input[i] - 32;
	}
	return input;
}

std::string toLowerCase(std::string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] = input[i] + 32;
	}
	return input;

