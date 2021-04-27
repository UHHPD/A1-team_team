#include <fstream>
#include <iostream>

int main() {

  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  int index = 0;
  int zahl1;
  int zahl2;


  while(index < 234) {
    fin >> zahl1;
    fin >> zahl2;
    fout << zahl1 + zahl2;
    index++;
  }
  fin.close(); 
}