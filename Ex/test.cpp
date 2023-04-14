#include <iostream>
#include <string>
using namespace std;

string convertToWords(long long n) 
{
    string ones[] = { "", "mot ", "hai ", "ba ", "bon ", "nam ", "sau ", "bay ", "tam ", "chin ", "muoi ", "muoi mot ", "muoi hai ", "muoi ba ", "muoi bon ", "muoi nam ", "muoi sau ", "muoi bay ", "muoi tam ", "muoi chin " };
    string result = "";

    if (n == 0) 
        return "khong ";

    int billions = n / 1000000000;
    if (billions > 0) 
    {
        result += convertToWords(billions) + "ty ";
        n %= 1000000000;
    }

    int millions = n / 1000000;
    if (millions > 0) 
    {
        result += convertToWords(millions) + "trieu ";
        n %= 1000000;
    }

    int thousands = n / 1000;
    if (thousands > 0) 
    {
        result += convertToWords(thousands) + "nghin ";
        n %= 1000;
    }

    int hundreds = n / 100;
    if (hundreds > 0) 
    {
        result += ones[hundreds] + "tram ";
        n %= 100;
    }

    int tens = n / 10;
    if (tens > 0) 
    {
        if (tens == 1) 
        {
            result += ones[n];
            return result;
        } 
        else 
            result += ones[tens] + "muoi ";
        n %= 10;
    }

    if (n > 0) 
        result += ones[n];

    return result;
}

int main() 
{
    long long n;
    do
    {
        cout << "Nhap so tien (tu 0 den 999999999999): ";
        cin >> n;
        string words = convertToWords(n);
        if(n >= 0 && n < 999999999999)
            cout << "Chu cua menh gia " << n << " la: " << words << "dong." << endl;
        else 
            cout << "So tien khong hop le !!!\n\n";
    } while (n < 0 || n > 999999999999);

    return 0;
}
