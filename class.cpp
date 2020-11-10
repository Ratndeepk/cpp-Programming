#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    int age,standard;
    string first_name,last_name;
    string s;
    stringstream ss;
    
    public:
    void set_age(int newage){
        age=newage;
    }  
    void set_standard(int ewstandard){
        standard = ewstandard;
    }
    void set_first_name(string ewfirst_name){
        first_name=ewfirst_name;
    }
    void set_last_name(string ewlast_name){
        last_name=ewlast_name;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    string to_string(){
        ss<<age<<','<<first_name<<','<<last_name<<','<<standard;
        
        return ss.str();
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
