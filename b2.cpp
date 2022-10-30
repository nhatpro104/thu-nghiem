#include<iostream>
using namespace std;

void nhap_hang_cot(int &m, int &n) {

	do {
		cout << "nhap so hang:\t";
		cin >> m;
		cout << "nhap so cot:\t";
		cin >> n;	
	}

	while(m<0 || n<0);
}	
	
void nhap_ma_tran(int m, int n, int **a) {
		
		
//	cout << "nhap ma tran:\n";
	for (int i=0; i<m;i++){
		a[i] = new int [n];
	}
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cout << "nhap " << "a[" <<i+1 <<"][" <<j+1 << "]" <<"\t";
			cin >> a[i][j];
		}
	}
	
}

void xuat(int **a, int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) 
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
		






void tinh(int m, int n, int **a, int q, int p, int **b, int **c )
{
	if(n==p) 
	{
	
	
	for (int i=0;i<m;i++) 
	{
		for (int j=0;j<q;j++) 
		{
			c[i][j] = 0;
			for(int k=0;k<n;k++) 
			{
				c[i][j] += a[i][k]*b[k][j];
			}

		}
	}
}
}


void chuyen_vi(int **a ,int m, int n) {
	int phu = 0;
	for (int i=0; i<m; i++) 
	{
		for(int j=0; j<n; j++)
		{
			phu = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = phu;
			
		}
	}
}




int main() 
{
	cout << "nhap ma tran A:\n";
	
	int m,n, **a;
	a = new int *[m];
	nhap_hang_cot(m, n);
	nhap_ma_tran(m,n,a);
	cout << "xuat ma tran A:\n";
	xuat(a, m, n);
	
	
	cout << "nhap ma tran B:\n";
	int p,q, **b;
	nhap_hang_cot(p, q);
	
	b = new int *[p];
	nhap_ma_tran(p,q,b);
	xuat(b, p, q);

//
	int **c;
	c = new int *[m];
	for (int i=0; i<m;i++)
	{
		c[i] = new int [q];
	}  
	// khai bao ma tran
	
	tinh(m,n,a,q,p,b,c);
	xuat(c, m, q);
	
	cout << endl;
	
	chuyen_vi(a,m,n);
	chuyen_vi(b,q,p);
	
	
	
}
