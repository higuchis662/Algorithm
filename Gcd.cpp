
int Gcd(int x, int y)//���[�N���b�h�ݏ��@
{
	if (y == 0)	return x;
	else return Gcd(y, x % y);
}