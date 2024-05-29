#include <iostream>

using namespace std;

class Polynomial {
private:
    int degree;
    int* coefficients;

public:
    Polynomial(int deg) {
        degree = deg;
        coefficients = new int[degree + 1];
        for (int i = 0; i <= degree; ++i)
            coefficients[i] = 0;
    }

    Polynomial(const Polynomial& poly) {
        degree = poly.degree;
        coefficients = new int[degree + 1];
        for (int i = 0; i <= degree; ++i)
            coefficients[i] = poly.coefficients[i];
    }

    ~Polynomial() {
        delete[] coefficients;
    }

    void setCoefficient(int power, int coefficient) {
        if (power >= 0 && power <= degree)
            coefficients[power] = coefficient;
        else
            cout << "Invalid power" << endl;
    }

    int getCoefficient(int power) const {
        if (power >= 0 && power <= degree)
            return coefficients[power];
        else
            return 0;
    }

    Polynomial operator+(const Polynomial& other) const {
        int maxDegree = max(degree, other.degree);
        Polynomial result(maxDegree);

        for (int i = 0; i <= maxDegree; ++i)
            result.setCoefficient(i, getCoefficient(i) + other.getCoefficient(i));

        return result;
    }

    Polynomial operator-(const Polynomial& other) const {
        int maxDegree = max(degree, other.degree);
        Polynomial result(maxDegree);

        for (int i = 0; i <= maxDegree; ++i)
            result.setCoefficient(i, getCoefficient(i) - other.getCoefficient(i));

        return result;
    }

    Polynomial operator*(const Polynomial& other) const {
        int resultDegree = degree + other.degree;
        Polynomial result(resultDegree);

        for (int i = 0; i <= degree; ++i) {
            for (int j = 0; j <= other.degree; ++j) {
                result.coefficients[i + j] += coefficients[i] * other.coefficients[j];
            }
        }

        return result;
    }

    Polynomial operator/(const Polynomial& other) const {
        Polynomial quotient(degree - other.degree);

        Polynomial remainder(*this);

        while (remainder.degree >= other.degree) {
            int factor = remainder.coefficients[remainder.degree] / other.coefficients[other.degree];
            int currentDegreeDifference = remainder.degree - other.degree;

            Polynomial temp(currentDegreeDifference);
            temp.setCoefficient(currentDegreeDifference, factor);

            quotient = quotient + temp;

            Polynomial subtractor = other * temp;

            remainder = remainder - subtractor;
        }

        return quotient;
    }

    void print() const {
        for (int i = degree; i >= 0; --i) {
            if (coefficients[i] != 0) {
                if (i == 0)
                    cout << coefficients[i];
                else if (i == 1)
                    cout << coefficients[i] << "x + ";
                else
                    cout << coefficients[i] << "x^" << i << " + ";
            }
        }
        cout << endl;
    }
};

int main() {
    Polynomial poly1(3);
    poly1.setCoefficient(0, 1);
    poly1.setCoefficient(1, 2);
    poly1.setCoefficient(2, 3);
    poly1.setCoefficient(3, 4);

    Polynomial poly2(2);
    poly2.setCoefficient(0, 1);
    poly2.setCoefficient(1, 1);
    poly2.setCoefficient(2, 1);

    Polynomial sum = poly1 + poly2;
    Polynomial diff = poly1 - poly2;
    Polynomial prod = poly1 * poly2;
    Polynomial quot = poly1 / poly2;

    cout << "Polynomial 1: ";
    poly1.print();
    cout << "Polynomial 2: ";
    poly2.print();
    cout << "Sum: ";
    sum.print();
    cout << "Difference: ";
    diff.print();
    cout << "Product: ";
    prod.print();
    cout << "Quotient: ";
    quot.print();

    return 0;
}

