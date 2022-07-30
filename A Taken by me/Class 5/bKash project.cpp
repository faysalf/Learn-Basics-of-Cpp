
#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;
	cin >> s;

	if (s == "*247#") {
		cout << "bKash\n";
		cout << "1 Send Money\n";
		cout << "2 Send Money to none bKahs\n";
		cout << "3 Mobile Recharge\n";
		cout << "4 Payment\n";
		cout << "5 Cash Out\n";
		cout << "6 Pay bill\n";
		cout << "7 Download App\n";
		cout << "8 My bKash\n";
		cout << "9 Reset PIN\n\n";

		int n; cin >> n;
		if (n == 1) {
			cout << "Enter Receiver bKash Account No:\n\n";

			int number; cin >> number;
			cout << "Free Send Money to 5 Priyo Numbers.\n";
			cout << "Dial *247# and select option 8 to find Priyo Numbers.\n";
			cout << "Enter Amoutn:\n\n";

			int amount; cin >> amount;

			cout << "FREE Send Money to 5 Priyo numbers up to 25,000 Tk. Every month.\n";
			cout << "Enter Reference:\n\n";

			string reference; cin >> reference;

			cout << "Add up to 5 priyo Numbers to Send Money for Free.\nSend Money.\nTo: "<<number<<"\nAmount: Tk "<<amount<< "\nReference: "<< reference<<"\nEnter Menu PIN to confirm\n\n";

			int pin; cin >> pin;

			if (pin == 12345) {
				cout << "Your Send Money is successful\n";
			}
			else {
				cout << "Your Pin No is wrong! Please try again.\n";
			}
		}
		else if (n == 2) {
			// Send money to non - bKash user
		}

		else if (n == 3) {
			//mobile recharge
		}
	}

	return 0;
}