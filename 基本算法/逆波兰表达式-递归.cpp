/*描述
逆波兰表达式是一种把运算符前置的算术表达式，例如普通的表达式2 + 3的逆波兰表示法为+ 2 3。
逆波兰表达式的优点是运算符之间不必有优先级关系，也不必用括号改变运算次序，例如(2 + 3) * 4
的逆波兰表示法为* + 2 3 4。本题求解逆波兰表达式的值，其中运算符包括+ - * /四个。
输入
输入为一行，其中运算符和运算数之间都用空格分隔，运算数是浮点数。
输出
输出为一行，表达式的值。
可直接用printf("%f\n", v)输出表达式的值v。*/
#include <bits/stdc++.h>
using namespace std;
char s[110];
double fx(){
    scanf("%s",&s);
    int len=strlen(s);
    if(len==1 && (s[0]<'0'||s[0]>'9')){
        switch(s[0]){
            case '+':return fx()+fx();
            case '-':return fx()-fx();
            case '*':return fx()*fx();
            case '/':return fx()/fx();
        }
    }else return atof(s);
}
int main(){
    printf("%f\n", fx());
    return 0;
}
