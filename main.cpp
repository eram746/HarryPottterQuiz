#include <iostream>
using namespace std;

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;

  cout << "The Sorting Hat Quiz!\n";

  cout << "Q1: When I'm dead, I want people to remember me as:\n";
  cout << "1) The Good\n";
  cout << "2) The Great\n";
  cout << "3) The Wise\n";
  cout << "4) The Bold\n";

  cin >> answer1;

  if (answer1 == 1) {
    hufflepuff++;
  }
  else if (answer1 == 2) {
    slytherin++;
  }
  else if (answer1 == 3) {
    ravenclaw++;
  }
  else if (answer1 == 4) {
    gryffindor++;
  }
  else {
    cout << "Invalid Input\n";
  }

  cout << "Q2) Dawn or Dusk?\n";
  cout << "1) Dawn\n";
  cout << "2) Dusk\n";
  cin >> answer2;

  if (answer2 == 1) {
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
  }
  else {
    cout << "Invalid Input\n";
  }

  cout << "Q3) Which king of instrument most pleases your ear?\n";
  cout << "1) The violin\n";
  cout << "2) The trumpet\n";  
  cout << "3) The piano\n";
  cout << "4) The drum\n";
  cin >> answer3; 

  if (answer3 == 1) {
    slytherin++;
  }
  else if (answer3 == 2) {
    hufflepuff++;
  }
  else if (answer3 == 3) {
    ravenclaw++;
  }
  else if (answer3 == 4) {
    gryffindor++;
  }
  else {
    cout << "Invalid Input\n";
  }
  cout << "Q4) Which road tempts you most?\n";
  cout << "1) The wide, sunny grassy lane\n";
  cout << "2) The narrow, dark, lantern-lit alley\n";
  cout << "3) The twisting, leaf-strewn path through woods\n";
  cout << "4) The cobbled street lined (ancient buildings)\n";
  cin >> answer4; 

  if (answer4 == 1) {
    hufflepuff++;
  }
  else if (answer4 == 2) {
    slytherin++;
  }
  else if (answer4 == 3) {
    gryffindor++;
  }
  else if (answer4 == 4) {
    ravenclaw++;
  }
  else {
    cout << "Invalid Input\n";
  }
  string house;
  int max = 0; 

  
  if (gryffindor > max) {
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }
  cout << house << "!\n";
  return 0;
}
