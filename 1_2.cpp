# include <iostream>
using namespace std;

int main()
{
    const float PI = 3.141593;
    float area, radius, length, width;
    char type;
    cout<<"Please select the shape to be calculated ('c' for circle, 'r' for rectangle, 's' for square): ";
    cin>>type;
    switch (type){
        case 'c':
            cout<<"Please input radius: ";
            cin>>radius;
            area = PI * radius *radius;
            break;
        case 'r':
            cout<<"Please input the length and width: ";
            cin>>length>>width;
            area = length * width;
            break;
        case 's':
            cout<<"Please input the length of its side: ";
            cin>>length;
            area = length * length;
            break;
        default:
            cout<<"Unidentified."<<endl;
            area = -1;
    }
    if(area > 0) cout<<"The area is: "<<area<<endl;
    return 0;
}