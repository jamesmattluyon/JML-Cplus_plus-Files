#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
const int MAX = 6;
string mgcbll[MAX];
bool flag = false;
int main(int argc, char *argv[]){
    srand(time(NULL));
    string userInput;	
        mgcbll[0] = "No";
        mgcbll[1] = "Yes";
        mgcbll[2] = "Perhaps...";
        mgcbll[3] = "Most definetly yes";
        mgcbll[4] = "Almost positively not";
        mgcbll[5] = "I think so...";
        mgcbll[6] = "Chechehce";
    cout << "Welcome to the Magic 8-Ball Game!\n";
    cout << "Type a Yes or No question to play, or type 'exit' to quit\n";
    while(!flag){
        cout << "\nAsk me a question and I will tell the future!\n" ;       
        getline(cin, userInput);
        if(userInput.compare("exit") == 0)flag=true;     
        if(userInput.compare("") != 0 && userInput.compare("exit") != 0){
             cout << mgcbll[rand()%MAX] << "\n";
             userInput = "";
        }   
    } 
    cout << "Thanks for playing!\n";  
    system("PAUSE");
    return EXIT_SUCCESS;
}
