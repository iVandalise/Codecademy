#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input_variable = "turpentine and turtles";

  // Creating a vector to extract all vowels from input_variable
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  // Looping through each character in the input_variable
  for(int i=0; i<input_variable.size(); i++){
    // Looping through the vowels vector
    for(int j=0; j<vowels.size(); j++){
      if(input_variable[i] == vowels[j]){
        result.push_back(input_variable[i]);
      }
    }
    // Doubling the e's and u's
    if(input_variable[i] == 'e'){
      result.push_back('e');
    }else if(input_variable[i] == 'u'){
      result.push_back('u');
    }
  }

  for(int i=0; i<result.size(); i++){
    std::cout << result[i];
  }
  std::cout << "\n";

}