#include <iostream>
using namespace std;
int main() {
	int T;
	
	cin >> T;
	int N[T];
	for(int k = 0;k<T;k++)
	{
	    cin>>N[k];
	}
	for(int k = 0;k<T;k++){
	    int e = N[k];
	   for(int j = 1;j <= e;j++){
		 if((j%N[0] == 0) && (j%N[1]==0)){
            cout<<"FizzBuzz\n";}
    			else if(j%3 == 0)
            		cout<<"Fizz\n";
        		else if(j%5 == 0)
           			 cout<<"Buzz\n";
       			else
            		cout<<j<<"\n";
		}
		
	}
	
	void fizzBuzz(int n) {
for(int i = 1; i<=n ; i++)
{
    if(i%3==0 && i%5==0)
    {
        std::cout<<"FizzBuzz"<<"\n";
    }
    else if(i%3==0 && i%5 != 0)
    {
        std::cout<<"Fizz"<<"\n";
    }
    else if(i%3 != 0 && i%5 == 0)
    {
        std::cout<<"Buzz"<<"\n";
    }
    else {
    std::cout<<i<<"\n";
    }
}
}
