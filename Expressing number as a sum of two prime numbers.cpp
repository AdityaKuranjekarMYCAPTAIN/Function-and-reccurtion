#include<iostream>
using namespace std;

bool isprime(int n);

int main()
{
	int i , n ;
	bool flag = false ;
	
	cout << "Enter a positive integer: ";
	cin >> n;
	
	for( i=2 ; i<=n/2 ; i++)
	{
		if(isprime(i))
		{
			if(isprime(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag = true;
			}
		}
	}
	if(!flag)
	{
		cout<<n<<" can't be expressed as sum of two numbers."<<endl;
	}
	return 0;
}

bool isprime(int n)
{
	int i;
	bool Prime = true;
	if( n==0 || n==1)
		Prime = false;
	else
	{
		for( i=2 ; i<=n/2 ; ++i)
		{
			if(n % i == 0 )
			{
				Prime = false;
				break;
			}
		}
	}	
	return Prime;
}
Developed By Aditya Kuranjekar under Captain Aadhar...>>>>>>>>>> HAPPY CODING <<<<<<<<<<<<>>
