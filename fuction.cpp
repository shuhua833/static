#include<iostream>
using namespace std;
class account{
	private:
		 static int count;
		int balance;
		public:
			static void setcount(int c)
			{
				count=c;
				cout<<"count="<<count<<endl;
			}
			void setbalance(int b)
			{
				balance=b;
				cout<<"balance="<<balance<<endl;
			}
		}a;
		int account::count;
		int main()
		{
			account::setcount(20);
			a.setbalance(500);
			a.setcount(25);
			return 0;
		}
