#include<iostream>
using namespace std;
int main() {
	int w;
	cin >> w;
	if (w % 2 == 0)
		if (w != 2)
			cout << "YES";
		else
			cout << "NO";
	else
		cout << "NO";
}
/*#include<iostream>
using namespace std;
int main() {
	int w;
	int a;
	cin >> w;
	a = w / 2;
	if (w % 2 == 1)
		cout << "NO";
	else
		if (a % 2 == 1)
			cout << "NO";
		else
			cout << "YES";

}*/

