#include<bits/stdc++.h>
using namespace std;

void print1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	} 
}

void print2(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
	cout<<endl;
	}
}


void print3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
	cout<<endl;
	}
}

void print4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
	cout<<endl;
	}
}

void print5(int n){
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
	cout<<endl;
	}
}

void print6(int n){
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
	cout<<endl;
	}
}

void print5_1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i+1);j++){
			cout<<"*";
		}
	cout<<endl;
	}
}


void print7(int n){
	for(int i=0;i<n;i++){
		//space
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;	
	}
}

void print8(int n){
	for(int i=0;i<n;i++){
		//space
		for(int j=0;j<i;j++){
			cout<<" "; 
		}
		//star
		for(int j=0;j<(n-(2*i)+4);j++){
			cout<<"*";
		}
		//space
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

void print10(int n){
	for(int i=1;i<=2*n-1;i++){
		int stars=i;
		if(i>n) stars=2*n-i;
		for(int j=1;j<=stars;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void print11(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==1){
				if(j%2==1)
					cout<<"1";
				else
					cout<<"0";
			}
			else{
				if(j%2==1)
					cout<<"0";
				else
					cout<<"1";
			}
		}
		cout<<endl;
	}
}

void print12(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=i;j>0;j--){
			cout<<j;
		}
		cout<<endl;
	}
}

void print13(int n){
	int count=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<count<<" ";
			count++;
		}
	cout<<endl;
	}
}

void print14(int n){
	for(int i=0;i<n;i++){
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

void print15(int n){
	for(int i=0;i<n;i++){
		for(char ch='A';ch<='A'+(n-i-1);ch++){
			cout<<ch;
		} 
		cout<<endl;
	}
}

void print16(int n){
	for(char i=0;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch;
		}
		cout<<endl;
	}
}

void print17(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		char ch='A';
		int breakpoint=(2*i+1)/2;
		for(int j=1;j<=2*i+1;j++){
			cout<<ch;
			if(j<=breakpoint)
				ch++;
			else ch--;
		}
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	print1(n);
	cout<<"\n";
	print2(n);
	cout<<endl;
	print3(n);
	cout<<endl;
	print4(n);
	cout<<endl;
	print5(n);
	cout<<endl;
	print6(n);
	cout<<endl;
	print5_1(n);
	cout<<endl;
	print7(n);
	//cout<<endl;
	print8(n);
	cout<<endl;
	print10(n);
	cout<<endl;
	print11(n);
	cout<<endl;
	print12(n);
	cout<<endl;
	print13(n);
	cout<<endl;
	print14(n);
	cout<<endl;
	print15(n);
	cout<<endl;
	print16(n);
	cout<<endl;
	print17(n);

}
