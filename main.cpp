#include <string>
using std::string;

//Function takes a parameter and ignores it and returns "ok"
template <typename T>
string okFN(const T& any){
    return "ok";
}

//Did these as a way to motivate and wake my brain up. Potentially useful idea if I need to ignore a variable in a function. Not entirely useless, but basic.
int main(){
    int number = 1;

    string result = okFN(number);
    return 0;
}

