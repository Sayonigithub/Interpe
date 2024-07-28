#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    int score;
    cout<<"ENTER YOUR NAME : ";
    getline(cin,name);
    cout<<endl;
    do
    {
        srand(0);
        int variable = rand()%5+1;
        cout<<"Enter any number in between range 1 to 5    ";
        cin>>inputuser;
        cout<<endl;
        if(inputuser == variable)
        {
            cout<<"Congratulation!! You guess the CORRECT NUMBER"<<endl;
            score++;
        }
        else
        {
            cout<<"Sorry!! You guessed WRONG NUMBER.. try again"<<endl;
        }
        cout<<"Would you like to try again Y/N"<<endl;
        cin>>input;
        cout<<endl;
    }
    while(input != 'N');
    cout<<"Your score is  "<<score<<endl;
    cout<<"GAME END"<<endl;
}