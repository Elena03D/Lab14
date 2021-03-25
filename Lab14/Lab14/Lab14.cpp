#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
using namespace std;
int main() {
	setlocale(0,"RUS");
    srand((unsigned)time(0));
    const int x=10;
    struct Data{
        int day;
        int month;
        int year;
    }count[x];
    //вводим данные
    cout<<"enter"<<endl<< "day, month, year "<<endl;//через пробел (12 12 12)
    for (int i=0; i<x; i++)
	{
        count[i].day=rand()%30+1;
        count[i].month=rand()%12+1;
        count[i].year=rand()%99;
        //cin>>d[i].day>>m[i].month>>y[i].year;
    }
    for (int i=0; i<x; i++)
	{
        cout<<count[i].day<<"\t"<<count[i].month<<"\t"<<count[i].year<<"\n";
    }
    //записываем данные в файл
    ofstream fout("file3.dat", ios::binary|ios::out);
    ofstream fin;
    for (int i=0; i<x; i++)
	{
        fout<<count[i].day<<count[i].month<<count[i].year<<endl;
    }
    fout.close();
    cout<<endl;
	cout<<"Зима"<<endl;
    for (int i=0; i<x; i++)
	{
        if(count[i].month==12||count[i].month==1||count[i].month==2)
		{
            cout<<count[i].day<<"\t"<<count[i].month<<"\t"<<count[i].year<<"\n";
        }
    }
	cout<<"Весна"<<endl;
    for (int i=0; i<x; i++)
	{
        if(count[i].month==3||count[i].month==4||count[i].month==5)
		{
            cout<<count[i].day<<"\t"<<count[i].month<<"\t"<<count[i].year<<"\n";
        }
    }
	cout<<"Лето"<<endl;
    for (int i=0; i<x; i++)
	{
        if(count[i].month==6||count[i].month==7||count[i].month==8)
		{
            cout<<count[i].day<<"\t"<<count[i].month<<"\t"<<count[i].year<<"\n";
        }
    }
	cout<<"Осень"<<endl;
    for (int i=0; i<x; i++)
	{
        if(count[i].month==9||count[i].month==10||count[i].month==11)
		{
            cout<<count[i].day<<"\t"<<count[i].month<<"\t"<<count[i].year<<"\n";
        }
    }
    system("pause");
}