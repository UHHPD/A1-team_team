#include <fstream>
#include <iostream>

int main() {

  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  int index = 0;
  int zahl1;
  int zahl2;


  while(index < 233) {
    fin >> zahl1;
    fin >> zahl2;
    fout << zahl1 + zahl2;
    fout << " ";
    index++;
  }
  fout << zahl1 + zahl2;
  fin.close(); 

}