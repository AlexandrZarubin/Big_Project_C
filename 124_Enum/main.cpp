#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
	enum
*/

class PC
{
	enum PCState;
	PCState State;

public:
	enum PCState
	{
		OFF,
		ON,
		SLEEP
	};
	PCState GetState() { return State; }
	void SetState(PCState State) { this->State = State; }

};

enum Speed
{
	MIN = 150,
	RECOMAND = 600,
	MAX = 800
};

int main()
{
	setlocale(LC_ALL, "rus");
	/*PC pc;
	pc.SetState(PC::PCState::ON);
	if (pc.GetState()==PC::PCState::ON){cout << "PC Работает!" << endl;}
	switch (pc.GetState())
	{
	case PC::PCState::OFF:
		cout << "Выключен!" << endl;
		break;
	case PC::PCState::ON:
		cout << "Включен!" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "Спит!" << endl;
		break;
	default:
		break;
	}
	*/
	Speed sp = Speed::MAX;
	cout << sp << endl;
	return 0;
}