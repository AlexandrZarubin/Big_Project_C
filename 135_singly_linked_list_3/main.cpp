﻿#include<iostream>
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
	void pop_front();

	void push_front(T data);
	void pop_back();
	void insert(T data, int index);
	void removeAt(int index);

	void clear();
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
	lst.push_front(4);
	lst.push_front(5);

	//cout << lst.GetSize() << endl;

	//cout << lst[1] << endl;
	cout << "_____________________________________________\n";
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << "---------------------------------------------\n";
	cout << endl << "insert" << endl << endl;
	lst.insert(6, 1);
	cout << "_____________________________________________\n";
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "---------------------------------------------\n";
	cout << endl << "removeAt" << endl << endl;
	lst.removeAt(1);
	cout << "_____________________________________________\n";
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "---------------------------------------------\n";

	cout << endl << "pop_back" << endl << endl;
	lst.pop_back();
	cout << "_____________________________________________\n";
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "---------------------------------------------\n";
	cout << endl << "Элементов в списке " << lst.GetSize() << endl << "Выполняю метод pop_front" << endl << endl;
	//lst.pop_front();
	//lst.clear();
	//int numberCount = 5;
	//cin >> numberCount;
	/*for (int i = 0; i < numberCount; i++)
	{
		lst.push_back(rand() % 10);
	}*/
	/*for (int i = 0; i < lst.GetSize(); i++)
	{

		cout << lst[i] << endl;
	}*/
	cout << endl << "Элементов в списке " << lst.GetSize() << endl;
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
	clear();
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

template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
	cout << "clear element" << endl;
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size - 1);
}

template<typename T>
void List<T>::insert(T data, int index)
{
	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		//Node<T>* newNode = new Node<T>(data, previous->pNext);
		//previous->pNext = newNode;
		previous->pNext = new Node<T>(data, previous->pNext);
		Size++;
	}
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		///
		Node<T>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		Size--;
	}
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


