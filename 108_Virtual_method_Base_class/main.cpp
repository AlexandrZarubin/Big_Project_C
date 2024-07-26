#include<iostream>
#include<string>
using namespace std;

/*
		вызов метода базового класса
*/
class Msg
{
	string msg;
public:
	Msg(string msg)
	{
		this->msg = msg;
	}
	virtual string GetMsg()
	{
		return msg;
	}
};
class BreaktsMsg : public Msg
{
public:
	BreaktsMsg(string msg) :Msg(msg)
	{
	}

	string GetMsg()override
	{
		return "[" + ::Msg::GetMsg() + "]";
	}
};
class Printer
{
public:
	void Print(Msg* msg)
	{
		cout << msg->GetMsg() << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	BreaktsMsg m("Privet");
	Printer p;
	p.Print(&m);
	return 0;
}