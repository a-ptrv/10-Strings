#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	char str[10]="Hello";
	cout << str;
	cin >> str;
	cout << str;

	/*char str[8];
	cin >> str;
	cout << str<<endl;
	*/
}
	/*char str[8]{ 'H','e','l','l','o' };
	for (int i = 0; i < 5; i++) cout << str[i];
	cout << endl;*/
	/*
	char str[8] = "Hello"; ќбъ€вление инициализаци€ массива строкой, а не посимвольно
	char str[] = "Hello"; тоже самое но без объ€влени€ размера. размер выбираетс€ автоматом ра размеру строки
	*/