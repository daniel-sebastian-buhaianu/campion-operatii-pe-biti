#include <fstream>
using namespace std;
ifstream fin("putere2.in");
ofstream fout("putere2.out");
bool putere2(int);
int main()
{
	int n;
	fin >> n;
	fin.close();
	if (putere2(n))
	{
		fout << "DA";
	}
	else
	{
		fout << "NU";
	}
	fout.close();
	return 0;
}
bool putere2(int x)
{
	// verifica daca x este o putere a lui 2
	return (x & (x-1)) == 0;
}
