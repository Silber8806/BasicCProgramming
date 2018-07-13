void itoa(int n, char s[])
{
	int i, sign;

	if (( sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while (( n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int trim(char s[])
{
	int n;

	for (n = strlen(s) -1; n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
		s[n+1] = '\0';
		return n;
}