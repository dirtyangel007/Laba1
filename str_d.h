#include <string>
#include <algorithm>
#include <cctype>
bool isPalindrome(std::string input)
{
 transform(input.begin(), input.end(), input.begin(), ::tolower);
 bool result = true;
 int st = 0;
 int en = input.length() -1;
 while(st != en)
 {
  if(input[st] == ' ')
   st++;
  if(input[en] == ' ')
   en--;
  if(st > en)
   break;
  if(input[st] != input[en])
  {
   result = false;
   break;
  }
  st++;
  en--;
 }
 return result;
}
