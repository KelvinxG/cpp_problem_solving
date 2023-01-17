#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int i; //loop counter
	int t; //counter
	int squat=15; //set it to 15
	int set; // user input
	
	cin>>t; //how many times 
	
	for(i=0;i<t;i++)
	{
	    cin>>set;
	    cout<<set*squat<<endl;
	}
}

