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
  bool found_vowel=false, first_letter = true;
  int a_count = 0, e_count=0, i_count=0, o_count=0, u_count=0, vowel_count=0;
  vector<char> newWord; // char vector that holds the string to be manipulated


  cout << "Please enter a word." << endl; //get word from user
  cin >> word;


  newWord= conv(word); // convert string to vector char
  for(int i =0; i <newWord.size(); i++)
  {
    if(newWord[i] == 'a')
    {
      a_count++;
      vowel_count++;
    }
    else if(newWord[i] == 'e')
    {
      e_count++;
      vowel_count++;
    }
    else if(newWord[i] == 'i')
    {
      i_count++;
      vowel_count++;
    }
    else if(newWord[i] == 'o')
    {
      o_count++;
      vowel_count++;
    }
    else if(newWord[i] == 'u')
    {
      u_count++;
      vowel_count++;
    }

  }

  cout << "Number of Vowels:\t" << vowel_count << endl;
  cout <<"-----------------------------------------------------"<<endl;
  cout <<"Number of \"A's\":\t" << a_count << endl;
  cout <<"-----------------------------------------------------"<<endl;
  cout <<"Number of \"E's\":\t" << e_count << endl;
  cout <<"-----------------------------------------------------"<<endl;
  cout <<"Number of \"I's\":\t" << i_count << endl;
  cout <<"-----------------------------------------------------"<<endl;
  cout <<"Number of \"O's\":\t" << o_count << endl;
  cout <<"-----------------------------------------------------"<<endl;
  cout <<"Number of \"U's\":\t" << u_count << endl;

  return 0;

}
