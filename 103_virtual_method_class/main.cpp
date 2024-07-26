#include<iostream>
#include<string>
using namespace std;
/*
		Полиформиз
		Виртуальные функций
		virtual
		override
*/
class Gun
{
public:
	virtual void Shoot()
	{
		cout << "BANG!" << endl;
	}
};
class SubmachineGun :public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};
class Bazooka :public Gun
{
public:
	void Shoot() override
	{
		cout << "BADA BUM!" << endl;
	}
};
class Player
{
public:
	void Shoot(Gun* gun)
	{
		gun->Shoot();
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	Gun gun;
	Player player;
	player.Shoot(&gun);
	SubmachineGun mamachenegun;
	player.Shoot(&mamachenegun);
	Bazooka bazooka;
	player.Shoot(&bazooka);

	//Gun* weapon = &mamachenegun;
	//Gun* weapon = &gun;

	//gun.Shoot();
	//cout << endl;
	//weapon->Shoot();

}