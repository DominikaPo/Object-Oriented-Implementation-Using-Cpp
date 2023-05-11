
#include<iostream>
using namespace std;

class Player //DO NOT change the class name
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
    
    
    //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
    Player(int id, string name, int score) {
        playerID = id;
        playerName = name;
        playerScore = score;
    }
    //Implement a parameterized constructor for 4 arguments - playerID, playerName,playedMatches and playerScore.
    Player(int id, string name, int matches, int score) {
        playerID = id;
        playerName = name;
        playedMatches = matches;
        playerScore = score;
        
    }
    
    void displayThreeArgument()
    {      
         //Implement your code here
        
        cout<<"Player ID. : "<<playerID<<endl;
        cout<<"Player Name : "<<playerName<<endl;
        cout<<"Player Score : "<<playerScore<<endl;
        return;
    }


    void displayFourArgument()
    {
       //Implement your code here
        
        cout<<"Player ID. : "<<playerID<<endl;
        cout<<"Player Name : "<<playerName<<endl;
        cout<<"Played Matches : "<<playedMatches<<endl;
        cout<<"Player Score : "<<playerScore<<endl;
        return;
    }
    
    //Implement Destructor here
    Player() {
        
    }
    ~Player() {
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    //Implement your code here
    
    Player e1(1001, "John", 103);
    e1.displayThreeArgument();
    Player e2(1002, "Raj", 5000, 100);
    e2.displayFourArgument();
    
    return 0;
}