#include "stdafx.h"
#include "iostream"
using namespace std;
int yi = 0;
const int N=500;

int YiginaKoy(int veri,int Yveri [])
{
	if(yi>=N)
	{
		puts("Yığın Dolu!!");
		return 1;
	}
	else
	{
		Yveri[yi] = veri;
		cout<<"Yığına eklenen veri : "<<Yveri[yi]<<endl;
		yi++;
	}
}
//Yığının bir üstündeki veriyi almak için gerekli fonksiyon.
int YigindanAl(int Yveri[])
{
	if(yi<=0)
	{
		puts("\nYığın Boş! ");
		return 1;
	}
	else
	{
		cout<<"Yığından alınan değer : "<<Yveri[--yi]<<endl;
	}
}

void temizle()
{
	yi = 0;
}

void yazdir(int Yveri[])
{
	for (int i = yi-1; i >=0; i--)
	{
		printf("\n %d",Yveri[i]);
	}
	cout<<"\n"<<endl;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"tr");
	int yigin[N];
	YiginaKoy(5,yigin);
	YiginaKoy(6,yigin);
	YiginaKoy(7,yigin);
	yazdir(yigin);
	YigindanAl(yigin);
	yazdir(yigin);
	YiginaKoy(9,yigin);
	YiginaKoy(23,yigin);
	yazdir(yigin);
	YigindanAl(yigin);
	YiginaKoy(1,yigin);
	YiginaKoy(2,yigin);
	YiginaKoy(8,yigin);
	yazdir(yigin);




	
	system("pause");
	return 0;
}

