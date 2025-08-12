# include <iostream>
using namespace std;

class FindLCM{
public:
    int find_gcd(int a, int b){
        if (a%b == 0){
            return b;
        }
        find_gcd(b, a%b);
    }

    int lcmOfArray(int N, int A[]) {
        int lcm;
        int a = A[0];
        for (int i=1; i<N; i++){
            int rem = find_gcd(a, A[i]);
            lcm = (a*A[i])/rem;
            a = A[i];
        }
        return lcm;  
    }
    
};

int main(){
    FindLCM lcm;
    int arr[3] = {4, 6, 8};
    cout << lcm.lcmOfArray(3, arr);
}