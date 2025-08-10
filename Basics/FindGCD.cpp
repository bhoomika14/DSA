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
    int a = 16, b = 1;
    cout << findGCD.gcd(max(a, b), min(a,b));
}
