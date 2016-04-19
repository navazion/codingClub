#include <iostream>
using namespace std;

int main() {
	 string finit;
	 string sinit;
	 double best;
	 double age;
	 bool compete;
	 int team;
	 
  cout << "Please enter your first initial: " << endl;
  cin >> finit;
  cout << "Please enter your second initial: " << endl;
  cin >> sinit;
  cout << "Please enter your best time in minutes: " << endl;
  cin >> best;
  cout << "Please enter your age: " << endl;
  cin >> age;
  cout << "Please enter whether or not you will compete in the next competition:" << endl;
  cin >> compete;
  cout << "Please enter how many people are on your team: " << endl;
  cin >> team;
  
  cout << "The competitor " << finit << "." << sinit << ". will " << compete << " in the next competition." << endl;
  cout << "They have " << team << " people on their team and are " << age << " years old." << endl;
  cout << "Their best time is " << best << " minutes." << endl;

  return 0;
}


