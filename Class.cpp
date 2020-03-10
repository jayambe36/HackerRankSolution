//SMITPATEL9898
#include <iostream>
#include <sstream>
using namespace std;


class Student{
    public:
        int ag, standard;
        string f_nm, l_nm;
        void set_ag(int a){
            ag = a;
        }
        void set_f_nm(string a){
            f_nm = a;
        }
        void set_l_nm(string a){
            l_nm = a;
        }
        void set_standard(int a){
            standard = a;
        }
        int get_ag(){
            return ag;
        }
        string get_f_nm(){
            return f_nm;
        }
        string get_l_nm(){
            return l_nm;
        }
        int get_standard(){
            return standard;
        }
       string t_string(){
           string s = "";
           s+=to_string(ag);
           s+=",";
           s+=f_nm;
           s+=",";
           s+=l_nm;
           s+=",";
           s+=to_string(standard);
           return s;
       }
};

int main() {
    int ag, standard;
    string f_nm, l_nm;
    
    cin >> ag >> f_nm >> l_nm >> standard;
    
    Student st;
    st.set_ag(ag);
    st.set_standard(standard);
    st.set_f_nm(f_nm);
    st.set_l_nm(l_nm);
    
    cout << st.get_ag() << "\n";
    cout << st.get_l_nm() << ", " << st.get_f_nm() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.t_string();
    
    return 0;
}