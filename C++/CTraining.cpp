#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


void cout_arr(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
}
//CAU 1
int find_sum(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i];
	cout << "\n\nTong cua mang A[]: ";
	return sum;
}

//CAU 2
bool check_increase(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(a[i] > a[i + 1])
			return false;
	}
	return true;
}
//CAU 3
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void arr_increase(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (a[j] > a[j + 1]) 
                swap(a[j], a[j + 1]);
        }
    }
	cout_arr(a, n);
}

void arr_decrease(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (a[j] < a[j + 1]) 
                swap(a[j], a[j + 1]);
        }
    }
	cout_arr(a, n);
}

//CAU 4
int count_0(int a[], int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
			count += 1;
	}
	
	return count;
}

//CAU 5
int find_odd(int a[], int n)
{
	int sumOdd = 0;
	cout << "\n\nMang so le cua A[] la: ";
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 != 0)
		{
			cout << a[i] << " ";
			sumOdd += a[i];
		}
	}
	cout << "\nTong cua mang le: ";
	return sumOdd;
}

//CAU 6
int find_even(int a[], int n)
{
	int sumEven = 0;
	cout << "\n\nMang so chan cua A[] la: ";
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
		{
			cout << a[i] << " ";
			sumEven += a[i];
		}
	}
	cout << "\nTong cua mang chan: ";
	return sumEven;
}

//CAU 7
int find_max(int a[], int n)
{
	int max = a[0];
	for(int i = 0; i < n - 1; i++)
	{
		if(max <= a[i])
			max = a[i];
	}
	cout << "\n\nSo lon nhat cua mang A[]: ";
	return max;
}

int find_min(int a[], int n)
{
	int min = a[0];
	for(int i = 0; i < n - 1; i++)
	{
		if(min >= a[i])
			min = a[i];
	}
	cout << "\n\nSo nho nhat cua mang A[]: ";
	return min;
}
//CAU 8
void del(int a[], int &n, int k) 
{
    if (k >= 0 && k < n) 
	{
        for (int i = k; i < n - 1; i++) 
            a[i] = a[i + 1];
        n--;
        cout << "Da xoa phan tu tai vi tri thu " << k << endl;
    }
	else 
        cout << "Vi tri xoa khong hop le" << endl;
}
//CAU 9
bool check_exist(int a[], int n)
{
	int num;
	cout << "\n\nNhap phan tu muon kiem tra xem co ton tai trong mang hay khong: ";
	cin >> num;
	for(int i = 0; i < n; i++)
	{
		if(num == a[i])
			return true;
	}
	return false;
}

//CAU 10
int main()
{
	int a[] = {0,9,5,3,1,-1,2,4,6,1,0,9,5,4,-7,-9,5,-3,-2,8,0};
	int n = sizeof(a) / sizeof(a[0]);
	int aCopy[n];
	int k;
	copy(a, a+n, aCopy);
	cout << "Mang A[] bao gom: ";
	cout_arr(a, n);
	//Cau2
	if(check_increase(a, n)) cout << "\n\nMang tang dan.";
	else cout << "\n\nMang khong tang dan.";
	//Cau1
	cout << find_sum(a, n);
	//Cau3
	cout << "\n\nMang sap xep tang: ";
	arr_increase(a, n);
	cout << "\nMang sap xep giam: ";
	arr_decrease(a, n);
	//Cau4
	cout << "\n\nSo '0' xuat hien " << count_0(a, n) << " lan.";
	//Cau5
	cout << find_odd(a, n) ;
	//Cau6
	cout << find_even(a, n);
	//Cau7
	cout << find_max(a, n);
	cout << find_min(a, n);
	//Cau8
	cout << "\n\nNhap vi tri can xoa(0 -> 20): ";
	cin >> k;
	del(aCopy, n, k);
	cout << "Mang sau khi xoa: "; 
	cout_arr(aCopy, n);
	//Cau9
	if(check_exist(a, n)) cout << "Ton tai.\n";
	else cout << "Khong ton tai.\n";

	return 0;
}
