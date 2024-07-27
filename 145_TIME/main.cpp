#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

/*
	время выполнения участка кода
*/
class SimpleTimer
{
	std::chrono::time_point<std::chrono::steady_clock>start, end;
public:
	SimpleTimer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~SimpleTimer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float>duration = end - start;
		cout << "DURATION: " << duration.count() << " s " << endl;
	}
};


int Sum(int a, int b)
{
	SimpleTimer st;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "id потока =  " << this_thread::get_id() << "===========\tDoWork STARTED\t=========" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));

	cout << "id потока =  " << this_thread::get_id() << "===========\tDoWork STOPPED\t=========" << endl;
	return a + b;

}
void Foo()
{
	SimpleTimer st;
	for (size_t i = 0; i < 100000; i++)
	{
		cout << i << endl;
	}
}
int main()
{
	SimpleTimer st;

	Foo();



	////auto star = chrono::high_resolution_clock::now();
	//setlocale(LC_ALL, "rus");

	//int result;
	//thread t([&result]() {result = Sum(2, 5); });
	////int result;
	////result = Sum(2, 5);
	//for (size_t i = 0; i < 10; i++)
	//{
	//	cout << "id потока =  " << this_thread::get_id() << "\tmain\t" << i << endl;
	//	this_thread::sleep_for(chrono::milliseconds(500));
	//}
	//t.join();
	//cout << "Sum result = " << result << endl;
	//
	////auto end = chrono::high_resolution_clock::now();
	////chrono::duration<float>duration = end - star;
	////cout << "Duration: " << duration.count()<<" s" << endl;

	return 0;
}