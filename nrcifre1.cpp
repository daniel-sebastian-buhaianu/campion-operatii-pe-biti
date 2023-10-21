#include <fstream>
using namespace std;
ifstream fin("nrcifre1.in");
ofstream fout("nrcifre1.out");
int nrcifre1(int);
int main()
{
	int n;
	fin >> n;
	fin.close();
	fout << nrcifre1(n);
	fout.close();
	return 0;
}
int nrcifre1(int x)
{
	// determina numarul de cifre de 1 din reprezentarea binara a lui x
	int nr = 0;
	do
	{
		x = x & (x-1);
		nr++;
	} while (x);
	return nr;
}
