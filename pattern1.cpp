#include <iostream>
using namespace std;

int main()
 {
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j;
        }
        cout<<"  ";
        for (int k=10;k>=i;k--)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    return 0;
}
