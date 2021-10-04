#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
// this program will 
int main()
{
    std::string playerOneName, playerTwoName, playerOneRollType, playerTwoRollType, winner = "";
    int playerOneRoll, playerTwoRoll;
    // seed number generator
    srand(time(0));
    // roll for players
    playerOneRoll = rand() % 20 + 1;
    playerTwoRoll = rand() % 20 + 1;
    // get user input names
    std::cout << "Player One, Please enter your name: ";
    std::cin >> playerOneName;
    std::cout << "\nPlayer Two, Please enter your name: ";
    std::cin >> playerTwoName;
    // roll types for player 1 & 2
    if (playerOneRoll == 1)
        playerOneRollType = "Critical Failure";
    if (playerTwoRoll == 1)
        playerTwoRollType = "Critical Failure";
    if (playerOneRoll == 20)
        playerOneRollType = "Critical Success";
    if (playerTwoRoll == 20)
        playerTwoRollType = "Critical Success";
    //adding color for players
     playerOneColor = (playerOneRollType == "Critical Failure") ? 4 : (playerOneRollType == "Critical Success") ? 2 : 7;
     playerTwoColor = (playerTwoRollType == "Critical Failure") ? 4 : (playerTwoRollType == "Critical Success") ? 2 : 7;
    // checks for the winner 
    winner = (playerOneRoll == playerTwoRoll)
                 ? "Wow, you two are evenly matched"
             : (playerOneRoll > playerTwoRoll)
                 ? playerOneName
                 : playerTwoName;
    // output details of rolls
    SetConsoleTextAttribute (screen, playerOneColor); //set color for player one 
    std::cout << "Player One: " << playerOneName << ", rolled a " << playerOneRoll << " " << playerOneRollType << "\n";
    SetConsoleTextAttribute (screen, playerTwoColor); // set color for player two
    std::cout << "Player Two: " << playerTwoName << ", rolled a " << playerTwoRoll << " " << playerTwoRollType << "\n";
    SetConsoleTextAttribute (screen, 7);
    std::cout << "\n";
    std::cout << "The Winner Is: " << winner << "\nCongratz Dude!";
    std::cout << "\n";
}