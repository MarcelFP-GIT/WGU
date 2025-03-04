#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> oldestPeople(5);

	int nthPerson;

	oldestPeople.at(0) = 122; // Died 1997 in France
	oldestPeople.at(1) = 119; // Died 1999 in U.S.
	oldestPeople.at(2) = 117; // Died 1993 in U.S.
	oldestPeople.at(3) = 117; // Died 1993 in Canada
	oldestPeople.at(4) = 116; // Died 2006 in Ecuador

	cout << "Enter N (1..5): ";

	cin >> nthPerson;

	if ((nthPerson >= 1) && (nthPerson <= 5)) {

		cout << "The #" << nthPerson << "oldest person lived ";

		cout << oldestPeople.at(nthPerson - 1) << " years." << endl;

	}

	return 0;

}