#include <iostream>

using namespace std;
 //���������� �������
//#define mass1  //���� ������� ����� �����, ����� ���� ������� ���������� ��������� ���������.
//#define mass2  //������� ����������� ������� ���������� � ���������� ������� ����� �����.
//#define mass3  //��������� ������� �������������� ��������� ��������� ���������� � ���������� ������� ����� �����.
//#define mass4  //��������� ������� �������������� ��������� ������� ��� ����� ������������ � ������������� ��������.
//#define mass5  //��������� ������� (�� ������) ����������� �������.
//#define mass6  //���������, ��������� �� ��������� � ���������� ����� � �������.
//#define mass7  //���������, ������������ �� �������� ���������� � ���������� ������� ������������ ������������������.
//#define mass8  //���������, ������� ���������, ������� ��� ��������� � ���������� ����� ����������� � �������.
//#define mass9  //���������, ������� ���������, ���� �� �� ��������� � ���������� ������� �������� � ���������� ���������.
//#define mass10 //���������, ������� ������� ������� ������ ��������� �� ������������ ��������� � ���������� ���������� ������.
//#define mass11 //���������, ������� ������� ������ ("��������") ��������� �� �������� ��������� � ���������� ���������� ������.
//#define mass12 //���������, ������� ���������� ��� ������������� �� ����������� ������� � ����, ����� ������������� ������. 
//#define mass13 //���������, �������, ��������� ����� ��������� ������, ��������� ����� � ������������� �� ����������� �������.
//#define mass14 //���������, ������� ���������� ���������� �������� � ������, ��� ���� ��������� �������.


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
	cout << "� ������� " << scor << " ��������� ���������";
#endif mass1

#ifdef mass2
	int arr[5];
	cout << "������� � ����� ������ �������� ������� (5 ����� �����) � ������� Enter" << endl;
	for (int i = 0; i < 5; i++) cin >> arr[i];
	int min = arr[0];
	for (int i = 0; i < 5; i++) if (arr[i] < min) min = arr[i];
	cout << "����������� ������� �������: " << min;
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
	cout << "����� ��������� �������: " << sum << endl;
	cout << "����������� ��������� ���������: " << null << endl;
	cout << "������� �������������� ��������� ���������:" << aref << endl;
#endif mass3

#ifdef mass4
	int arr[10];
	float aref;
	int sum = 0;
	cout << "������� ������ (10 ����� ����� � ����� ������) " << endl;
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
	cout << "����������� ������� �������: " << min << endl;
	cout << "������������ ������� �������: " << max << endl;
	cout << "������� �����. ��� ����� min � max ��������: " << aref << endl;

#endif mass4

#ifdef mass5
	int arr[7];
	int sum = 0;
	int avereg;
	for (int i = 0; i < 7; i++)
	{

		if (i == 0)
		{
			cout << "����������� ->"; cin >> arr[i];
		}
		if (i == 1)
		{
			cout << "������� ->"; cin >> arr[i];
		}
		if (i == 2)
		{
			cout << "����� ->"; cin >> arr[i];
		}
		if (i == 3)
		{
			cout << "������� ->"; cin >> arr[i];
		}
		if (i == 4)
		{
			cout << "������� ->"; cin >> arr[i];
		}
		if (i == 5)
		{
			cout << "������� ->"; cin >> arr[i];
		}
		if (i == 6)
		{
			cout << "����������� ->"; cin >> arr[i];
		}
		sum += arr[i];
	}
	avereg = sum / 7;
	cout << "������� ����������� �� ������ :" << (double)avereg << endl;
#endif mass5 

#ifdef mass6
	int arr[10];
	int number;
	bool per = false;
	cout << "������� ����� [10] :" << endl;
	for (int i = 0; i < 10; i++) cin >> arr[i];

	cout << "������� ����� ������� ������ ����� � �������:" << endl;
	cin >> number;
	for (int i = 0; i < 10; i++)
	{
		if (number == arr[i]) per = true;
	}

	if (per == true) cout << "����� ���� � �������" << endl;
	else cout << "����� ��� � �������" << endl;

#endif mass6

#ifdef mass7
	int arr[10];
	cout << "������� ������������������ ����:" << endl;
	for (int i = 0; i < 10; i++) cin >> arr[i];

	int buffer = arr[0];
	bool check = false;

	for (int i = 0; i < 10; i++)
	{
		if (buffer <= arr[i]) buffer = arr[i];
		else check = true;
	}
	if (check == false) cout << "������������������ ������������" << endl;
	else cout << "������������������ �������" << endl;

#endif mass7

#ifdef mass8
	int arr[10];
	int counter = 0;
	int number;
	cout << "������� ������������������:" << endl;

	for (int i = 0; i < 10; i++) cin >> arr[i];

	cout << "������� ����� ��� ������:" << endl;
	cin >> number;

	for (int i = 0; i < 10; i++) if (number == arr[i]) counter++;
	
	cout << "����� ����������� " << counter << " ���(a)" << endl;
#endif mass8

#ifdef mass9
	int arr[10];
	bool counter = false;
	int number;
	cout << "������� ������������������:" << endl;

	for (int i = 0; i < 10; i++) cin >> arr[i];

	int buffer = arr[1];

	for (int i = 0; i < 10; i++)
	{
		if (buffer == arr[i]) counter = true;
		buffer = arr[i];
	}
	if (counter == true) cout << "���� ���������� ��������" << endl;
	else cout << "���������� �������� ���" << endl;
	
#endif mass9
	
#ifdef mass10
	const int size = 10;
	int arr[size];
	int buffer;
	int min;

	cout << "������� ������������������:" << endl;

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

	cout << "��������� ������ [10]: " << endl;
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

	cout << "������� � ����� ������ �������� ������� �������" << endl
		<< "(5 ����� �����) ->"; for (int i = 0; i < size; i++) cin >> arr[i];
	cout << "������� � ����� ������ �������� ������� �������" << endl
		<< "(5 ����� �����) ->"; for (int i = 0; i < size; i++) cin >> brr[i];

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
	cout << "������ � ���������:" << endl;
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
	
	cout << "������� ������ �� 10 ���������:" << endl;
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
	cout << "������� ����:" << endl;
	cin >> key;

	while ((l<=r) && (flag != true))
	{
		mid = (r + l) / 2;
		if (arr[mid] == key) flag = true;
	    if (arr[mid] > key) r = mid - 1;
		else l = mid + 1;
	}

	if (flag) cout << "������ �������� � ������� " << key << " �����: " << mid << endl;
	else cout << "������ �������� � ������� ���: " << endl;

#endif mass13

#ifdef mass14
	int const size = 6;
	int arr[size];
	double sum = 0;
	double avereg;
	int scor = 0;

	cout << "������� ���� (��) � ������� Enter: "<< endl;

	for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0; i < size; i++) sum += arr[i];

	avereg = sum / 6;

	for (int i = 0; i < size; i++) if (arr[i] > avereg) scor++;
	
	cout << "������� ����: " << avereg << " ��." << endl;
	cout << "� " << scor << " ������� ���� ��������� �������" << endl;
#endif mass14
}