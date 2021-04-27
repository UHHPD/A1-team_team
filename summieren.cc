#include <fstream>
#include <iostream>

int main() {

  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  int zahl1;
  int zahl2;


  while(!fin.eof()) {
    fin >> zahl1;
    fin >> zahl2;
    fout << zahl1 + zahl2;
    fout << "\n";
  }
 
  fin.close(); 
}