#include <iostream>
using namespace std;
int main(){
	int i, j, n, bilangan [12], kiri, kanan, tengah, temp, target;
	bool ketemu = false;
	cout<<"Masukan jumlah data : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Bilangan ke - ["<<i<<"] : ";
		cin>>bilangan[i];
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++){
			if(bilangan [j] > bilangan[j=1])
			{
				temp=bilangan[j];
				bilangan[j]=bilangan [j+1];
				bilangan[j+1]=temp;
			}
		}
	}
	cout<<"Data yang telah diurutkan adalah : ";
	for(i=0; i<n; i++)
	{
		cout<<bilangan[i]<<" ";
	}
	cout<<endl;
	cout<<"Masukan bilangan yang dicari : ";
	cin>>target;
	kiri=0;
	kanan = n-1;
	while (kiri<=kanan)
	{
		tengah = (kiri + kanan)/2;
		if(target == bilangan [tengah])
		{
			ketemu=true;
			break;
		}
		else if (target < bilangan [tengah])
		{
			kanan = tengah - 1;
		}
		else
		{
			kiri = tengah + 1;
		}
	}
	if (ketemu == true)
	cout<<"Bilangan ditemukan !";
	else
	cout<<"Bilangan tidak ditemukan !!";
	cin.get();
	return 0;
}
