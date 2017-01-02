#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
  string word;
  bool running=true;

  while(running==true)
  {
    cout << "Please enter a word\n";
    cin >> word;
    reverse(word.begin(), word.end());
    cout << "\n" << word << endl;

    reverse(word.begin(), word.end());
    cout << "Original word was " << word << endl;
    cout << "continue? ";
    cin >> running;
  }
}
