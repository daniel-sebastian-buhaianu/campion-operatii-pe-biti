#include <fstream>
using namespace std;
ifstream fin("maxputere2.in");
ofstream fout("maxputere2.out");
int maxputere2_1(int);
int maxputere2_2(int);
int main()
{
	int n;
	fin >> n;
	fin.close();
	fout << maxputere2_1(n) << '\n';
	fout << maxputere2_2(n) << '\n';
	fout.close();
	return 0;
}
int maxputere2_1(int x)
{
	// determina cea mai mare putere a lui 2 care il divide pe x
	int i;
	for (i = 0; (x & (1 << i)) == 0; i++);
	return 1 << i;
}
int maxputere2_2(int x)
{
	// determina cea mai mare putere a lui 2 care il divide pe x
	return x^(x & (x-1));
}
