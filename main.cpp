#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

double variables_int[1001];
string variables_string[1001];

//libraries
bool math = false;
bool files = false;

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
      cin.ignore();
      getline(cin, value);
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
  else if(command=="import") {
    string library;
    cin >> library;
    if(library == "math") {
      math = true;
    }
    else if(library == "files") {
      files = true;
    }
    else {
      cout << library << " does not exist!" << endl;
    }
  }
  /* ======================
     ==== Math Library ====
     ====================== 
  */
  else if(command=="add" and math==true) {
    double valueOne;
    cin >> valueOne;
    double valueTwo;
    cin >> valueTwo;
    cout << valueOne+valueTwo << endl;
  }
  else if(command=="sub" and math==true) {
    double valueOne;
    cin >> valueOne;
    double valueTwo;
    cin >> valueTwo;
    cout << valueOne-valueTwo << endl;
  }
  else if(command=="mul" and math==true) {
    double valueOne;
    cin >> valueOne;
    double valueTwo;
    cin >> valueTwo;
    cout << valueOne*valueTwo << endl;
  }
  else if(command=="div" and math==true) {
    double valueOne;
    cin >> valueOne;
    double valueTwo;
    cin >> valueTwo;
    cout << valueOne/valueTwo << endl;
  }
  /* =====================
     === Files Library ===
     =====================
  */
  else if(command=="read" and files == true) {
    string PATH;
    cin >> PATH; 
    string TEXT; //Create a text string, which is used to output the text file
    ifstream file(PATH); //Read from the text file
    int line = 0; //the line of the text file

    if(file.is_open()) {

    cout << "The Content of " << PATH << ":" << endl;
    cout << "====================================" << endl;

    //Use a while loop together with the getline() function to read the file line by line
    while (getline (file, TEXT)) {
      //Output the text from the file
      cout << line << " | " << TEXT << endl;
      line++; //add 1 to the line to keep count on what line we are
    }

    cout << "====================================" << endl;
    }
    else {
      cout << "File does not exist!";
    }

    //Close the file
    file.close();
    cout << endl;
  }
  else if(command=="write" and files==true) {
    string path;
    cin >> path;
    ofstream file;
    file.open(path);
    string text;
    cin.ignore();
    getline(cin, text);

    file << text;
  }
  else{
    cout << command << " does not exist!" << endl;
  }
  }
  return 0;
}
