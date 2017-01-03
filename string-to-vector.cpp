#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<char> conv(const string &s)
{
  return vector<char>(s.begin(),s.end());

}

int main()
{
  string s = "test";
  vector<char> newword;
  newword = conv(s);

  for(int i =0; i<newword.size();i++){
    cout << newword[i];
  }

  return 0;
}
