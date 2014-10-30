#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  if (!argv[10]){ //If the user has no USERNAME or if USERNAME was indexed incorrectly.
    cout << "Hello, world!" << endl;
  }
  else
    cout << "Hello, " << argv[10] << "!" << endl;

  return 0;
}
