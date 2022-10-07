#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function

using namespace std;

// Place fileSum prototype (declaration) here
int fileSum (string numFile);


int main() {

   string filename;
   int sum = 0;
   
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   
   sum = fileSum(filename);

   cout << "Sum: " << sum << endl;
   
   return 0;
}

// Place fileSum implementation here
int fileSum (string numFile)  {
   ifstream inputs;   // Input file stream
   int num = 0; 
   int total = 0;   // File data

   // Open file
   inputs.open(numFile);

   if (!inputs.is_open()) {
      cout << "Error opening " << numFile << endl;
      exit(1);

   }
       
   
   while (inputs >> num) {
      total = total + num;
   }
   return total;
}