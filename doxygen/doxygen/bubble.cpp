/// doxygen.cpp : Defines the entry point for the console application.
///

#include "stdafx.h"
#include "stdio.h"
#include "iostream"

using namespace std;


/**
@function Merge
��� ������� ��������� ������ � ������� ���������� ������� ��������
@param _mas - ��������� �� ����������� ������
@param _n - ������ �������
**/

int* bubble(int *_mas, int _n)///���� ������� ����������
{
	for (int i=0; i <(_n-1); i ++)///���� ���������� ��������
	{
		for (int j=0; j<(_n-1); j++)///���� �������� ������� �� ����������
		 {
			 if (_mas[j] >_mas[j+1]) ///�������� �� ��������
			{
				int tmp = _mas[j]; ///������������� ��������� ����������
				 _mas[j] = _mas[j+1];
				_mas[j+1] = tmp;/// ����� ����
			}
		}
	}
	return _mas;
}


/**
@function _tmain
������� �������
@param srgc
@param argv[] 
**/
int _tmain(int argc, _TCHAR* argv[])
{
	int n =15;
	int *mas = new int[n]; 
	for (int i= 0; i<n; i++)
	{
		mas[i] = rand()%100-1;
	}

	mas = bubble(mas, n);
	for (int i= 0; i<n; i++)
	{
		cout << mas[i] << "   ";
	}

	
	return 0;
}





