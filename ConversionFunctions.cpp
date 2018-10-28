#include "ConFuncDecleration.h"
#include <math.h>
#include <string>
using namespace std;

__int64 BinToDec(__int64 num)
{
	__int64 decimalNumber = 0, i = 0, remainder;
	while (num != 0)
	{
		remainder = num % 10;
		num /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}

__int64 BinToOct(__int64 num)
{
	__int64 octNumber = 0, decNumber = 0, i = 0;

	while (num != 0)
	{
		decNumber += (num % 10) * pow(2, i);
		++i;
		num /= 10;
	}

	i = 1;

	while (decNumber != 0)
	{
		octNumber += (decNumber % 8) * i;
		decNumber /= 8;
		i *= 10;
	}

	return octNumber;
}

__int64 OctToBin(__int64 num)
{
	__int64 decNumber = 0, i = 0, binNumber = 0;

	while (num != 0)
	{
		decNumber += (num % 10) * pow(8, i);
		++i;
		num /= 10;
	}

	i = 1;

	while (decNumber != 0)
	{
		binNumber += (decNumber % 2) * i;
		decNumber /= 2;
		i *= 10;
	}

	return binNumber;
}

__int64 OctToDec(__int64 num)
{
	__int64 decNumber = 0, i = 0, DW;
	while (num != 0)
	{
		DW = num % 10;
		num /= 10;
		decNumber += DW * pow(8, i);
		++i;
	}
	return decNumber;
}

__int64 DecToBin(__int64 num)
{
	__int64 binNumber = 0;
	__int64 remainder, i = 1;

	while (num != 0)
	{
		remainder = num % 2;

		num /= 2;
		binNumber += remainder * i;
		i *= 10;
	}
	return binNumber;
}

__int64 DecToOct(__int64 num)
{
	__int64 octNumber = 0, i = 1, DW;
	while (num != 0)
	{
		DW = num % 8;
		num /= 8;
		octNumber += DW * i;
		i *= 10;
	}
	return octNumber;
}


__int64 HexToBin(__int64 num)
{
	return 0;
}
__int64 HexToOct(__int64 num)
{
	return 0;
}
__int64 HexToDec(__int64 num)
{
	return 0;
}