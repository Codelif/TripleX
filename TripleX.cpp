#include <iostream> //Preprocessor Directive

void PrintIntroduction()
{
    //Expression Statements
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame()
{
    PrintIntroduction();

    //Declaration Statements
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Expression Statements;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The code multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "You Win!";
    }else{
        std::cout << "You Lose!";
    }
}

int main() //Main Function
{
    PlayGame();
    return 0; // Return Statement
}