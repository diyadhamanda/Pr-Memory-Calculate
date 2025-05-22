//Create a student management that  perform  the following opertion//

#include<iostream>
#include<vector>
using namespace std;


template<typename T1 , typename T2>
class MemoryClaculater{
public:
    vector<int> v1;
    vector<string> v2;

    T1 Id;
    T2 name;

    MemoryClaculater(int size)
    {
        for (int i = 0; i < size; i++)
        {
           cout<<"Enter Student Id["<<i<<"] ";
           cin>>this->Id;
           v1.push_back(this->Id);
           cout<<"Enter Student Name ["<<i<<"] ";
           cin>>this->name;
           v2.push_back(this->name);
        }
        
    }

    void DisplayStudent()
    {
        for (int i = 0; i < v1.size(); i++)
        {
           cout<<"Student Id ["<<i<<"]: "<<v1.at(i)<<endl;
           cout<<"Student Name ["<<i<<"]: "<<v2.at(i)<<endl;
        }
        
    }

    void AddStudent(T1 Id ,T2 name)
    {
        v1.push_back(Id);
        v2.push_back(name);

    }    

    void RemoveStudent(T1 Id)
    {
        for (int i = 0; i < v1.size(); i++) 
        {
            if (v1[i] == Id) 
            {
                cout<<"Student Id Remove Successfully."<<endl;
                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + i);
                
            
            }
        }
       
    }

    void SearchStudent(T1 Id) 
    {
        for (int i = 0; i < v1.size(); i++) 
        {
            if (v1[i] == Id) 
            {
                cout<<"Student Id["<<i<<"]: "<<v1.at(i)<<endl;
                cout<<"Student Name["<<i<<"]: "<<v2.at(i)<<endl;
                
            }
        }
    }  

};


int main()
{

    int size , choice , Id;
    string name;
    
    cout<<"***************************************"<<endl;
    cout<<"Enter The Size of vector ";
    cin>>size;
    cout<<endl;

    MemoryClaculater<int , string> memory(size);


    do
    {
        cout<<endl;
        cout<<"***************************************"<<endl;
        cout<<"Press 1 for Add Student  to the List "<<endl;
        cout<<"Press 2 for Display Student  to the List "<<endl;
        cout<<"Press 3 for Remove Student  to the List "<<endl;
        cout<<"Press 4 for Search Student  to the List "<<endl;
        cout<<"Press 0 for Exit "<<endl;
        cout<<endl;
        cout<<"Enter your Choice ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter Student Id ";
            cin>>Id;
            cout<<"Enter Student Name";
            cin>>name;
            memory.AddStudent(Id , name);
            break;

        case 2:
            memory.DisplayStudent();
            break;

        case 3:
            cout<<"Enter Student Id to Remove From the List ";
            cin>>Id;
            memory.RemoveStudent(Id);
            break;

        case 4:
            cout<<"Enter Student Id To Search from the list ";
            cin>>Id;
            memory.SearchStudent(Id);
            break;

        case 0:
            cout<<"Exit From The List.";
            break;

        default:
            cout<<"Wrong Choice";
            break;
        }
       
    } while (choice!=0);
    
    return 0;
}