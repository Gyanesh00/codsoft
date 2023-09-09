#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    // Seed the random number generator with the current time
    srand(time(0));  
    // Generate a random number between 1 and 100
    int achievement = rand() % 100 + 1;  
    int guess;
    do 
    {
        cout<<"Enter guess between 1 to 100 ";
        cin>>guess;

        if(guess < achievement) 
        {
            cout<<"too low"<<endl;
        } 
        else if(guess > achievement) 
        {
            cout<<"too high"<<endl;
        } 
        else 
        {
            cout<<"correct number"<<endl;
        }
    }
    while(guess != achievement);
    return 0;
}





for (int i = 0; i <= arr.size() - k; i++) {
        unordered_set<int> distinctSet;
        for (int j = i; j < i + k; j++) {
            distinctSet.insert(arr[j]);
        }
        result.push_back(distinctSet.size());
    }

    return result;