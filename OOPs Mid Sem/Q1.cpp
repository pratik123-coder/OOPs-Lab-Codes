#include<iostream>

using namespace std;

    class student
    public:
    char name;
    int roll;
    void getting_student_data(){
        cin>>>>name>>roll;
    };
    class MidSemMarks:public student
    public:
    int mid1,mid2,mid3,mid4,mid5;
    void getting_midsem_marks(){
        for (int i = 0; i = 5; i++)
        {
            cout<<"Enter The Mid Sem Marks of"<<roll<<"In subject"<<i<<":";
            cin>>midi;
        }
    };
    class InternalMarks:public student
    public:
    int int1,int2,int3,int4,int5;
    void getting_internal_marks(){
        for (int j = 0; j = 5; j++)
        {
            cout<<"Enter The Internal Marks of"<<roll<<"In subject"<<i<<":";
            cin>>inti;
        }
        
    };    
    class EndSemMarks:public student
    public:
    int end1,end2,end3,end4,end5;
    void getting_endsem_marks(){
        for (int k = 0; k = 5; k++)
        {
            cout<<"Enter The EndSem Marks of"<<roll<<"In subject"<<i<<":";
            cin>>endi;
        }
        
    };
    class Result:public InternalMarks,public MidSemMarks, public EndSemMarks
    public:
    int total, percentage;
    void getting_result(){
        for (int l = 0; l < 5; l++)
        {
            total=inti+midi+endi;
        }
        percentage=(total/100)*100;
        cout<<"TOtal Marks Out Of 100 = "<<total;
        cout<<"total percentage = "<<percentage;
    }
    
    int main(){
    student st;
    st.getting_student_data();
    st.getting_internal_marks();
    st.getting_midsem_marks();
    st.getting_endsem_marks();


    return 0;
}