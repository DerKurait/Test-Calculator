#include "Co.h"

string ConvertFATA(string str, int first, int second)
{
	string str2 = "";
	string str1;
	for (int i = 0; i <= str.length(); i++)
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str2 += str[i];
		}
		else
		{
			if (str2 != "")
			{
				Converter conv(str2, first);

				str1 += conv.convertToS(second) + str[i];
			}
			else
				str1 += str[i];
			str2 = "";
		}
	}

	return str1;
}