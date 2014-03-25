/// insertion.cpp : Defines the entry point for the console application.
///

#include "stdafx.h"
#include "stdio.h"
#include "iostream"

using namespace std;

/**
@function Merge
��� ������� ������� ��� ������� � ���� � ������� ���������� (����� �������) 
@param A - ��������� �� ����������� ������
@param first - ������ ����� �����
@param last - ������ ����� �����
**/
void Merge(int *A, int first, int last)
{
	int middle; /// ������������� ���������� ��� �������� ��������
	int start;///����������� ���������� ��� ����� ����� �������
	int final;/// ������������� ���������� ��� ������ ����� �������
	int j; /// ������������� ��������
	int *mas=new int[100];/// �������� ���������� �������
	middle=(first+last)/2; ///���������� �������� ��������
	start=first; ///������ ����� �����
	final=middle+1; ///������ ������ �����
	for(j=first; j<=last; j++) /// ���� ��� ����������� �� �������
	if ((start<=middle) && ((final>last) || (A[start]<A[final])))/// ������� ������ �������� �� ��������� ������ �� ����� �����
	{
		mas[j]=A[start];/// ������ �������� �� ��������� ������ �� ����� �����
		start++;/// ������� � ���������� �������� ����� �����
	}
	else ///������� ������ �������� �� ��������� ������ �� ������ �����
	{
		mas[j]=A[final];/// ������ �������� �� ��������� ������ �� ������ �����
		final++;/// ������� � ���������� �������� ������ �����
	}
	///����������� ���������� � ������
	for (j=first; j<=last; j++) A[j]=mas[j];
	delete[]mas;/// ������������ ������
};

/**
@function Merge
��� ������� �����������, ��������������� ��������� ������ �� ��� ����� � ��������� �� ���� �� ���������
@param A - ��������� �� ����������� ������
@param first - ������ ����� �����
@param last - ������ ����� �����
**/

void MergeSort(int *A, int first, int last)
{
	{
	if (first<last)/// ��������, �� �������� �� ��� ������ �� ��������� ��������
	{
		MergeSort(A, first, (first+last)/2); ///���������� ����� �����
		MergeSort(A, (first+last)/2+1, last); ///���������� ������ �����
		Merge(A, first, last); ///������� ���� ������
	}
	}
};


/**
@function _tmain
������� �������
@param srgc
@param argv[] 
**/
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int i, n;
	int *A=new int[100];
	cout<<"������ ������� > "; cin>>n;
	for (i=1; i<=n; i++)
	{ cout<<i<<" ������� > "; cin>>A[i];}
	MergeSort(A, 1, n); ///����� ����������� ���������
	cout<<"������������� ������: "; ///����� �������������� �������
	for (i=1; i<=n; i++) cout<<A[i]<<" ";
	delete []A;
	system("pause>>void");
	return 0;
}


