#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<ctime.>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	short int exit;
	short int N;
	do
	{
		cout << "�������� ����� �������" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*1.	���� ��� ����� ����� A � B (A < B). ����� ��� ����� �����, ������������� ����� ������� ������� (�� ������� ���� ��� �����), � ������� �� ��������, � ����� ���������� N ���� �����*/
			int A;
			int B;
			int C;
			cout << "������� ����� �" << endl;
			cin >> A;
			cout << "������� ����� �" << endl;
			cin >> B;
			if (A < B)
			{
				B -= 1;
				for (B;B > A;B--)
					cout << B << endl;
			}
		}
		break;
		case 2:
		{
			/*2.	���� ����� ����� N (> 2) � ��� ������������ ����� �� �������� ���: A, B (A < B).
			������� F(X) ������ �������� F(X) = 1 � sin(X). ����� �������� ������� F � N �������������� ������,
			���������� ��������� ������� [A, B]: F(A), F(A + H), F(A + 2H),... , F(B).  */
		}
		break;
		case 4:
		{
			/*4.	������ ����������� ����� �� 10 �� N. ������� �������� ������� ���� �����.*/
			int n;
			int i;
			float b;
			float c;
			cout << "������� �����" << endl;
			cin >> n;
			if (n > 10)
			{
				for (i = 10;i <= n;i++)
				{

					if ((i % 2 != 0) && (i % 5 == 0))
						cout << i << endl;
				}
			}

		}
		break;
		case 5:
		{
			/*5.	������� �������� ����� �� 11 �� 99.*/
			int i;
			for (i = 11;i <= 99;i++)
			{
				cout << i << " ^ 2 = " << pow(i, 2) << endl;
			}
		}
		break;
		case 6:
		{
			/*1.	���� ������������������ �� n ������������ �����, ������������ � �������������� �����.
			����������, ����� ���������� ������������� ����� �������� � ������ ������������������. �������� �������� �� ������������*/
			int n;
			int summ = 0;
			do
			{
				cout << "������� ������������� �����" << endl;
				cin >> n;
				summ = summ + 1;

			} while (n < 0);
			cout << "���� ������� " << summ - 1 << "������������� �����" << endl;

		}
		break;
		case 7:
		{
			/*2.	���� ������������������ ����� ����� 1 2 18 , , ..., , a a a
			� ������ ������� �������� ��������� ������ ����� ����� ���������.
			���������� ���������� ����� ��������� ������������������. �������� �������� �� ������������*/
			int chislo;
			int summ = 0;
			int chislo1;
			int summ1 = 0;
			int n = 0;
			int m;
			srand(time(0));
			cout << "������� ������ ����� ������������������" << endl;
			cin >> chislo1;

			do
			{
				cout << "������� ����� ������������������" << endl;
				cin >> chislo;
				summ ++;
				n=summ;
				
			} while ((chislo1 == chislo) && (summ <= 18));
			for (n + 1;n <= 19-summ;n++)
			{
				int i = chislo + rand() % 9;
				cout << i << endl;
			}
			cout << summ << "����� ���������" << endl;
			cout << "����� �������" << n-1 << endl;

		}
		break;
		default:
			cout << "��� ������ �������" << endl;
			break;
		}

		cout << "�� ������ ����������? 1-yes; 2-No;" << endl;
		cin >> exit;
	} while (exit == 1);
}

