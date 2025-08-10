# include <iostream>
using namespace std;

class FindGCD{
public:
    int gcd(int a, int b){
        if (a%b==0){
            return b;
        }
        gcd(b, a%b);
    }
};

int main(){
    FindGCD findGCD;
    int a = 20, b = 28;
    cout << findGCD.gcd(a, b);
}
