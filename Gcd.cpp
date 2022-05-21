
int Gcd(int x, int y)//ユークリッド互除法
{
	if (y == 0)	return x;
	else return Gcd(y, x % y);
}