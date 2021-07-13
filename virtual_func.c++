#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){};
};
class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r,int w) : CWH(s,r){
        words = w;
    }
    void display(){
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Words in this video is: " << words << " minutes" << endl;
    }
};

int main()
{
    int words;
    string s;
    float vilen,rate_vid,rate_text;
    
   // cout<<"Enter the title of your videos : "<<endl;
   // cin>>s;
   // cout<<"Enter videolength,rating of video,words in textual form,rating of text"<<endl;
    cin>>s>>vilen>>rate_vid>>words>>rate_text;

    //for video;
    CWHvideo video(s,rate_vid,vilen);
    //for text
    CWHtext text(s,rate_text,words);

    CWH* t[2];
    t[0] = &video;
    t[1] = &text;
    t[0]->display();
    t[1]->display();

    return 0;
}