#include "Password.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}


/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(string str){
  
  /* A - Passed all tests*/
  bool has_lower = false;
  bool has_upper = false;
  for (char ch : str)
  {
    if (std::islower(ch))
    {
      has_lower = true;
    }
    else if (std::isupper(ch))
    {
      has_upper = true;
    }
  }
  return has_lower && has_upper;
  

  /* B - passed all tests
  int count_lower = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      count_lower++;
    }
  }
  return count_lower > 0 && count_lower < str.length();
  */

  /* C - passed all tests
  bool lower = false;
  bool upper = false;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      lower = true;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      upper = true;
    }
  }
  return upper && lower;
  */

  /* D - passed all tests
  bool is_lower = false;
  bool is_upper = false;
  for (char c : str)
  {
    if (std::islower(c))
    {
      is_lower = true;
    }
    else
    {
      is_upper = true;
    }
  }
  return is_lower && is_upper;
  */

  /* E - failed is_mixed test!
  bool found = false;
  for(char c : str){
    if( !found && c >= 'A' && c <= 'Z' ){
      found = true;
    }
    else if( found && c >= 'a' && c <= 'z'){
      return true;
    }
  }
  return false;
  */
  
  //return false;
}

unsigned int Password::unique_characters(string str) {
  vector<char> unique_chars;

  if (str.length() == 0) {
    return 0;
  }
  else {
    unique_chars.push_back(str[0]);
  }

  for (int i = 1; i < str.length(); i++) {
    
    bool not_unique = false;
    
    for (int j = 0; j < unique_chars.size(); j++) {
      if (str[i] == unique_chars[j]) {
        not_unique = true;
        break;
      }
    }
    
    if (!not_unique) {
      unique_chars.push_back(str[i]);
    }
  }

  return unique_chars.size();
}
