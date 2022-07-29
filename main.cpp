#include <iostream>

using namespace std;

int main()
{
    cout<<"This program tells if polish name is masculine or feminine;"<<endl;

    string name;
    cout<<"Give a name: ";
    cin>>name;

    int len=name.length();
    cout<<"Length of the name: "<<len<<endl;

    if (name[len-1]=='a')
        cout<<"I suppose you are a woman"<<endl;
    else cout<<"I suppose you are a man"<<endl;

    cout<<"Press any key o exit";
    getchar(); getchar();
    return 0;
}
