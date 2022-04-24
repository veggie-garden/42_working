// 다른 파일에 선어되어 있어서 우선 선언해줘야 함
void	rush(int x, int y);

// 문자열을 숫자로 바꿔주는 함수
int		ft_atoi(char *argv)
{
	int		i;

	i = 0;
	// null값을 만나기 이전까지 돌음
	while (*argv)
	{
		// 만약 문자열이 0~9사이의 문자라면 변환
		if (*argv >= '0' && *argv <= '9')
		{
			// 자리수 증가
			i *= 10;
			// 문자에서 숫자로 변환
			i += *argv - '0';
			// 다음 문자로
			argv++;
		}
		// 만약 문자열이 0~9 사이가 아니라면 바로 0을 리턴
		else
			return (0);
	}
	// 정상적인 문자열이라면 변환된 숫자 i를 리턴
	return (i);
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	// 만약 인자의 수가 3개가 아니라면 바로 리턴
	if (argc != 3)
		return (0);
	// 정상적으로 들어오면 ft_atoi 실행
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	// ft_atoi를 실행했을 때 0이 하나라도 들어오면 실행 안됨
	rush(x, y);
}
