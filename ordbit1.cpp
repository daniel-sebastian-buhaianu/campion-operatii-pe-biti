#include <fstream>
#define MAXBITS 32
using namespace std;
ofstream fout("ordbit1.out");
int ordbit1(int);
int main()
{
	fout << ordbit1(10) << '\n';
	fout << ordbit1(8) << '\n';
	fout << ordbit1(4) << '\n';
	fout << ordbit1(1) << '\n';
	fout.close();
	return 0;
}
int ordbit1(int n)
{
	// determina numarul de ordine al celui mai semnificativ bit de 1 al lui n
	int i;
	for (i = MAXBITS-1; (n & (1 << i)) == 0; i--);
	return i;
}
