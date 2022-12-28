#pragma once
#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Converter {
private:
	vector<int> a;
	int iriginal;
public:
	Converter(string str, int original) {
		iriginal = original;
		for (int i = 0; i < str.length(); i++) {
			a.push_back(charToInt(str[i]));
		}
	}
	int charToInt(char c) {
		if (c >= '0' && c <= '9' && (c - '0') < iriginal) {
			return c - '0';
		}
		else {
			if (c >= 'A' && c <= 'Z' && (c - 'A') < iriginal) {
				return c - 'A' + 10;
			}
			else {
				return -1;
			}
		}
	}
	char intToChar(int c) {
		if (c >= 0 && c <= 9) {
			return c + '0';
		}
		else {
			return c + 'A' - 10;
		}
	}
	int nextNumber(int final) {
		int temp = 0;
		for (int i = 0; i < a.size(); i++) {
			temp = temp * iriginal + a[i];
			a[i] = temp / final;
			temp = temp % final;
		}
		return temp;
	}
	bool zero() {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != 0) {
				return false;
			}
		}
		return true;
	}
	string convertToS(int final) {
		vector<int> b;
		int size = 0;
		do {
			b.push_back(nextNumber(final));
			size++;
		} while (!zero());

		string sTemp = "";
		for (int i = b.size() - 1; i >= 0; i--) {
			sTemp += intToChar(b[i]);
		}
		return sTemp;
	}

};

string ConvertFATA(string str, int first, int second);