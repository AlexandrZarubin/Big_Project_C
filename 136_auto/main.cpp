#include<iostream>
#include<vector>
//using namespace std;
/*
	ключевое слово auto
*/

int main()
{
	setlocale(LC_ALL, "rus");
	/*
	auto a = 10;
	auto b = 3.3;
	auto c = 'b';
	auto d = "string";
	auto e = true;*/
	std::vector<int>myVector = { 11,46,9 };
	std::vector<int>::iterator it = myVector.begin();
	auto it2 = myVector.begin();
	//for (std::vector<int>::iterator it=myVector.begin();it!=myVector.end(); it++)
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}