#pragma once
#include <numeric>

namespace mathLib {
	class Fraction {
	private:
		int numerator;
		int denominator;

		int getGCF(int a, int b) const{
			while (b != 0) {
				int temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}


	public:
		Fraction(int a, int b) {
			numerator = a;
			if (b == 0) {
				denominator = 1;
			}
			else{
			denominator = b;
			}
		}

		Fraction operator+(const Fraction& other) const {
			int num = numerator * other.denominator + other.numerator * denominator;
			int den = denominator * other.denominator;
			
			int gcf = getGCF(num, den);
			num /= gcf;
			den /= gcf;
			
			return Fraction(num, den);
		}

		Fraction operator-(const Fraction& other) const{
			int num = numerator * other.denominator - other.numerator * denominator;
			int den = denominator * other.denominator;

			int gcf = getGCF(num, den);
			num /= gcf;
			den /= gcf;

			return Fraction(num, den);
		}

		Fraction operator*(const Fraction& other) const {
			int num = numerator * other.numerator;
			int den = denominator * other.denominator;

			int gcf = getGCF(num, den);
			num /= gcf;
			den /= gcf;

			return Fraction(num, den);
		}

		Fraction operator/(const Fraction& other) const{
			int num = numerator * other.denominator;
			int den = denominator * other.numerator;

			if (other.numerator == 0) {
				den = 1;
			} 

			int gcf = getGCF(num, den);
			num /= gcf;
			den /= gcf;

			return Fraction(num, den);
		}

		bool operator==(const Fraction& other) const {
			int num1 = numerator;
			int den1 = denominator;
			int num2 = other.numerator;
			int den2 = other.denominator;
			int gcf1 = getGCF(num1, den1);
			int gcf2 = getGCF(num2, den2);

			num1 /= gcf1;
			den1 /= gcf1;
			num2 /= gcf2;
			den2 /= gcf2;

			return (num1 == num2 && den1 == den2);
		}

		float ToFloat() const
		{
			return static_cast<float>(numerator) / denominator;
		}
	};
}