#include<iostream>
#include<string>
using namespace std;
/*
		Абстрактные классы
		Чисто виртуальные функций
		virtual
		override
*/

class Weapon
{
public:
	virtual void Shoot() = 0;
	void Foo()
	{
		cout << "Foo! " << endl;
	}
};

class Gun :public Weapon
{
public:
	virtual void Shoot() override
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
class Bazooka :public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADA BUM!" << endl;
	}
};
class Knife :public Weapon
{
public:
	void Shoot()override
	{
		cout << "VJUH!" << endl;
	}
};
class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
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
	Knife knife;
	player.Shoot(&knife);
	knife.Foo();

	//Gun* weapon = &mamachenegun;
	//Gun* weapon = &gun;

	//gun.Shoot();
	//cout << endl;
	//weapon->Shoot();

}