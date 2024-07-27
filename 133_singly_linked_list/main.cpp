#include<iostream>
#include<string>
using namespace std;
/*
	односвязный список
	реализация
*/
template<typename T>
class List
{
	template<typename T>
	class Node
	{
	public:
		Node* pNext;// Указатель на следующий узел
		T data;// Данные узла
		Node(T data = T(), Node* pNext = nullptr)// Конструктор узла
		{
			this->data = data;// Инициализация данных узла
			this->pNext = pNext;// Инициализация указателя на следующий узел
		}
	};
	Node<T>* head;// Указатель на голову списка
	int Size;// Размер списка
public:
	List();// Конструктор списка
	~List();// Деструктор списка
	void push_back(T data);// Метод для добавления элемента в конец списка
	int GetSize()const { return Size; }// Метод для получения размера списка
	T& operator[](const int index);// Перегрузка оператора [] для доступа к элементу по индексу

};


int main()
{
	setlocale(LC_ALL, "rus");

	List<int>lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	cout << lst.GetSize() << endl;

	cout << lst[1] << endl;
	cout << "_____________________________________________\n";
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	int numberCount = 5;
	//cin >> numberCount;
	cout << "---------------------------------------------\n";
	for (int i = 0; i < numberCount; i++)
	{
		lst.push_back(rand() % 10);
	}
	for (int i = 0; i < lst.GetSize(); i++)
	{

		cout << lst[i] << endl;
	}
	return 0;

}


template<typename T>
List<T>::List()
{
	Size = 0;// Инициализация размера списка
	head = nullptr;// Инициализация указателя на голову списка
}
template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)// Если список пустой
	{
		head = new Node<T>(data);// Создаем первый узел
	}
	else
	{
		Node<T>* current = this->head;// Указатель на текущий узел
		while (current->pNext != nullptr)// Пока не достигнут конец списка
		{
			current = current->pNext;// Переход к следующему узлу
		}
		current->pNext = new Node<T>(data);// Создание нового узла в конце списка
	}
	Size++;// Увеличение размера списка
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;// Счетчик индексов
	Node<T>* current = this->head;// Указатель на текущий узел
	while (current != nullptr)
	{
		if (counter == index)// Если текущий индекс равен запрашиваемому
		{
			return current->data;// Возвращаем данные текущего узла
		}
		current = current->pNext;// Переход к следующему узлу
		counter++;// Увеличение счетчика индексов
	}
}


