#include <iostream>
#include <math.h>

using namespace std;

void goldbach(int n)
{
	int	br = 0;
	cout << "[";
	for (int i = 2; i <= n/2; i++)
	{
		int flag = 1;
		
		for (int j = 2; j <= i/2 ; j++)
		{
			if((i % j == 0))
			{
				flag = 0;	
			}
		}

		if(flag == 1)
		{
			for (int j = 2; j <= (n-i)/2; j++)
			{
				if((n-i) % j == 0)
				{
					flag = 0;	
				}
			}
		}

		if(flag == 1) 
		{
			br++;
			if (br != 1)
			{
				cout<< ", " << "(" << i << "," << n-i << ")";
			}
			else cout<<"(" << i << "," << n-i << ")";
		}
	}
	cout << "]" <<endl;
}

int main()
{
	goldbach(4);
	goldbach(6);
	goldbach(8);
	goldbach(10);
	goldbach(100);
	system ("pause");
	return 0;
}