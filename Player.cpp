
#include<iostream>
using namespace std;

class Player 
{
private:
    int playerID;
    string playerName;
    int playedMatches;
    int playerScore;

public:
    int id;
    string name;
    int score;
    int matches;
    
    int getPlayerID() {
        return playerID;
    }
        
    string getPlayerName() {
        return playerName;
    }
    
   
    int getPlayerScore() {
        return playerScore;
    }
    
    
    int getPlayedMatches() {
        return playedMatches;
    }
    
    
 
    Player(int id, string name, int score) {
        playerID = id;
        playerName = name;
        playerScore = score;
    }
   
    Player(int id, string name, int matches, int score) {
        playerID = id;
        playerName = name;
        playedMatches = matches;
        playerScore = score;
        
    }
    
    void displayThreeArgument()
    {      

        
        cout<<"Player ID. : "<<playerID<<endl;
        cout<<"Player Name : "<<playerName<<endl;
        cout<<"Player Score : "<<playerScore<<endl;
        return;
    }


    void displayFourArgument()
    {

        
        cout<<"Player ID. : "<<playerID<<endl;
        cout<<"Player Name : "<<playerName<<endl;
        cout<<"Played Matches : "<<playedMatches<<endl;
        cout<<"Player Score : "<<playerScore<<endl;
        return;
    }
    

    Player() {
        
    }
    ~Player() {
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    
    Player e1(1001, "John", 103);
    e1.displayThreeArgument();
    Player e2(1002, "Raj", 5000, 100);
    e2.displayFourArgument();
    
    return 0;
}
