#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"NUMBER GUESSING GAME"<<endl;
	srand(time(0)); //To generate different numbers
   int guess;
   int attempts=0;
   int randomNumber = rand()%100 + 1; //create a random number
   cout<<"Guess a Number Between 1 to 100: ";
   
   	while(true){
   	cin>>guess;
   	attempts++;

   	if(guess==randomNumber){
   		cout<<"Congratulations!! You have guessed the right number in "<<attempts<<" attempts.";
   		break;
   	}else if(guess>randomNumber){
   		cout<<"Try a lower number: ";
   	}else{
   	    cout<<"Try a Higher number: ";
   	}
   	}

  return 0;
}