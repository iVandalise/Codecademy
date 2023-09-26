#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8-BALL\n";

  // Setting RNG seed and obtaining random number
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer << "\n";

  if(answer==0){
    std::cout << "It is certain\n";
  }else if(answer==1){
    std::cout << "Confidently yes\n";
  }else if(answer==2){
    std::cout << "Very Positive\n";
  }else if(answer==3){
    std::cout << "Quite possibly\n";
  }else if(answer==4){
    std::cout << "I'd say so\n";
  }else if(answer==5){
    std::cout << "It's 50/50\n";
  }else if(answer==6){
    std::cout << "Slightly negative\n";
  }else if(answer==7){
    std::cout << "Don't hold your breath\n";
  }else if(answer==8){
    std::cout << "I'd be surprised\n";
  }else if(answer==9){
    std::cout << "Not so sure\n";
  }else{
    std::cout << "Very doubtful\n";
  }
 
}