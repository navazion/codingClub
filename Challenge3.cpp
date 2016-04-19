#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
//	int i = 0;
//	while(i++ < 10) { //Is this like a for-loop?
		int r = (rand() % 100) + 1;
		cout << "I did it mum! " << r << " ";
//	}
	return 0;
}

