#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
  // initialize regular string and backwords string
  string word, revword;



  cout << "Please enter a word\n"; //take user input
  cin >> word;
  revword = word; //set revword equal to word

  reverse(revword.begin(), revword.end()); // reverse revword


  if(word.compare(revword) !=0) //if word and revword are not the same
  {
    cout << "The word is not a palindrome!" << endl;
    cout << word << endl;
    cout << revword << endl;
  }
  else //else they are the same
  {
    cout << "the word is a palindrome!" << endl;
    cout << word << endl;
    cout << revword << endl;
  }



  return 0;
}
