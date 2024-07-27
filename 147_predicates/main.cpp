#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
	предикаты
*/
bool GreaterThanZero(int a)
{
	return a > 0;
}
bool LessThanZero(int a)
{
	return a < 0;
}
class Person
{
public:
	string Name;
	double Score;
	Person(string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p)
	{
		return p.Score > 180;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	vector<int>v = { 1,-2,-55,9,-3,8 };
	//cout << GreaterThanZero();
	int result = count_if(v.begin(), v.end(), GreaterThanZero);
	cout << result << endl;
	result = count_if(v.begin(), v.end(), LessThanZero);
	cout << result << endl;
	//cout << GreaterThanZero(-10);
	cout << endl << endl;

	vector<Person>people
	{
		Person("Вася", 181),
			Person("Петя", 30),
			Person("Маша", 179),
			Person("Даша", 200),
			Person("Катя", 198),
			Person("Андрей", 181),
			Person("Сергей", 50),
			Person("Иван", 150),

	};
	int result2 = count_if(people.begin(), people.end(), people.front());
	cout << result2 << endl;

	return 0;
}