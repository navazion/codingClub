#include <iostream>
using namespace std;

int main() {

	 double wallet = 100.00;
	 double cashreg = 200.00;
	 double cost;

	cout << "The cashregister has " << cashreg << " dollars and the customer's wallet has " << wallet << " dollars." << endl;
	

	 
  cout << "Please enter the cost: " << endl;
  cin >> cost;
  wallet -= cost;
  cashreg += cost;
  
  	cout << "The cashregister now has " << cashreg << " dollars and the customer's wallet has " << wallet << " dollars." << endl;
	
  
}

