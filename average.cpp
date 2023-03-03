#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    float a[argc];
    float ans;
    float sum = 0;
    
    if(argc <= 1){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 0; i < argc-1; i++){
            a[i] = atoi(argv[i+1]);
            sum += a[i];
            ans = sum/(argc-1);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 << " numbers = " << ans << endl;
        cout << "---------------------------------";
    }
return 0;
}
