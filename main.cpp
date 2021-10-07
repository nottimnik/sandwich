#include<iostream>
#include<string>
#include<vector>
using namespace std;

double variables_int[1001];
string variables_string[1001];

void print(string &sentence, int &loop) {
  for(int i=1;i<=loop;++i) {
    cout << sentence << endl;
  }
}

void var(string &command) {
  if(command=="create") {
    string type;
    cin >> type;
    if(type=="int") {
      int number;
      cin >> number;
      double value;
      cin >> value;
      variables_int[number] = value;
    }
    else if(type=="string") {
      int number;
      cin >> number;
      string value;
      cin >> value;
      variables_string[number] = value;
    }
    else {
      cout << "Error Invalid Type! Can Only do int or string." << endl;
    }
  }
  else if(command=="print") {
    string type;
    cin >> type;
    if(type == "int") {
      int number;
      cin >> number;
      cout << variables_int[number] << endl;
    }
    else if(type == "string") {
      int number;
      cin >> number;
      cout << variables_string[number] << endl;
    }
    else {
      cout << "Error Invalid Type! Can only do int or string." << endl;
    }
  }
  else {
    cout << "Error Invalid Command!" << endl;
  }
}

int main() {
  while(0<1) {
  cout << "<<< ";
  string command;
  cin >> command;

  if(command=="print") {
    string sentence;
    cin.ignore();
    getline(cin, sentence);
    int loop;
    cin >> loop;
    print(sentence, loop);
  }
  else if(command=="var") {
    string index;
    cin >> index;
    var(index);
  }
  else if(command=="add") {
    int valueOne;
    cin >> valueOne;
    int valueTwo;
    cin >> valueTwo;
    cout << valueOne+valueTwo;
  }
  else{
    return false;
  }
  }
  return 0;
}
