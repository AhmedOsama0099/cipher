#include <bits/stdc++.h>
using namespace std;


int main()
{

    while(true)
    {
        cout << "Encrypt (1) or decode (2) ? " ;
        int q;
        cin>>q;
        while ((q!=1)&&(q!=2))
        {
            cout<<"no more option"<<endl;
            cin>>q;
        }
        cout<<"please enter your massage: ";
        string x;
        cin.ignore();
        getline(cin, x);
        int z,c,y;
        cout<<"please enter parameters: ";
        int a,b,m;
        cout<<"your first and second input should be like that(a*c)%26=1: ";
        cin>>a>>m>>b;
        while ((a*m)%26!=1)
        {
            cout<<"please enter parameters again: ";
            cin>>a>>b>>m;
        }
        if (q==1)
        {
            for (int i=0; i<x.length(); i++)
            {
                z=x[i];
                if (z>=97)
                {
                    z = x[i]-97;
                    c=(((a*z)+b)%26);
                    cout<<char(c+97);
                }
                if(z>=65)
                {
                    z = x[i]-65;
                    c=((a*z)+b)%26;
                    cout<<char(c+65);
                }

                if (z ==32)
                {
                    cout<<char(32);
                }
            }
        }
        if (q==2)
        {
            for (int i=0; i<x.length(); i++)
            {
                z=x[i];
                if (z>=97)
                {

                    z = x[i]-97;
                    c=(m*(z-b));
                    y=fmod(c,26);
                    if (y<0)
                    {
                        y=y+26;
                    }
                    cout<<char(y+97);
                }
                if(z>=65)
                {
                    z = x[i]-65;
                    c=(m*(z-b));
                    y=fmod(c,26);
                    if (y<0)
                    {
                        y=y+26;
                    }
                    cout<<char(y+65);
                }

                if (z ==32)
                {
                    cout<<char(32);
                }
            }
        }
        cout<<endl;
        int p;
        cout<<"again(1) & end(2)=> ";
        cin>>p;
        while ((p!=1)&&(p!=2))
        {
            cout<<"no more option"<<endl;
            cin>>p;
        }
        if (p==2)
        {
            exit(0);
        }
    }
    return 0;
}
