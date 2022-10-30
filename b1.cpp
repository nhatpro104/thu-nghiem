#include<iostream>
using namespace std;


void nhap(int &n) {
	do {
		cin >> n;
	}
	while (n<0);
}


void tinh(int n) {
	int count1 = 0;
	int count2 = 0;
	for (int i=1;i<=n;i++) {
		for(int j=1; j<=i;j++) {
			if (i%j==0) {
				count1++;
			}
		}
		if (count1 == 2) {
			count2++;
			
		}
		count1=0; 
	}
	
	cout << "so cac so nguyen to co trong doan [0," << n << "] la\t" << count2; 
	
	/*if (n==0) {
		cout << 0;
	}*/
}


int main() {
	int n;
	nhap(n);
	tinh(n);
	 
}
