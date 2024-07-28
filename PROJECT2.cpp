#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout<<"Stone Paper Scissor Game"<<endl;
    cout<<"1.ROCK"<<endl;
    cout<<"2.PAPER"<<endl;
    cout<<"3.SCISSOR"<<endl;
    cin>>user;
    if(user==1){
        cout<<"You choose Rock"<<endl;
    }
    else if(user==2){
        cout<<"You choose Paper"<<endl;
    }
    else{
        cout<<"You choose Scissor"<<endl;
    }
    computer=rand()%3+1;
    if(computer==1){
        cout<<"Computer chooses Rock"<<endl;
    }
    else if(computer==2){
        cout<<"Computer chooses Paper"<<endl;
    }
    else{
        cout<<"Computer chooses Scissor"<<endl;
    }
    //match
    if(user==computer){
        cout<<"Match Tie"<<endl;
    }
    //user --> Rock
    else if(user==1){
        if(computer==2){
            cout<<"You lose!"<<endl;
        }
        if(computer==3){
            cout<<"You Win!"<<endl;
        }
    }
    // user --> PAPER
    else if(user==2){
        if(computer==1){
            cout<<"You Win!"<<endl;
        }
        if(computer==3){
            cout<<"You Lose!"<<endl;
        }
    }
    // user --> SCISSOR
    else if(user==3){
        if(computer==1){
            cout<<"You lose!"<<endl;
        }
        if(computer==2){
            cout<<"You Win!"<<endl;
        }
    }
    return 0;
}
