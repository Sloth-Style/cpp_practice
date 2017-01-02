#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


vector<char> conv(const string &s)
{
  return vector<char>(s.begin(),s.end());
}

int main()
{
  // create a string to read in a word
  string word;
  // create 2 bools, found_vowel is for a while loop to see if it has reached a vowel
  // first letter is true if the algorithm is still checking the first letter of the vector
  bool found_vowel=false, first_letter = true;
  int count = 0; //count for while loop
  vector<char> pig; // char vector that holds the string to be manipulated


  cout << "Please enter a word." << endl; //get word from user
  cin >> word;


  pig= conv(word); // convert string to vector char
  while(found_vowel==false) // run entil the final step is processed (found vowel = true)
  {
    if(pig[0] == 'a' || pig[0] == 'e' || pig[0] == 'i' || pig[0] == 'o' || pig[0] == 'u' )    // if it is a vowel
    {
      if(first_letter == true) //put way at end of string if the first letter is a vowel
      {
         pig.push_back('w');
         pig.push_back('a');
         pig.push_back('y');
      }
      else    // otherwise put ay at the end
      {
        pig.push_back('a');
        pig.push_back('y');
      }
      found_vowel = true; // set found_vowel to true
    }
    else // no vowels have been found
    {
      pig.push_back(pig[0]);         // push back first letter
      pig.erase(pig.begin());        // then erase it from the front of the vector

    }
    first_letter = false; // after one iteration it is no longer first letter being checked. set to false
  }


  for (int i=0; i < pig.size(); i++) // print out the vector
  {
    cout << pig[i];
  }

  return 0;

}
