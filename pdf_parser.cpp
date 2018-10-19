#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cerr << "Invalid argument count\n";
    return 1;
  }

  ifstream pdf_file(argv[1]);
  string line;
  if (pdf_file.is_open()) {
    while (getline(pdf_file, line)) {
      cout << line << "\n";
    }
    pdf_file.close();
  }
  else {
    cerr << "Could not open file\n";
    return 2;
  }

  return 0;
}
