#include<iostream>
using namespace std;
class account{
	private:
		static int count;
		int balance;
		public:
			void setbalance(int b)
			{
				balance=b;
				cout<<"balance="<<balance<<endl;
				count++;
			}
			void displaycount()
			{
				cout<<"count="<<count<<endl;
			}
}a1,a2;
int account::count;
int main()
{
	a1.displaycount();
	a2.displaycount();
	a1.setbalance(3);
	a1.displaycount();
	a2.setbalance(4);
	a2.displaycount();
	return 0;
	
}
