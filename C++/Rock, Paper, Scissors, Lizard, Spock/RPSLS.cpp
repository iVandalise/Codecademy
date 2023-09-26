#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
  
  // Randomising the Computer's choice
  int computer = rand() % 5 + 1;
  int user = 0;

  // Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock
  std::cout << "====================================\n";
  std::cout << "Rock, Paper, Scissors, Lizard, Spock\n";
  std::cout << "====================================\n\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cout << "Make Your Selection: ";
  std::cin >> user;

  /* The following is the logic used to determine the winner

    User: Rock / Computer: Rock = Draw
    User: Rock / Computer: Paper = Loss
    User: Rock / Computer: Scissors = Win
    User: Rock / Computer: Lizard = Win
    User: Rock / Computer: Spock = Loss

    User: Paper / Computer: Rock = Win
    User: Paper / Computer: Paper = Draw
    User: Paper / Computer: Scissors = Loss
    User: Paper / Computer: Lizard = Loss
    User: Paper / Computer: Spock = Win

    User: Scissors / Computer: Rock = Loss
    User: Scissors / Computer: Paper = Win
    User: SCissors / Computer: Scissors = Draw
    User: Scissors / Computer: Lizard = Win
    User: Scissors / Computer: Spock = Loss

    User: Lizard / Computer: Rock = Loss
    User: Lizard / Computer: Paper = Win
    User: Lizard / Computer: Scissors = Loss
    User: Lizard / Computer: Lizard = Draw
    User: Lizard / Computer: Spock = Win

    User: Spock / Computer: Rock = Win
    User: Spock / Computer: Paper = Loss
    User: Spock / Computer: Scissors = Win
    User: Spock / Computer: Lizard = Loss
    User: Spock / Computer: Spock = Draw
  
  */
  if(user==1 && computer==1){
    std::cout << "Computer threw Rock, it's a draw\n";
  }else if(user==1 && computer ==2){
    std::cout << "Computer threw Paper, you lose\n";
  }else if(user==1 && computer==3){
    std::cout << "Computer threw Scissors, you win\n";
  }else if(user==1 && computer==4){
    std::cout << "Computer threw Lizard, you win\n";
  }else if(user==1 && computer==5){
    std::cout << "Computer threw Spock, you lose\n";
  }else if(user==2 && computer==1){
    std::cout << "Computer threw Rock, you win\n";
  }else if(user==2 && computer==2){
    std::cout << "Computer threw Paper, it's a draw\n";
  }else if(user==2 && computer==3){
    std::cout << "Computer threw Scissors, you lose\n";
  }else if(user==2 && computer==4){
    std::cout << "Computer threw Lizard, you lose\n";
  }else if(user==2 && computer==5){
    std::cout << "Computer threw Spock, you win\n";
  }else if(user==3 && computer==1){
    std::cout << "Computer threw Rock, you lose\n";
  }else if(user==3 && computer==2){
    std::cout << "Computer threw Paper, you win\n";
  }else if(user==3 && computer==3){
    std::cout << "Computer threw Scissors, it's a draw\n";
  }else if(user==3 && computer==4){
    std::cout << "Computer threw Lizard, you win\n";
  }else if(user==3 && computer==5){
    std::cout << "Computer threw Spock, you lose\n";
  }else if(user==4 && computer==1){
    std::cout << "Computer threw Rock, you lose\n";
  }else if(user==4 && computer==2){
    std::cout << "Computer threw Paper, you win\n";
  }else if(user==4 && computer==3){
    std::cout << "Computer threw Scissors, you lose\n";
  }else if(user==4 && computer==4){
    std::cout << "Computer threw Lizard, it's a draw\n";
  }else if(user==4 && computer==5){
    std::cout << "Computer threw Spock, you win\n";
  }else if(user==5 && computer==1){
    std::cout << "Computer threw Rock, you win\n";
  }else if(user==5 && computer==2){
    std::cout << "Computer threw Paper, you lose\n";
  }else if(user==5 && computer==3){
    std::cout << "Computer threw Scissors, you win\n";
  }else if(user==5 && computer==4){
    std::cout << "Computer threw Lizard, you lose\n";
  }else if(user==5 && computer==5){
    std::cout << "Computer threw Spock, it's a draw\n";
  }else{
    std::cout << "Invalid Input\n";
  }

}