#include <iostream> //Preprocessor Directive

void PrintIntroduction(int Difficulty)
{
    //Expression Statements
    std::cout << "You are a secret agent breaking into a level " << Difficulty << " secure server room";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

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
        std::cout << "You Win!\n\n";
        return true;
    }else{
        std::cout << "You Lose!\n\n";
        return false;
    }
}

int main() //Main Function
{
    int bLevelDifficulty = 1;
    while(true)
    {
        bool bLevelComplete = PlayGame(bLevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards any buffer

        if (bLevelComplete)
        {
            ++bLevelDifficulty;
        }
        
    }
    return 0; // Return Statement
}