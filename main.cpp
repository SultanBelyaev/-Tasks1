#include <iostream>
#include <cmath>

                                                                                                  //1 ������� 


                                             // ���� ����� 4 � 5 � ������ 6 �� ������ ������� 24
 /*
 int main() {
	setlocale(LC_ALL, "RU");

	int b1, b2, h, S;                                             
	std::cout << "������� ����� ��������� 1: ";
	std::cin >> b1;
	std::cout << "������� ����� ��������� 2: ";
	std::cin >> b2;
	std::cout << "������� ����� ������: ";
	std::cin >> h;
	S = (b1 + b2) / 2 * h;
	std::cout << S;
	return 0;
} 
*/

                                                                                              //2 ������� 
//����� ������ = 3. �������� ����� ���������� = 18,84 � ������� ����� = 28,26
/* int main() {
	int rad;
	std::cout << "Enter the radius:";
	std::cin >> rad;
	std::cout << "Lenght: " << 2 * 3.14 * rad << "\n";
	std::cout << "Area: " << 3.14 * rad * rad;
	return 0;
}
*/


                                                                                                    // 3 �������

/*                                                   ���� ���������� ����������� �� ������� 3 � 4 �� ������ ���������� 5 � ������� 6
int main() {                                                      �������������� ��� �������
	setlocale(LC_ALL, "RU");
	
	float a, b;
	std::cout << "������� ������ ������� :";
	std::cin >> a;
	std::cout << "������� ������ ������� :";
	std::cin >> b;
	std::cout << "������� : " << 0.5 * a * b << std::endl;
	std::cout << "����������  " << sqrt(pow(a, 2) + pow(b, 2));
	return 0;
}
*/
                                                                                                  // 4 ������� 

/* int main() {
	int number;                    
	setlocale(LC_ALL, "RU");

	std::cout << "������� �������������� ����� : ";
	std::cin >> number;

	int sum = 0;
	while (number != 0) {                                   ���������� �� ������ ����� ����� � ���������� � ���������� ���
		sum += number % 10;
		number /= 10;
	}

	std::cout << sum << std::endl;

	return 0;
} *

                                                                                              //5 �������
                                        //����� �=2, y=3. �������� ������ = 3.60555, ������ = 0.982794
int main() {
	double rad, x, y;
	std::cout << "Enter the x:";
	std::cin >> x;
	std::cout << "Enter the y:";
	std::cin >> y;
	rad = sqrt(x * x + y * y);
	std::cout << "r: " << rad << std::endl;
	std::cout << "Phi: " << atan(y / x);
	return 0;
}


                                                                                  //������� 6
                                                     //����� ������=3, ������=1,2. �������� X:1.62091 Y:2.52441
int main() {
	double rad, phi;
	std::cout << "Enter the radius:";
	std::cin >> rad;
	std::cout << "Enter the phi(in radians):";
	std::cin >> phi;
	std::cout << "X:";
	std::cout << rad * cos(phi) << std::endl;
	std::cout << "Y:";
	std::cout << rad * sin(phi);
	return 0;
}


                                                                                             //7 �������
.
float searchx(float a, float b, float c) {

	float D = pow(b, 2) - 4 * a * c;

	if (D > 0) {
		float x1 = (-b + sqrt(D)) / (2 * a);
		float x2 = (-b - sqrt(D)) / (2 * a);
		                                                                                 �������������� ��� �������

		std::cout << "����� ���������: " << x1 << " � " << x2 << std::endl;
		return 0;
	}
	else if (D == 0) {
		float x = -b / (2 * a);
		std::cout << "��������� ����� ���� �������������� ������: " << x << std::endl;
		return 0;
	}
	else {
		std::cout << "��������� �� ����� ������!" << std::endl;
		return 0;
	}
}
int main() {
	setlocale(LC_ALL, "RU");                                                       <- ��� ������������� ������� ������

	float a, b, c;

	std::cout << "������� ������������ a, b � c " << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	searchx(a, b, c);

	return 0;
} */


 /*                                                                   // 8 �������
// ����� ������� 8 9 11. �������� ������� 6 6,75 8,25
int main() {
	double a, b, c, ma, mb, mc;
	std::cout << "Enter the sides of triangle:";
	std::cin >> a >> b >> c;
	//����� ������� ��������� ������������
	ma = 0.5 * sqrt(2 * c * c + 2 * b * b - a * a);
	mb = 0.5 * sqrt(2 * c * c + 2 * a * a - b * b);
	mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
	//������� �� ��������� ������ ������������
	a = ma;
	b = mb;
	c = mc;
	//����� ������� ������ ������������
	ma = 0.5 * sqrt(2 * c * c + 2 * b * b - a * a);
	mb = 0.5 * sqrt(2 * c * c + 2 * a * a - b * b);
	mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
	std::cout << "Answer: " << ma << " " << mb << " " << mc;
	return 0;
}
*/


 /*                                                                               // 9�������
//����� 4556 ������. �������� Seconds:4556 Minutes:75 Hours : 1
int main() {
	int sec, min, hour;
	std::cout << "Enter the amount of secs:";
	std::cin >> sec;
	if (sec > 86400  sec < 0) {
		while (sec > 86400  sec < 0) {
			std::cout << "There are 86400 seconds in a day, enter the right amount:";
			std::cin >> sec;
			std::cout << "\n";
		}
	}
	min = sec / 60;
	hour = min / 60;
	std::cout << "Seconds:" << sec << "\n" << "Minutes:" << min << "\n" << "Hours:" << hour;
	return 0;
}
*/
                                                                                  // 10 �������
/* int main() {
	setlocale(LC_ALL, "RU");
	
	double a, b, c;

	std:: cout << "������� ����� ���� ������ ������������: ";
	std:: cin >> a >> b >> c; 
	                                                                             !���� ���� �� ��������� ������, ���� ����� ��������� - ����� ���
	if (a == b || b == c || a == c) {                     
		std :: cout << a << ", " << b << ", " << c << " - ������ ���������� ��-�� ��������������" << std :: endl;
	}
	else {
		std :: cout << a << ", " << b << ", " << c << " - ������ ���������� �� ��-�� ��������������" << std :: endl;
	}

	return 0;
	} */


 /*                                                                     //11 �������
	// ����� 999, �������� 999. ����� 1250� �������� 1125
int main() {
	double sum;
	std::cout << "Total cost:";
	std::cin >> sum;
	if (sum < 0) {
		while (sum < 0) {
			std::cout << "Error, try again:";
			std::cin >> sum;
		}
	}
	sum > 1000 ? std::cout << "Total with a discount: " << sum - (sum / 100) * 10 : std::cout << sum;
	return 0;
}
*/
                                                                        // 12 �������

/*
int main() {
	setlocale(LC_ALL, "RU");

	float a, b;
	std::cout << "������� ���� ���� :";
	std::cin >> a;
	std::cout << "������� ���� ��� :";
	std::cin >> b;                                                      �������� ��� ������ ������ �������� ����� if
	if (a - 100 > b) {
		std::cout << "��� ���� �����������! �������������� �� ���� ����� �� ������ ����! " << std::endl;
	}
	if (a - 100 < b) {
		std::cout << "�� ����������(��) :)! �������������� �� ���� ����� �� ���������! ";
	}
	else{ std::cout << "� ��� ��������� ���! �� ������ ���� ����� ��������? "; }
	return 0;
}
*/
                                                                                  // 13 �������
/*
#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	setlocale(LC_ALL, "RU");

	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;

	int proizvedenie = num1 * num2;
	//std::cout << proizvedenie;

	std::cout << "������� ������������ ���� �����, ������� ������� �����: ";
	std::cin >> proizvedenie;

	bool verno = (proizvedenie == num1 * num2);
	std::cout << (verno ? "�����!\n" : "�� �����!\n");

	return 0;
}*/
/*
                                                                      //14 �������
//����� 10 �����, ��������� 5, ���� 2; �������� 50
//����� 10 �����, ��������� 5, ���� 7; �������� 40
int main() {
	int day, minutes;
	double price;
	std::cout << "How many minutes did your conversation last?:";
	std::cin >> minutes;
	std::cout << "Enter the price/min:";
	std::cin >> price;
	std::cout << "Enter the day(1-7):";
	std::cin >> day;
	price *= minutes;
	if (day == 7 || day == 6)
		price -= (price / 100 * 20);
	std::cout << "Total: " << price;
	return 0;
}*/


/*
                                                                    15 �������
int main() {
	int month;
	std::cout << "Enter the number of month:";
	std::cin >> month;
	if (month == 1  month == 2  month == 12) {
		std::cout << "Winter, ";
		switch (month) {
		case 1:
			std::cout << "January";
			break;
		case 2:
			std::cout << "February";
			break;
		case 12:
			std::cout << "December";
			break;
		}
	}
	if (month == 3  month == 4  month == 5) {
		std::cout << "Spring, ";
		switch (month) {
		case 3:
			std::cout << "March";
			break;
		case 4:
			std::cout << "April";
			break;
		case 5:
			std::cout << "May";
			break;
		}
	}
	if (month == 6  month == 7  month == 8) {
		std::cout << "Summer, ";
		switch (month) {
		case 6:
			std::cout << "June";
			break;
		case 7:
			std::cout << "July";
			break;
		case 8:
			std::cout << "August";
			break;
		}
	}
	if (month == 9  month == 10  month == 11) {
		std::cout << "Autumn, ";
		switch (month) {
		case 9:
			std::cout << "September";
			break;
		case 10:
			std::cout << "October";
			break;
		case 11:
			std::cout << "November";
			break;
		}
	}
	return 0;
}

*/

                                                                             //16 �������


/*
int main() {
	setlocale(LC_ALL, "RU");

	std::string num;
	std::cout << "������� ������������ �����():";
	std::cin >> num;                                                                       
	while (num.size() != 6) {
		std::cout << "�� ����� �� ������������! ������� ������������ �����():";
		std::cin >> num;
	}                                                                                         ����� ���� ������ ����� ����� ������ ������-> �������

	(num[0] + num[1] + num[2] == num[3] + num[4] + num[5]) ? std::cout << "������� " : std::cout << "��������� ";
	return 0;
}*/



/*
//17 �������
//����� 1, �������� 1 kopeyka. ����� 2, �������� 2 kopeyki
int main() {
	int num, ldigit;
	std::cout << "Enter the number(from 1 to 99):";
	std::cin >> num;
	ldigit = num % 10;
	switch (ldigit) {
	case 1:
		std::cout << num << " kopeyka";
		break;
	case 2:
	case 3:
	case 4:
		std::cout << num << " kopeyki";
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
		std::cout << num << " kopeek";
		break;
	}
	return 0;
}
*/



          /*                                          //18 �������
int main() {
	std::string num;
	std::cout << "Enter the number(4 digits):";
	std::cin >> num;
	(num[0] == num[3] && num[1] == num[2]) ? std::cout << "Palindrome" : std::cout << "Not palindrome";
	return 0;
}
*/


                                                                                            //19 �������
/*

int main() {

	setlocale(LC_ALL, "RU");

	int number;
	std::cout << "������� ����������� �����: ";
	std::cin >> number;

	int digit1 = number / 100; 
	int digit2 = (number / 10) % 10;                          ��������� ����� �� ��� ����������
	int digit3 = number % 10;  

	int product = digit1 * digit2 * digit3;                 ������������
	int sum = digit1 + digit2 + digit3;                      �����

	int b;
	std::cout << "������� ����� b: ";
	std::cin >> b;

	if (product > b) {
		std::cout << "������������ ���� ������ ����� b." << std::endl;                 ������� ��������� ����� if
	}
	else {
		std::cout << "������������ ���� �� ������ ����� b." << std::endl;
	}

	if (sum % 7 == 0) {
		std::cout << "����� ���� ������ 7." << std::endl;
	}
	else {
		std::cout << "����� ���� �� ������ 7." << std::endl;
	}

	return 0;
}
*/
/*
//20 �������
//����� 10 12, 4 6. �������� It's possible
int main() {
	double a, b, c, d;
	std::cout << "Enter the sides of the first rectangle:";
	std::cin >> a >> b;
	std::cout << "Enter the sides of the second rectangle:";
	std::cin >> c >> d;
	//�������� ������ �������
	((a < c && b < d) || (a < d && b < c)) ? std::cout << "It's possible" : std::cout << "It's impossible";
	return 0;
}*/