#include <iostream>

using namespace std;
 //ОДНОМЕРНЫЕ МАССИВЫ
//#define mass1  //Ввод массива целых чисел, после чего выводит количество ненулевых элементов.
//#define mass2  //Выводит минимальный элемент введенного с клавиатуры массива целых чисел.
//#define mass3  //Вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива целых чисел.
//#define mass4  //Вычисляет среднее арифметическое элементов массива без учета минимального и максимального элемента.
//#define mass5  //Вычисляет среднюю (за неделю) температуру воздуха.
//#define mass6  //Проверяет, находится ли введенное с клавиатуры число в массиве.
//#define mass7  //Проверяет, представляют ли элементы введенного с клавиатуры массива возрастающую последовательность.
//#define mass8  //Программа, которая вычисляет, сколько раз введенное с клавиатуры число встречается в массиве.
//#define mass9  //Программа, которая проверяет, есть ли во введенном с клавиатуры массиве элементы с одинаковым значением.
//#define mass10 //Программа, которая методом прямого выбора сортирует по возврастанию введенный с клавиатуры одномерный массив.
//#define mass11 //Программа, которая методом обмена ("пузырька") сортирует по убыванию введенный с клавиатуры одномерный массив.
//#define mass12 //Программа, которая объединяет два упорядоченных по возрастанию массива в один, также упорядоченный массив. 
//#define mass13 //Программа, которая, используя метод бинарного поиска, выполняет поиск в упорядоченном по возрастанию массиве.
//#define mass14 //Программа, которая определяет количество учеников в классе, чей рост превышает средний.


int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef mass1
	int arr[5];
	int scor = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "a [" << i << "]->"; cin >> arr[i];
		if (arr[i] != 0) scor++;
	}
	cout << "В массиве " << scor << " ненулевых элементов";
#endif mass1

#ifdef mass2
	int arr[5];
	cout << "Введите в одной строке элементы массива (5 целых чисел) и нажмите Enter" << endl;
	for (int i = 0; i < 5; i++) cin >> arr[i];
	int min = arr[0];
	for (int i = 0; i < 5; i++) if (arr[i] < min) min = arr[i];
	cout << "Минимальный элемент массива: " << min;
#endif mass2

#ifdef mass3
	int arr[10];
	int null = 0;
	int sum = 0;
	double aref = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		if (arr[i] != 0) null++;
		sum += arr[i];
	}
	aref = sum / null;
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Колличество ненулевых элементов: " << null << endl;
	cout << "Среднее арифметическое ненулевых элементов:" << aref << endl;
#endif mass3

#ifdef mass4
	int arr[10];
	float aref;
	int sum = 0;
	cout << "Введите массив (10 целых чисел в одной строке) " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 10; i++) if (arr[i] < min) min = arr[i];
	for (int i = 0; i < 10; i++) if (arr[i] > max) max = arr[i];

	aref = (sum - min - max) / 8;
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива: " << max << endl;
	cout << "Среднее арифм. без учета min и max значений: " << aref << endl;

#endif mass4

#ifdef mass5
	int arr[7];
	int sum = 0;
	int avereg;
	for (int i = 0; i < 7; i++)
	{

		if (i == 0)
		{
			cout << "Понедельник ->"; cin >> arr[i];
		}
		if (i == 1)
		{
			cout << "Вторник ->"; cin >> arr[i];
		}
		if (i == 2)
		{
			cout << "Среда ->"; cin >> arr[i];
		}
		if (i == 3)
		{
			cout << "Четверг ->"; cin >> arr[i];
		}
		if (i == 4)
		{
			cout << "Пятница ->"; cin >> arr[i];
		}
		if (i == 5)
		{
			cout << "Суббота ->"; cin >> arr[i];
		}
		if (i == 6)
		{
			cout << "Воскресенье ->"; cin >> arr[i];
		}
		sum += arr[i];
	}
	avereg = sum / 7;
	cout << "Средняя температура за неделю :" << (double)avereg << endl;
#endif mass5 

#ifdef mass6
	int arr[10];
	int number;
	bool per = false;
	cout << "Введите числа [10] :" << endl;
	for (int i = 0; i < 10; i++) cin >> arr[i];

	cout << "Введите число которое хотите найти в массиве:" << endl;
	cin >> number;
	for (int i = 0; i < 10; i++)
	{
		if (number == arr[i]) per = true;
	}

	if (per == true) cout << "Число есть в массиве" << endl;
	else cout << "Числа нет в массиве" << endl;

#endif mass6

#ifdef mass7
	int arr[10];
	cout << "Введите последовательность цифр:" << endl;
	for (int i = 0; i < 10; i++) cin >> arr[i];

	int buffer = arr[0];
	bool check = false;

	for (int i = 0; i < 10; i++)
	{
		if (buffer <= arr[i]) buffer = arr[i];
		else check = true;
	}
	if (check == false) cout << "Последовательность возрастающая" << endl;
	else cout << "Последовательность обычная" << endl;

#endif mass7

#ifdef mass8
	int arr[10];
	int counter = 0;
	int number;
	cout << "Введите последовательность:" << endl;

	for (int i = 0; i < 10; i++) cin >> arr[i];

	cout << "Введите число для поиска:" << endl;
	cin >> number;

	for (int i = 0; i < 10; i++) if (number == arr[i]) counter++;
	
	cout << "Число встречается " << counter << " раз(a)" << endl;
#endif mass8

#ifdef mass9
	int arr[10];
	bool counter = false;
	int number;
	cout << "Введите последовательность:" << endl;

	for (int i = 0; i < 10; i++) cin >> arr[i];

	int buffer = arr[1];

	for (int i = 0; i < 10; i++)
	{
		if (buffer == arr[i]) counter = true;
		buffer = arr[i];
	}
	if (counter == true) cout << "Есть одинаковые значения" << endl;
	else cout << "Одинкаовых значений нет" << endl;
	
#endif mass9
	
#ifdef mass10
	const int size = 10;
	int arr[size];
	int buffer;
	int min;

	cout << "Введите последовательность:" << endl;

	for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0; i < size-1; i++)
	{
		min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;
		
				buffer = arr[i];
				arr[i] = arr[min];
				arr[min] = buffer;
	}

	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
#endif mass10

#ifdef mass11
	int const size = 10;
	int arr[size];

	cout << "Заполните массив [10]: " << endl;
	for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0; i < size; i++)
	{
		int buffer = 0;

		for (int j = 0; j < size-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				buffer = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = buffer;	
			}
		}
	}

	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
#endif mass11
	
#ifdef mass12
	int const size = 5;
	int const size1 = 10;
	int arr[size];
	int brr[size];
	int crr[size1];
	int k = 0;
	int l = 0;

	cout << "Введите в одной строке элементы первого массива" << endl
		<< "(5 целых чисел) ->"; for (int i = 0; i < size; i++) cin >> arr[i];
	cout << "Введите в одной строке элементы второго массива" << endl
		<< "(5 целых чисел) ->"; for (int i = 0; i < size; i++) cin >> brr[i];

	for (int i = 0; i < size1; i += 2)
	{
		crr[i] = arr[k];
		k++;
	}

	for (int i = 1; i < size1; i += 2)
	{
		crr[i] = brr[l];
		l++;
	}
	cout << "Массив — результат:" << endl;
	for (int i = 0; i < size1; i++) cout << crr[i] << "\t";

#endif mass12

#ifdef mass13
	int const size = 10;
	int arr[size];
	int key;
	int l = 0;
	int r = 9;
	bool flag = false;
	int mid;
	
	cout << "Введите массив из 10 элементов:" << endl;
	for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0; i < size - 1; i++)
	{
		int buffer = 0;
		int min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;

		buffer = arr[i];
		arr[i] = arr[min];
		arr[min] = buffer;
	}

	for (int i = 0; i < size; i++) cout << arr[i] << "\t";

	cout << endl;
	cout << "Введите ключ:" << endl;
	cin >> key;

	while ((l<=r) && (flag != true))
	{
		mid = (r + l) / 2;
		if (arr[mid] == key) flag = true;
	    if (arr[mid] > key) r = mid - 1;
		else l = mid + 1;
	}

	if (flag) cout << "Индекс элемента в массиве " << key << " равен: " << mid << endl;
	else cout << "Такого элемента в массиве нет: " << endl;

#endif mass13

#ifdef mass14
	int const size = 6;
	int arr[size];
	double sum = 0;
	double avereg;
	int scor = 0;

	cout << "Введите рост (см) и нажмите Enter: "<< endl;

	for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0; i < size; i++) sum += arr[i];

	avereg = sum / 6;

	for (int i = 0; i < size; i++) if (arr[i] > avereg) scor++;
	
	cout << "Средний рост: " << avereg << " см." << endl;
	cout << "У " << scor << " человек рост превышает средний" << endl;
#endif mass14
}