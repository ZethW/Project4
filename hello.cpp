#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  //If the user has no USERNAME or if USERNAME was incorrectly indexed:
  if (!argv[10]){
    cout << "Hello, world!" << endl;
  }
  else
    cout << "Hello, " << argv[10] << "!" << endl;

  return 0;
}
