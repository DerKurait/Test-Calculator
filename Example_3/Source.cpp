#include"Head.h"


int priority(char operation) {
	if (operation == '+' || operation == '-') return 1;
	if (operation == '*' || operation == '/') return 2;
	if (operation == '^') return 3;
	if (operation == 'u' || operation == 'x') return 4;
	if (operation == 's' || operation == 'c' || operation == 't' || operation == 'o') return 4;
	if (operation == 'v' || operation == 'b' || operation == 'g' || operation == 'm') return 4;
	if (operation == 'h' || operation == 'j' || operation == 'k' || operation == 'l') return 4;
	if (operation == 'q' || operation == 'w' || operation == 'y' || operation == 'r') return 4;
	if (operation == 'n' || operation == 'd' || operation == 'e' || operation == 'f') return 4;
	return 0;
}


bool Calculate(stack <lexeme>& StackNums, stack <lexeme>& StackOpers, lexeme& obj) {

	double x, y, z;
	x = StackNums.top().value; StackNums.pop();

	switch (StackOpers.top().type) {

	case '+':
		y = StackNums.top().value;
		StackNums.pop();
		StackOpers.pop();
		z = x + y;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case '-':
		y = StackNums.top().value;
		StackNums.pop();
		StackOpers.pop();
		z = y - x;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case '*':
		y = StackNums.top().value;
		StackNums.pop();
		StackOpers.pop();
		z = x * y;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case '/':
		if (x == 0) {
			return false;
		}
		else {
			y = StackNums.top().value;
			StackNums.pop();
			StackOpers.pop();
			z = y / x;
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case '^':
		y = StackNums.top().value;
		if ((double)((int)x) != x) {
			if (y < 0) {
				return false;
			}
		}
		StackNums.pop();
		StackOpers.pop();
		z = pow(y, x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'u':
		if (x < 0) {
			return false;
		}
		StackOpers.pop();
		z = sqrt(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 's': //sinr
		StackOpers.pop();
		z = round(sin(x) * 100000000) / 100000000;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'c': //cosr
		StackOpers.pop();
		z = round(cos(x) * 100000000) / 100000000;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 't': //tanr
		if (round(cos(x) * 100000000) / 100000000 == 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = round(tan(x) * 100000000) / 100000000;
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}


	case 'o': //cotr
		if (round(sin(x) * 100000000) / 100000000 == 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = round(1 / tan(x) * 100000000) / 100000000;
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'v': //sind
		StackOpers.pop();
		z = round(sin(x * 2 * p / 360) * 100000000) / 100000000;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'b': //cosd
		StackOpers.pop();
		z = round(cos(x * 2 * p / 360) * 100000000) / 100000000;
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'g': //tand
		if (round(cos(x * 2 * p / 360) * 100000000) / 100000000 == 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = round(tan(x * 2 * p / 360) * 100000000) / 100000000;
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}


	case 'm': //cotd
		if (round(sin(x * 2 * p / 360) * 100000000) / 100000000 == 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = round(1 / tan(x * 2 * p / 360) * 100000000) / 100000000;
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'e': //exp
		StackOpers.pop();
		z = exp(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'x': //abs
		StackOpers.pop();
		z = abs(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'n': //ln
		if (x <= 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = log(x);
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'd': //lg
		if (x <= 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = log(x) / log(10);
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'q': //asin
		if (x < (-1) || x > 1) {
			return false;
		}
		else {
			StackOpers.pop();
			z = asin(x);
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'w': //acos
		if (x < (-1) || x > 1) {
			return false;
		}
		else {
			StackOpers.pop();
			z = acos(x);
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}

	case 'y': //atan
		StackOpers.pop();
		z = atan(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'r': //acot
		StackOpers.pop();
		z = p / 2 - atan(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'f': //n!
		if (x < 0) {
			return false;
		}
		if ((double)((int)x) != x) {
			return false;
		}
		else {
			StackOpers.pop();
			for (int i = 1; i <= x; i++)
			{
				if (i == 1)
					obj.value = 1;
				obj.value = obj.value * i;
			}
			obj.type = '0';
			StackNums.push(obj);
			break;
		}


	case 'h': //sinh
		StackOpers.pop();
		z = sinh(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'j': //cosh
		StackOpers.pop();
		z = cosh(x);
		obj.value = z;
		obj.type = '0';
		StackNums.push(obj);
		break;

	case 'k': //tanh
		if (cosh(x) == 0) {
			return false;
		}
		else {
			StackOpers.pop();
			z = tanh(x);
			obj.value = z;
			obj.type = '0';
			StackNums.push(obj);
			break;
		}



	default:
		return false;
	}
	return true;
}

double CALC(string str) {


	bool negative = true;
	char character; double number; lexeme obj;
	stack <lexeme> StackNums;
	stack <lexeme> StackOpers;



	stringstream sstr(str);

	while (true) {
		character = sstr.peek();
		//cout << character;

		if (character == ' ') {
			sstr.ignore();
			continue;
		}

		if (character == '\377') break;

		if (character == 'p') { //pi
			obj.value = p;
			obj.type = '0';
			StackNums.push(obj);
			negative = false;
			//cout << StackNums.top().value << endl;
			sstr.ignore();
			continue;
		}

		if (character == '-' && negative == true) { //-n
			obj.value = -1; obj.type = '0';
			StackNums.push(obj);
			obj.value = 0; obj.type = '*';
			StackOpers.push(obj);
			negative = false;
			sstr.ignore();
			continue;
		}

		if (character == '(') { // (
			negative = true;
			obj.value = 0;
			obj.type = character;
			StackOpers.push(obj);
			sstr.ignore();
			//cout << StackOpers.top().type << endl;
			continue;
		}

		if (character == ')') { // )
			while (StackOpers.top().type != '(') {
				if (Calculate(StackNums, StackOpers, obj) == false) return 0;
				else continue;
			}
			StackOpers.pop();
			sstr.ignore();
			continue;
		}

		if ((character >= '0' && character <= '9')) { //some number
			sstr >> number;
			obj.value = number;
			obj.type = '0';
			StackNums.push(obj);
			negative = false;
			//cout << StackNums.top().value << endl;
			continue;
		}

		if (character == '+' || (character == '-' && negative == false) || character == '*' || character == '/' || character == '^') { //+, -, *, /, ^
			if (StackOpers.empty()) {
				obj.value = 0;
				obj.type = character;
				StackOpers.push(obj);
				sstr.ignore();
				//cout << StackOpers.top().type << endl;
				continue;
			}
			if (!(StackOpers.empty()) && priority(character) > priority(StackOpers.top().type)) {
				obj.value = 0;
				obj.type = character;
				StackOpers.push(obj);
				sstr.ignore();
				//cout << StackOpers.top().type << endl;
				continue;
			}
			if (!(StackOpers.empty()) && priority(character) <= priority(StackOpers.top().type)) {
				if (Calculate(StackNums, StackOpers, obj) == false) return 0;
			}
			continue;
		}

		if (character == 'e') { //exp
			char func[1];
			for (int i = 0; i < 1; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}

			if (func[0] == 'e') {
				obj.value = 0;
				obj.type = 'e';
				StackOpers.push(obj);
				continue;
			}
		}

		if (character == 'm') { //mod
			char func[3];
			for (int i = 0; i < 3; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}

			if (func[0] == 'm' && func[1] == 'o' && func[2] == 'd') {
				obj.value = 0;
				obj.type = 'x';
				StackOpers.push(obj);
				continue;
			}
		}

		if (character == 's' || character == 'c' || character == 't') { //sqrt, sin, cos, tan, cot, sinh, cosh, tanh, coth
			char func[4];
			for (int i = 0; i < 4; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}

			if (func[0] == 's' && func[1] == 'q' && func[2] == 'r' && func[3] == 't') {
				obj.value = 0;
				obj.type = 'u';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 's' && func[1] == 'i' && func[2] == 'n' && func[3] == 'r') {
				obj.value = 0;
				obj.type = 's';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 's' && func[3] == 'r') {
				obj.value = 0;
				obj.type = 'c';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 't' && func[1] == 'a' && func[2] == 'n' && func[3] == 'r') {
				obj.value = 0;
				obj.type = 't';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 't' && func[3] == 'r') {
				obj.value = 0;
				obj.type = 'o';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 's' && func[1] == 'i' && func[2] == 'n' && func[3] == 'd') {
				obj.value = 0;
				obj.type = 'v';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 's' && func[3] == 'd') {
				obj.value = 0;
				obj.type = 'b';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 't' && func[1] == 'a' && func[2] == 'n' && func[3] == 'd') {
				obj.value = 0;
				obj.type = 'g';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 't' && func[3] == 'd') {
				obj.value = 0;
				obj.type = 'm';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 's' && func[1] == 'i' && func[2] == 'n' && func[3] == 'h') {
				obj.value = 0;
				obj.type = 'h';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 's' && func[3] == 'h') {
				obj.value = 0;
				obj.type = 'j';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 't' && func[1] == 'a' && func[2] == 'n' && func[3] == 'h') {
				obj.value = 0;
				obj.type = 'k';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'c' && func[1] == 'o' && func[2] == 't' && func[3] == 'h') {
				obj.value = 0;
				obj.type = 'l';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}
		}

		if (character == 'l') { //ln, lg
			char func[2];
			for (int i = 0; i < 2; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}

			if (func[0] == 'l' && func[1] == 'n') {
				obj.value = 0;
				obj.type = 'n';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'l' && func[1] == 'g') {
				obj.value = 0;
				obj.type = 'd';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}
		}

		if (character == 'a') { //acos, asin, atan, acot
			char func[4];
			for (int i = 0; i < 4; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}

			if (func[0] == 'a' && func[1] == 's' && func[2] == 'i' && func[3] == 'n') {
				obj.value = 0;
				obj.type = 'q';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'a' && func[1] == 'c' && func[2] == 'o' && func[3] == 's') {
				obj.value = 0;
				obj.type = 'w';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'a' && func[1] == 't' && func[2] == 'a' && func[3] == 'n') {
				obj.value = 0;
				obj.type = 'y';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}

			if (func[0] == 'a' && func[1] == 'c' && func[2] == 'o' && func[3] == 't') {
				obj.value = 0;
				obj.type = 'r';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}
		}

		if (character == 'f') { //n!
			char func[4];
			for (int i = 0; i < 4; i++) {
				character = sstr.peek();
				func[i] = character;
				sstr.ignore();
			}
			if (func[0] == 'f' && func[1] == 'a' && func[2] == 'c' && func[3] == 't') {
				obj.value = 0;
				obj.type = 'f';
				StackOpers.push(obj);
				//cout << StackOpers.top().type << endl;
				continue;
			}
		}



		else {
			return 0;
		}
	}
	while (!(StackOpers.empty())) {
		if (Calculate(StackNums, StackOpers, obj) == false) {
			return 7734;
		}
		else {
			continue;
		}
	}

	return StackNums.top().value;

	return 0;
}


/*
int main() {

	cout << CALC("fact(60)");
}
*/






std::string& Convert_String_to_string(System::String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;

}

System::String^ Convert_string_to_String(std::string& os, System::String^ s) {
	s = gcnew System::String(os.c_str());

	return s;

}



string ATDConvert(string str, double x) {
	string str11;
	for (int i = 0; i <= str.length(); i++)
		if (str[i] != 'x')
			str11 += str[i];
		else
			str11 += to_string(x);

	return str11;
}

void BuildGraph(string str)
{
	RenderWindow window(VideoMode(600, 600), "Graph");

	int x0 = 600 / 2;
	int y0 = 600 / 2;

	CircleShape point(1.f);
	point.setFillColor(Color::Blue);

	int o1 = -10;
	int o2 = 10;
	double count = 100;
	int mass = ((o1) * (-1) + o2) * count;
	int scale = 30;

	RectangleShape line[40];
	for (int i = 0; i < 40; i++) {
		line[i].setSize(Vector2f(1, 20));
		line[i].setFillColor(Color::Black);

		if (i < 20) {
			if (i < 10)
				line[i].setPosition(x0 - (i + 1) * scale, y0 - 10);
			else
				line[i].setPosition(x0 + (i - 9) * scale, y0 - 10);
		}
		else {
			line[i].setRotation(90);
			if (i < 30)
				line[i].setPosition(x0 + 10, y0 + (i - 30) * scale);
			else
				line[i].setPosition(x0 + 10, y0 + (i - 29) * scale);
		}
	}

	RectangleShape OsX(Vector2f(600, 1));
	OsX.setFillColor(Color::Black);
	OsX.setPosition(0, y0);

	RectangleShape OsY(Vector2f(1, 600));
	OsY.setFillColor(Color::Black);
	OsY.setPosition(x0, 0);

	RectangleShape strel[4];
	for (int i = 0; i < 4; i++) {
		strel[i].setSize(Vector2f(1, 25));
		strel[i].setFillColor(Color::Black);

		if (i < 2)
			strel[i].setPosition(x0, 0);
		else
			strel[i].setPosition(600, y0);
	}
	strel[0].setRotation(25);
	strel[1].setRotation(-25);
	strel[2].setRotation(60);
	strel[3].setRotation(-250);


	int anim = 0;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}



		window.clear(Color::White);
		window.draw(OsX);
		window.draw(OsY);

		for (int i = 0; i < 4; i++)
			window.draw(strel[i]);


		for (int i = 0; i < 40; i++)

			window.draw(line[i]);
		if (anim < mass)

			anim += 50;
		for (int i = 0; i < anim; i++) {
			double x = o1 + i / count;
			string str1 = str;
			for (int i = 0; i <= str1.length(); i++)
				if (str1[i] == 'x')
					str1.replace(i, 1, to_string(x));

			//график функции
			//double y = (x + 5) / (x * x + 1);
			double y = CALC(str1);

			double x1 = x0 + x * scale;
			double y1 = y0 - y * scale;

			point.setPosition(x1, y1);
			window.draw(point);
		}
		window.display();
	}
	return;
}