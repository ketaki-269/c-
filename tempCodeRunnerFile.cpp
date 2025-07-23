{
    int a,b,c;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"Enter a Number: ";
    cin>>b;
    cout<<"Enter a Number: ";
    cin>>c;
    (a>b && a>c)?cout<<a:(b>a && b>c)?cout<<b:cout<<c;
}