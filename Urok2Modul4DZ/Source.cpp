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
		cout << "выберите номер задани€" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*1.	ƒаны два целых числа A и B (A < B). Ќайти все целые числа, расположенные между данными числами (не включа€ сами эти числа), в пор€дке их убывани€, а также количество N этих чисел*/
			int A;
			int B;
			int C;
			cout << "введите число ј" << endl;
			cin >> A;
			cout << "введите число ¬" << endl;
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
			/*2.	ƒано целое число N (> 2) и две вещественные точки на числовой оси: A, B (A < B).
			‘ункци€ F(X) задана формулой F(X) = 1 Ц sin(X). Ќайти значени€ функции F в N равноотсто€щих точках,
			образующих разбиение отрезка [A, B]: F(A), F(A + H), F(A + 2H),... , F(B).  */
		}
		break;
		case 4:
		{
			/*4.	«адано натуральные числа от 10 до N. ¬ывести нечетные кратные п€ти числа.*/
			int n;
			int i;
			float b;
			float c;
			cout << "введите число" << endl;
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
			/*5.	¬ывести квадраты чисел от 11 до 99.*/
			int i;
			for (i = 11;i <= 99;i++)
			{
				cout << i << " ^ 2 = " << pow(i, 2) << endl;
			}
		}
		break;
		case 6:
		{
			/*1.	ƒана последовательность из n вещественных чисел, начинающа€с€ с отрицательного числа.
			ќпределить, какое количество отрицательных чисел записано в начале последовательности. ”словный оператор не использовать*/
			int n;
			int summ = 0;
			do
			{
				cout << "введите отрицательное число" << endl;
				cin >> n;
				summ = summ + 1;

			} while (n < 0);
			cout << "Ѕыло введено " << summ - 1 << "отрицательных чисел" << endl;

		}
		break;
		case 7:
		{
			/*2.	ƒана последовательность целых чисел 1 2 18 , , ..., , a a a
			в начале которой записано несколько равных между собой элементов.
			ќпределить количество таких элементов последовательности. ”словный оператор не использовать*/
			int chislo;
			int summ = 0;
			int chislo1;
			int summ1 = 0;
			int n = 0;
			int m;
			srand(time(0));
			cout << "введите первое число последовательности" << endl;
			cin >> chislo1;

			do
			{
				cout << "введите число последовательности" << endl;
				cin >> chislo;
				summ ++;
				n=summ;
				
			} while ((chislo1 == chislo) && (summ <= 18));
			for (n + 1;n <= 19-summ;n++)
			{
				int i = chislo + rand() % 9;
				cout << i << endl;
			}
			cout << summ << "чисел совпадают" << endl;
			cout << "всего введено" << n-1 << endl;

		}
		break;
		default:
			cout << "нет такого задани€" << endl;
			break;
		}

		cout << "вы хотите продолжить? 1-yes; 2-No;" << endl;
		cin >> exit;
	} while (exit == 1);
}

