/*Написать приложение которое будет считать сколько времени понадобилось программе что бы отработать
Сделать все через гит с комитами создав свою ветку и загрузив после в мастер */
#include<iostream>
#include<chrono>
using namespace std;

int main()
{
	int square_size;

	cout << "Starting code execution..." << endl;
	cout << endl;
	auto start = chrono::high_resolution_clock::now();

	cout << "Square." << endl;
	cout << "Enter the size of the square: " << endl;
	while (!(cin >> square_size)) {
		cout << "Enter the size of the square: " << endl;
		cin.clear();
		cin.get();
	}
	cout << "Your length - " << square_size << "x" << square_size << endl;
	cout << "Size set, running..." << endl;
	cout << "Your square: " << endl;
	cout << endl;
	for (int i = 0; i < square_size; i++)
		cout << "*";
	cout << endl;
	for (int i = 1; i < square_size - 1; i++)
	{
		cout << "*";
		for (int i = 1; i < square_size - 1; i++)
			cout << " ";

		cout << "*" << endl;
	}
	for (int i = square_size; i > 0; i--)
		cout << "*";
	cout << endl;

	auto end = chrono::high_resolution_clock::now();
	cout << "End code execution... " << endl;
	chrono::duration<float> duration = end - start;
	cout << "Duration: " << duration.count() << " s." << endl;
}

