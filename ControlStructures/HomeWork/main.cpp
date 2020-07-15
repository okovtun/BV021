#include <iostream>;
using namespace std;

void main() {
	int n;
	cout << "Input number: "; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int z = 1; z <= n; z++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= n; k++) {
					cout << ((i + j) % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
}