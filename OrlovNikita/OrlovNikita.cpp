#include <iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;
#define random(a,b)(a+rand()%(b-a+1))
#define task 2
void task8() {
	int* array = new int[5];
	int k;
	for (int i = 0; i < 5; i++) {
		array[i] = random(1, 10);
		cout << array[i] << " ";
	}
	cout << endl;
	cin >> k;
	
	int* buf = new int[5-1];
	
	cout << endl;
	for (int i = k; i < 5; i++) {
		array[i] = array[i + 1];
	}
	
	for (int i = 0; i < 5; i++) {
		buf[i] = array[i];
	}
	delete[]array;
	array = buf;
	for (int i = 0; i < 5 - 1; i++) {
		cout << array[i] << " ";
	}
}

int task13() {
	string str;
	ifstream in("qwe.txt");
	string a;
	int k=0;
	int i = 0;
	while (getline(in, str)) {
		i++;
		k += size(str);
		
	}
	return k;
	
}

bool task12() {
	string str1 = "qwertygopspodvpoaopkvopakdopvkdaopkvad";
	string str2 = "qwe";
	int k = 0;
	for (int i = 0; i < size(str1); i++) {
		for (int j = 0; j < size(str2); j++) {
			if (str1[i] == str2[j]) {
				return j;
			}
			  
		}
	}
	return -1;
	
}

struct Auto
{
	string tsvet;
	string model;

};

int main()
{
	srand(time(NULL));
#if task==1//
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a + b + c + d) / 4;
#elif task==2
	int i=0;
	while() {

	}
	
	
	
#elif task==4//
	int a;
	cin >> a;
	int i = 0;
	while (a > 0) {
		i++;
		a /= 10;
	}
	cout << i;
#elif task==3//
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#elif task==5//
	int a, b;
	cin >> a >> b;
	int array[5];
	for (int i = 0; i < 5; i++) {
		array[i] = random(a, b);
		cout << array[i] << " ";
	}
#elif task==6
	int** a = new int* [5];
	for (int i = 0; i < 5; i++) {
		a[i] = new int[i+1];
	}
	int summ = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = random(1, 10);

			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int asd[5];
	int k = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			asd[k] += a[i][j] + a[i][j + 1];
		}
		cout << "stroka " << i << asd[k] << endl;
		k++;
	}

#elif task==8//
	task8();
#elif task==11
	int b;
	cin >> b;

	int** a = new int* [2];
	
		for (int i = 0; i < 2; i++) {
			a[i] = new int[i + 1];
		}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for()
#elif task ==12
	cout<<task12();

#elif task==13//
	cout<<task13();
#endif 

	

}
