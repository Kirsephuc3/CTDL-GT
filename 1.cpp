#include <iostream>
#include <cmath>
using namespace std;
#define MAX 100
struct DS {
	int a[MAX];
	int n;
	void nhapDS(DS& ds)
	{
		for (int i = 0; i < ds.n; i++)
		{
			cout << "Nhap a[" << i << "]=";
			cin >> ds.a[i];
		}
	}
	void XuatDS(DS& ds)
	{
		cout << " Xuat Mang: " << endl;
		for (int i = 0; i < ds.n; i++)
			cout << ds.a[i] << " ";
		cout << endl;
	}
	int TimDS(DS ds, int x)
	{
		for (int i = 0; i < ds.n; i++)
			if (ds.a[i] == x)
				return i;
		return -1;
	}
	void Them_Dau(DS& ds, int x)
	{
		ds.n++;
		for (int i = ds.n - 1; i >= 0; i--)
		{
			ds.a[i] = ds.a[i - 1];
		}
		ds.a[0] = x;
		// 1 2 3 4 5 n=5
		// n = 6
		// duyet tu duoi len  
		// 1 2 3 4 5 5(ai = ai-1)
		//1 2 3 4 4 5
		// ==> x 1 2 3 4 5
	}
	void Them_Cuoi(DS& ds, int x)
	{
		ds.a[ds.n] = x;
		ds.n++;
	}
	void Xoa_dau(DS& ds)
	{

		for (int i = 0; i < ds.n; i++)
		{
			ds.a[i] = ds.a[i + 1];
		}
		ds.n--;
		// 1 2 3 4 5 
		// a0=a1
		// 2 2 3 4 5
		// 2 3 3 4 5
		// 2 3 4 4 5
		// 2 3 4 5 5
		// i-- => 2 3 4 5
	}
	void Xoa_Cuoi(DS& ds)
	{
		ds.n--;
	}
	void Chen_vt(DS& ds, int tmp, int x)
	{
		for (int i = ds.n; i >= tmp; i--)
		{
			ds.a[i] = ds.a[i - 1];
		}
		ds.a[tmp] = x;
		ds.n++;
	}
	void Xoa_vt(DS& ds, int x)
	{
		for (int i = x; i < ds.n; i++) {
			ds.a[i] = ds.a[i + 1];
		}
		ds.n--;
	}
	int Tim_Xoa(DS& ds, int x)
	{
		int i = 0;
		for (i; i < ds.n; i++)
		{
			if (ds.a[i] == x)
				break;
		}
		if (i < ds.n)
		{
			ds.n = ds.n - 1;
			for (int j = i; j < ds.n; j++)
				ds.a[j] = ds.a[j + 1];
		}
		return ds.n;
	}
	void Xoa_Trung(DS& ds, int x)
	{
		int tmp = 0;
		int i, j;
		for (i = 0; i < ds.n; i++)
		{
			if (ds.a[i] == x)
			{
				for (int j = i; j < ds.n - 1; j++)
				{
					ds.a[j] = ds.a[j + 1];

				}
				tmp++;
				ds.n--;
				i--;
			}
		}
	}
};
//void nhapDS(DS &ds) 
//{                           
//  for (int i = 0; i < ds.n; i++)
//    {
//    cout << "Nhap a[" << i << "]=";
//    cin >> ds.a[i];
//    }
//}
//void XuatDS(DS &ds) 
//{
//	cout << " Xuat Mang: " << endl;
//	for (int i = 0; i < ds.n; i++)
//		cout <<ds.a[i] << " ";
//	cout << endl;
//}
//int TimDS(DS ds, int x)
//{
//	for (int i = 0; i < ds.n; i++)
//		if (ds.a[i] == x)
//			return i;
//	return -1;
//}
//void Them_Dau(DS &ds, int x)
//{
//	ds.n++;
//	for (int i = ds.n - 1; i >= 0; i--)
//	{
//		ds.a[i] = ds.a[i - 1];
//	}
//	ds.a[0] = x;
//	// 1 2 3 4 5 n=5
//	// n = 6
//	// duyet tu duoi len  
//	// 1 2 3 4 5 5(ai = ai-1)
//	//1 2 3 4 4 5
//	// ==> x 1 2 3 4 5
//}
//void Them_Cuoi(DS &ds, int x)
//{
//	ds.a[ds.n] = x;
//	ds.n++;
//}
//void Xoa_dau(DS& ds)
//{
//
//	for (int i = 0; i < ds.n; i++)
//	{
//		ds.a[i] = ds.a[i + 1];
//	}
//	ds.n--;
//	// 1 2 3 4 5 
//	// a0=a1
//	// 2 2 3 4 5
//	// 2 3 3 4 5
//	// 2 3 4 4 5
//	// 2 3 4 5 5
//	// i-- => 2 3 4 5
//}
//void Xoa_Cuoi(DS& ds)
//{
//	ds.n--;
//}
//void Chen_vt(DS& ds, int tmp, int x)
//{
//	for (int i = ds.n; i >= tmp; i--) 
//	{
//		ds.a[i] = ds.a[i - 1];
//	}
//	ds.a[tmp] = x;
//	ds.n++;
//}
//void Xoa_vt(DS& ds, int x)
//{
//	for (int i = x; i < ds.n; i++) {
//		ds.a[i] = ds.a[i + 1];
//	}
//	ds.n--;
//}
//int Tim_Xoa(DS& ds, int x)
//{
//	int i = 0;
//	for ( i; i < ds.n; i++)
//	{
//		if (ds.a[i] == x)
//			break;
//	}
//	if (i < ds.n)
//	{
//		ds.n = ds.n - 1;
//		for (int j = i; j < ds.n; j++)
//			ds.a[j] = ds.a[j + 1];
//	}
//	return ds.n;
//}
//void Xoa_Trung(DS& ds, int x)
//{
//	int tmp = 0;
//	int i, j;
//	for ( i=0 ;i < ds.n; i++)
//	{
//		if (ds.a[i] == x)
//		{
//			for (int j = i; j < ds.n-1; j++)
//			{
//				ds.a[j] = ds.a[j + 1];
//
//			}
//			tmp++;
//			ds.n--;
//			i--;
//		}
//	}
//}
int main()
{
	DS ds;
	int a[MAX];
	int n;
	int x,vt;
	bool in = false;
	int choose;
	do
	{
		system("cls");
		cout << "\t***MENU***\n";
		cout << "\t1.Nhap danh sach\n";
		cout << "\t2.Xuat danh sach\n";
		cout << "\t3.Tim mot phan tu trong danh sach\n";
		cout << "\t4.Them 1 phan tu vao dau danh sach\n";
		cout << "\t5.Them 1 phan tu vao cuoi danh sach\n";
		cout << "\t6.Xoa phan tu dau danh sach\n";
		cout << "\t7.Xoa phan tu cuoi danh sach\n";
		cout << "\t8.Xoa phan tu tai vi tri i trong danh sach \n";
		cout << "\t9.Them phan tu tai vi tri i trong danh sach\n";
		cout << "\t10.Tim va xoa phan tu dau tien trong danh sach\n";
		cout << "\t11.Tim 1 phan tu va xoa tat ca cac phan tu trong danh sach\n";
		cout << "\t12.Thanks you very much \n";
		cout << "\t Moi ban chon chuc nang: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			do
			{
				cout << " Nhap phan tu n: ";
				cin >> ds.n;
				if (ds.n<1 || ds.n>MAX)
					cout << " Nhap sai !!! Nhap lai: ";
			} while (ds.n<1 || ds.n>MAX);
			ds.nhapDS(ds);
			in = true;
			break;
		case 2:
			if (in)
				ds.XuatDS(ds);
			else
				cout << " Vui long nhap mang ";
			break;
		case 3:
			if (in)
			{
				cout << " Nhap gia tri can tim: ";
				cin >> x;
				int vitri = ds.TimDS(ds, x);
				if (vitri != -1)
				{
					cout << x << " co trong ds tai vi tri " << vitri << endl;
				}
				else
					cout << x << " khong co trong danh sach " << endl;
			}
			else
				cout << " Chua nhap thong tin";
				break;
		case 4:
			if (in)
			{
				cout << "Nhap gia tri can them: ";
				cin >> x;
				ds.Them_Dau(ds, x);
			}
			else
				cout << " Chua nhap thong tin ";
				break;
		case 5:
			if (in)
			{
				cout << "Nhap gia tri can them: ";
				cin >> x;
				ds.Them_Cuoi(ds, x);
			}
			else
				cout << " Chua nhap thong tin" << endl;
				break;
		case 6:
			if (in)
			{
				ds.Xoa_dau(ds);
			}
			else
				cout << " Chua nhap thong tin" << endl;
				break;
		case 7:
			if (in)
			{
				ds.Xoa_Cuoi(ds);
			}
			else
				cout << " Chua nhap thong tin" << endl;
				break;
		case 8:
			if (in)
			{
				cout << "nhap vao vi tri can xoa = ";
				cin >> x;
				ds.Xoa_vt(ds, x);
			}
			else
				cout << "Khong thong cong " << endl;
			break;
		case 9:
			if (in)
			{
				cout << " Nhap gia tri can chen: ";
				cin >> x;
				cout << " Nhap vi tri can chen:";
				cin >> vt;
				ds.Chen_vt(ds, vt, x);
				
			}
			else
				cout << "chua nhap thong tin " << endl;
			break;
		case 10:
			if (in)
			{
				cout << " Nhap phan tu can xoa: ";
				cin >> x;
				int n = ds.Tim_Xoa(ds, x);
			}
			else
				cout << " Chua nhap thong tin" << endl;
				break;
		case 11:
			if (in)
			{
				cout << " Nhap gia tri muon xoa trong mang: ";
				cin >> x;
				ds.Xoa_Trung(ds, x);
			}
			else
				cout << " Chua nhap thong tin" << endl;
				break;
		case 12:
			if (in)
			{
				cout << "Thoat " << endl;

			}
				break;
		default:
			cout << "Loi chuong trinh ! Vui long nhap lai" << endl;
			break;
		}
			system("pause");
    } while (choose >= 1 && choose <= 12);
		return 0;
}