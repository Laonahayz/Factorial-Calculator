#include<iostream>
using namespace std;

void calculateFactorial()
{
	int num;
	int sum = 1;
	int i = 1;
	cout << "請輸入階層數。" << endl;
	cin >> num;

	while (i <= num)
	{
		sum = sum * i;
		i++;
	}

	cout << num << "! = " << sum << endl;
}

void calculateInverseFactorialSum()
{
	int num_1;
	int i = 1;
	int a = 1;            
	float sum = 0.0;      

	cout << "請輸入階層數。" << endl;
	cin >> num_1;
	while (i <= num_1)
	{
		a = a * i;
		sum = sum + (1.0 / a);
		i++;
	}
	cout << "階層倒數總和約等於 " << sum + 1 << endl;
}

void calculateExponentialSeries()
{
	int num_1;
	int i = 1;
	int a = 1;            
	int b = 1;
	float sum = 1.0;

	cout << "請輸入階層數。" << endl;
	cin >> num_1;
	while (i <= num_1)
	{
		a = a * i;
		b = b * num_1;
		sum = sum + (b * 1.0) / a;
		i++;
	}
	cout << "e^" << num_1 << " 近似值約等於 " << sum << endl;
}

int main() {
	int choice;
	do {
		cout << "\n=== 數學計算選單 ===" << endl;
		cout << "1. 計算階層 (n!)" << endl;
		cout << "2. 計算階層倒數總和" << endl;
		cout << "3. 計算 e^x 的展開總和" << endl;
		cout << "0. 離開程式" << endl;
		cout << "請輸入選項：";
		cin >> choice;

		switch (choice) {
		case 1:
			calculateFactorial();
			break;
		case 2:
			calculateInverseFactorialSum();
			break;
		case 3:
			calculateExponentialSeries();
			break;
		case 0:
			cout << "已離開程式。" << endl;
			break;
		default:
			cout << "無效選項，請重新輸入。" << endl;
		}
	} while (choice != 0);

	return 0;
}
