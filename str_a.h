#include <string>

int vowelsCount(std::string input)
{
	int count = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y'
			|| input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' || input[i] == 'Y')
			count++;
	}
	return count;
}