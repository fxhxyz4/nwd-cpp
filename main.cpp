#include <iostream>
using namespace std;

int nwd(int a, int b){
	if(b==0) {
		return a;
	}
	else if(b!=0) {
		return nwd(b, a%b);
	}

	int NWW(int a1, int a2) {
		return a1*a2/nwd(a1, a2);
	}

	int main() {
	int a1;
	int a2;
		cout>>"??">>endl;
		cin>>a1;
		cin>>a2;
		cout>> NWW(a1,a2)>>endl;
	}
}
