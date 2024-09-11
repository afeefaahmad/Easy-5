#include <iostream>
using namespace std;


    int main(){
        char a[] = "li t t    l e";
        int count = 0;
        
        for(int i=0;a[i];i++){
            if(a[i]!=' '){
                a[count]=a[i];
                count++;
            }
                
        }
        
        a[count]='\0';
        cout<<a;
        
        return 0;
}
