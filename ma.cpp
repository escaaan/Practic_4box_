#include<iostream>
using namespace std;
void Task1_block4() {
	int num, minnum = 100500, maxnum = -100500;
	cout << "Введите последовательность целых чисел (для завершения введите -1): ";
	while (true) {
		cin >> num;
		if (num == -1) {
			break;
		}
		if (num < minnum) {
			minnum = num;
		}
		if (num > maxnum) {
			maxnum = num;
		}
	}
	cout << "Минимальное число: " << minnum << endl;
	cout << "Максимальное число: " << maxnum << endl;
}
//Задание 2 (блок 4)
void Task2_block4() {
	int number, originalNumber, reversedNumber = 0, remainder;
	cout << "Введите целое положительное число: ";
	cin >> number;
	originalNumber = number;
	while (number != 0) {
		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	if (originalNumber == reversedNumber) {
		cout << originalNumber << " является палиндромом" << std::endl;
	}
	else {
		cout << originalNumber << " не является палиндромом" << std::endl;
	}
}
//Задание 3 (блок 4)
void Task3_block4() {
	float a;
	cout << "Сколько литров выпивает Павел: ";
	cin >> a;
	for (int i = 0; ; i++) {
		if (a > 1) {
			a = (a / 2) - 1;
			i++;
		}
		else {
			cout << "\nДни в поездке - " << i - 2 << endl;
			break;
		}
	}
}
//Задание 4 (блок 4)
void Task4_block4() {
	int N;
	cout << "Введите целое число N: ";
	cin >> N;
	cout << "Делители числа " << N << ": ";
	for (int i = 1; i <= N; ++i) {
		if (N % i == 0) {
			cout << i << " ";
		}
	}
}
void Task5_block4() {
	int num, osnovanie;
	cout << "Введите целое положительное число в десятичной системе: ";
	cin >> num;
	cout << "Введите основание системы счисления от 2 до 9: ";
	cin >> osnovanie;
	int result[32];
	int index = 0;
	while (num > 0) {
		result[index] = num % osnovanie;
		num /= osnovanie;
		index++;
	}
	cout << "Число в системе с основанием " << osnovanie << ": ";
	for (int i = index - 1; i >= 0; --i) {
		cout << result[i];
	}
}
void Task6_block4() {
	int n;
	cin >> n;
	int even_product = 1, odd_product = 1;

	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 0) {
			even_product *= digit;
		}
		else {
			odd_product *= digit;
		}
		n /= 10;
	}

	if (even_product == 1 && odd_product == 1) {
		cout << "1 1";
	}
	else {
		if (even_product == 1) {
			cout << "1 ";
		}
		else {
			cout << even_product << " ";
		}
		if (odd_product == 1) {
			cout << "1";
		}
		else {
			cout << odd_product;
		}
	}
}
void Task7_block4() {
	int N;
	cin >> N;
	for (int i = 1; i < N; ++i) {
		cout << "Урожай растет. Прошло " << i << " д." << endl;
	}
	cout << "Урожай созрел!" << endl;
}
void Task8_block4() {
	int N;
	cin >> N;
	int a = 0, b = 1, m = 1;

	while (b < N) {
		int next = a + b;
		a = b;
		b = next;
		m++;
	}

	if (b == N) {
		cout << m;
	}
	else {
		cout << "Число не является числом Фибоначчи.";
	}
}
void Task9_block4() {
	int a, b, o;
	bool f;
	cout << "Введите два числа:\n";
	cin >> a;
	cin >> b;
	do {
		f = true;
		cout << "Введите операцию:\n";
		cin >> o;
		switch (o) {
		case 0:
			cout << "Программа завершена.";
			break;
		case 1:
			cout << a + b;
			break;
		case 2:
			cout << a - b;
			break;
		case 3:
			cout << a * b;
			break;
		case 4:
			if (b != 0) {
				cout << a / b;
			}
			else cout << "Делить на ноль нельзя!\n";
			f = false;
			break;
		default:
			cout << "Неверная команда!\n";
			f = false;
			break;
		}
	} while (!f);
}
void Task11_block4() {
	int N;
	cin >> N;
	while (N >= 0)
	{
		cout << N << endl;
		N--;
	}
}
void Task12_block4() {
	int number;
	cout << "Введите целое положительное число N: ";
	cin >> number;
	for (int i = 1; i <= number; i++) {
		int cubes_of_numbers = i * i * i;
		cout << "Куб числа " << i << " равен: " << cubes_of_numbers << '\n';
	}
}
void TaskIndivid13_block4() {
	int N;
	cout << "Введите целое неотрицательное число: ";
	cin >> N;
	for (int i = 1; i <= N; i += 2) {
		cout << i << "\t";
	}
	cout << endl;
}
void Task14_block4() {
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << sum;
}
void Task15_block4() {
	cout << "Операторы организации языка с++\n";
	int N;
	cout << "Введите целое положительное число N: ";
	cin >> N;

	int product = 1;
	bool found = false;
	for (int i = 1; i < N; i++) {
		if (i % 6 == 0 && i % 9 != 0) {
			product *= i;
			found = true;
		}
	}
	if (found) {
		cout << "Произведение чисел от 1 до N, делящихся на 6, но не делящихся на 9: " << product << endl;
	}
	else {
		cout << "Такие числа не найдены, произведение равно 1" << endl;
	}
}
void Task16_block4() {
	int N;
	cout << "Введите целое положительное число N: ";
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0 && i % 10 == 9) {
			sum += i;
		}
	}
	if (sum > 0) {
		cout << "Сумма чисел от 1 до " << N << ", которые делятся на 3 и оканчиваются на 9: " << sum << endl;
	}
	else {
		cout << "Такие числа не найдены" << endl;
	}
}
void Task17_block4() {
	int k = 0;
	int x;
	cin >> x;
	if (x%1000==763){
		cout << "Число оканчивается на 763" << endl;
	}
	else {
		cout << "число должно быть 4-х значным" << endl;
	}
}
void Task18_block4() {
	int n, n2;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> n2;
		if (n2 / 100 == 6) {
			while (n2 != 0) {
				int c = n2 % 10;
				sum += c;
				n2 /= 10;
			}
		}
	}
	cout << "SUm= " << sum << endl;
}
void Task19_block4() {
	int n, m;
	cin >> n >> m;
	for (int i = n; i < m; i++) {
		if (i % 10 == (i % 100) / 10 && (i % 100) / 10 == i % 10) {
			cout << i << " " << endl;
		}
	}
}
void Task20_block4() {
	int N;
	cin >> N; // Ввод значения N пользователем

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << j << " "; // Вывод чисел от 1 до i
		}
		cout <<endl; // Переход на новую строку после каждой итерации
	}
}
void Task21_block4() {
	int D;
	cin >> D;
	for (int i = 100; i < 300; i++) {
		if (i % D == 0) {
			cout << i << " ";
		}
	}
}
void Task22_block4() {
	int x;
	double sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> x;
		sum += x;
	}
	printf ("%.2f\n", sum);

}
bool isPrime(int number) {
	if (number <= 1) return false;
	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0) return false;
	}
	return true;
}
void Task23_block4() {
		int N;
		cin >> N;

		for (int i = 2; i <= N + 5; ++i) {
			if (isPrime(i)) {
			cout << i << " ";
			}
		}cout << endl;
}
bool isPerfectSquare(int product) {
	for (int i = 1; i * i <= product; ++i) {
		if (i * i == product) {
			return true;
		}
	}
	return false;
}
void Task24_block4() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		for (int j = i; j <= N; ++j) {
			if (isPerfectSquare(i * j)) {
				cout << i << ", " << j << endl;
			}
		}
	}
}
void Task25_block4() {
	int N;
	cin >> N;

	for (int x = 1; x <= 1000; ++x) {
		for (int y = x; y <= 1000; ++y) {
			if (y * y - x * x == N) {
				cout << "(" << x << ", " << y << ")" <<endl;
			}
		}
	}
}
void Task26_block4() {
	int N, S;
	cin >> N >> S;

	for (int x = 1; x <= 500; ++x) {
		for (int y = x; y <= 500; ++y) {
			if (x * y == N && x + y == S) {
				cout << "(" << x << ", " << y << ")" << endl;
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	Task26_block4();
}