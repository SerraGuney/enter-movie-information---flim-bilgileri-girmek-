#include <iostream>
using namespace std;
struct movies{
    char name[100];
    char director[100];
    int year;
    char type[100];
}movie1;
void movie_information(movies*movie);
void write_movieinformation(movies*writemovie);
enum movietype{
    action=0,
    thriller=1,
    comedy=2,
    drama=3,
};
int main(){
    int type1;
    cout<<"Please enter movie information:"<<endl;
    movie_information(&movie1);
    cout<<"Enter movie type (0)action,(1)thriller,(2)comedy,(3)drama :";
    cin>>type1;
    switch(type1){
        case action: cout<<"movie genre:action"<<endl;
        break;
        case thriller: cout<<"movie genre:thriller"<<endl;
        break;
        case comedy: cout<<"movie genre:comedy"<<endl;
        break;
        case drama: cout<<"movie genre:drama"<<endl;
        break;
        default:
        cout<<"You entered the wrong type"<<endl;
    }
    cout<<endl<<endl;
    write_movieinformation(&movie1);
    return 0;
}
void movie_information(movies*movie){
    cout<<"movie name:";
    cin>>movie->name;
    cout<<"movie director:";
    cin>>movie->director;
    cout<<"movie year:";
    cin>>movie->year;
}
void write_movieinformation(movies*writemovie){
    cout<<"movie name:";
    cout<<writemovie->name<<endl;
    cout<<"movie director:";
    cout<<writemovie->director<<endl;
    cout<<"movie year:";
    cout<<writemovie->year<<endl;
}    
    


