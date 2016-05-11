#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct bookType{
  string bookTitle;
  int numOfMaleAuthors;
  int numOfFemaleAuthors;
  int yearPublished;
  string genres[];
  int numOfWords;
};



/*Read in data from file */

int main() {
  cout << "Book Club Data Parser" << endl;
  cout << "         v0.1        " << endl;
  cout << "---------------------" << endl;

  /* Obtain # of Books Read */
  int numOfBooks = 0;
  cout << "# Of Books in File:";
  cin >> numOfBooks;
  
  /* Ask for input file name */
  string fileName;
  cout << "Name of file:";
  cin >> fileName;

  cout << "Name of file is " << fileName << endl;

  /* Data storage variablse */
  int numOfBooksRead = 0;
  bookType book[numOfBooks];

  /* Read in File Data */
  ifstream bookClubData;
  int i = 0;
  while(i < numOfBooks) {
    i++;
  }

  return 0;
}
