#include <fstream>
#include <iostream>

int main() {

  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
<<<<<<< HEAD
  int index = 0;
=======
>>>>>>> f8b9ddeb27cdfddeef5ae7d5672042a2cb2283cd
  int zahl1;
  int zahl2;


<<<<<<< HEAD
  while(index < 234) {
=======
  while(!fin.eof()) {
>>>>>>> f8b9ddeb27cdfddeef5ae7d5672042a2cb2283cd
    fin >> zahl1;
    fin >> zahl2;
    fout << zahl1 + zahl2;
    fout << "\n";
<<<<<<< HEAD
    index++;
  }
  
  fout << zahl1 + zahl2;
=======
   // std::cout << zahl1 << "+" << zahl2 << "=" << summe << "\n" << std::ends;
  }
 
>>>>>>> f8b9ddeb27cdfddeef5ae7d5672042a2cb2283cd
  fin.close(); 
}