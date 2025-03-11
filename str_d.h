#include <string>

bool isPalindrome(std::string input)
{
	bool result = true;
	for (int i = 0; i < input.length() / 2; i++)
	{
		if (input[i] != input[input.length() - 1 - i])
		{
			result = false;
			break;
		}
	}
	return result;
}
