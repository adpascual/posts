#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
ifstream instream;
  instream.open(argv[1]);

  int numDucks = 0;
  string line;
  while (!instream.eof()) {
      getline(instream, line);
      if (line == "") continue;

      if (line == "duck") numDucks++;
  }
  return 0;
  }
