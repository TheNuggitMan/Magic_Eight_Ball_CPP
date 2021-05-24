#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    string q;
  cout << "MAGIC 8-BALL \n";
  cout << "Ask a question. . .  \n";
  cin >> q;
  cout << ".\n";
  cout << "..\n";
  cout << "...\n";

  srand(time(NULL));
  int answer = rand() % 10;

  switch(answer) {
    case 0:
      cout << "It is certain\n";
    break;
    case 1:
      cout << "Yes - definitely\n";
    break;
    case 2:
      cout << "Reply hazy, try again..\n";
    break;
    case 3:
      cout << "Signs point to yes.\n";
    break;
    case 4:
      cout << "Yes.\n";
    break;
    case 5:
      cout << "Cannot predict now\n";
    break;
    case 6:
      cout << "Concentrate and ask again\n";
    break;
    case 7:
      cout << "My reply is No.\n";
    break;
    case 8:
      cout << "You may rely on it\n";
    break;
    case 9:
      cout << "Very doubtful\n";
    break;
    case 10:
      cout << "Outlook good\n";
    break;
    default:
      cout << "Never gonna happen";
    break;
  }
  return 0;
}
