#include<iostream>
using namespace std;

class Fibonacci{
	
	public:
		long fibon(int);
		long fibonn(int);
	private:
		int a, b, p;
};

long Fibonacci::fibon(int n){
	long a=1; b=1; p;
	cout<<a<<" "<<b;
	for(int i=1; i<=n-2; i++){
	p=a+b;
	a=b;
	b=p;
	cout<<" "<<p;
}}

long Fibonacci::fibonn(int n)
{
	if((n==0)|| (n==1)){
		return (1);
	}
	else{
		return(fibonn(n-1) + fibonn(n-2));
	}

}
int main(){
	int n=11;
	Fibonacci run;
	run.fibon(n);
	cout<<endl;
	run.fibonn(11);
	
	return 0;
}
