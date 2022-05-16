#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int len;
	string num;
	stack<char> s;
	stack<char> t;
	cin >> len >> num;
	for (int i = 0; i < len; i++)
		s.push(num[i]);
	for (int i = 1; s.size(); i++)
	{
		t.push(s.top());
		if (!(i % 3) && i != len)
			t.push(',');
		s.pop();
	}
	while (t.size())
	{
		cout << t.top();
		t.pop();
	}
	return 0;
}