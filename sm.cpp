// social media
#include <iostream>
#include <conio.h>
using namespace std;
class socmed
{
private:
    static int count;
    string usr, pass, user, post, user1, pass1;
    string users[5], passr[5], posts[10], followers[10], following[10];
    int postcount = 0, followercount = 0, followingcount = 0;

public:
    void setup(void)
    {
        cout << "enter username:" << endl;
        cin >> users[count];
        cout << "enter pass:" << endl;
        cin >> pass;
        passr[count] = pass;
        count++;
        cout << "congrats you have been registered" << endl;
    }
    void follow(string user)
    {
        following[followingcount] = user;
        followingcount++;
        cout << "you follow " << user << " now!" << endl
             << "you now follow " << followingcount << " people";
    }
    void followed(string user)
    {
        followers[followercount] = user;
        followercount++;
        cout << "you have been followed by " << user << endl
             << "you now have " << followercount << " followers!" << endl;
    }
    void posting(string post)
    {
        posts[postcount] = post;
        postcount++;
        cout << "you have posted " << post << " now!" << endl
             << "no of posts:" << postcount << endl;
    }
    void display(void)
    {
        cout << "enter username:" << endl;
        cin >> user1;
        for (int j = 0; j < 5; j++)
        {
            if (users[j] == user1)
            {
                cout << "user found" << endl
                     << "enter pass" << endl;
                cin >> pass1;
                if (passr[j] == pass1)
                {
                    cout << "you are our " << j + 1 << "user" << endl;
                    cout << "followers:" << followercount << endl;
                    for (int i = 0; i < followercount; i++)
                    {
                        cout <<i+1<<"."<<followers[i] << endl;
                    }
                    cout << "following:" << followingcount << endl;
                    for (int i = 0; i < followingcount; i++)
                    {
                        cout <<i+1<<"."<<following[i] << endl;
                    }
                    cout << "posts: " << postcount << endl;
                    for (int i = 0; i < postcount; i++)
                    {
                        cout <<i+1<<"."<< posts[i] << endl;
                    }
                    return;
                }
                else
                {
                    cout << "please enter correct pass!" << endl;
                    return;
                }
            }
            else
            {
                cout << "username not found, please register!" << endl;
            }
        }
    }
    void delpost(void)
    {
        int ans;
        cout << "enter which post do you want to delete fromthe list given below:" << endl;
        for (int i = 0; i < postcount; i++)
        {
            cout <<i+1<<"."<< posts[i] << endl;
        }
        cin >> ans;
        for (int i = ans - 1; i < postcount - 1; i++)
        {
            posts[i] = posts[i + 1];
        }
        postcount--;
        cout << "Your post has been deleted!" << endl;
    }
    void delfollower(void)
    {
        int ans;
        cout << "enter which follower do you want remove fromthe list given below:" << endl;
        for (int i = 0; i < followercount; i++)
        {
            cout <<i+1<<"."<< followers[i] << endl;
        }
        cin >> ans;
        for (int i = ans - 1; i < followercount - 1; i++)
        {
            followers[i] = followers[i + 1];
        }
        followercount--;
        cout << "Your follower " << followers[ans - 1] << " has been removed!" << endl;
    }
    void delfollowing(void)
    {
        int ans;
        cout << "enter who do you want to unfollow fromthe list given below:" << endl;
        for (int i = 0; i < followingcount; i++)
        {
            cout <<i+1<<"."<< following[i] << endl;
        }
        cin >> ans;
        for (int i = ans - 1; i < followingcount - 1; i++)
        {
            following[i] = following[i + 1];
        }
        followingcount--;
        cout <<" You have unfollowed " << following[ans - 1] << endl;
    }
};
int socmed::count = 0;
int main()
{
    socmed userman;
    char ans;
    int choice;
    string user, post;
    cout << "WELCOME TO THE BEST SOCIAL MEDIA PLATFORM!!!" << endl;
    do
    {
        cout << "what do you want to do?" << endl
             << "1.register" << endl
             << "2.display" << endl
             << "3.follow(aw hell nawwww)" << endl
             << "4.get followed(lowkey creepy doe)" << endl
             << "5.post" << endl
             << "6.del post" << endl
             << "7.remove a follower" << endl
             << "8.unfollow someone!" << endl;
        cin >> choice;
        if (choice == 1)
        {
            userman.setup();
        }
        else if (choice == 2)
        {
            userman.display();
        }
        else if (choice == 3)
        {
            cout << "who do you want to follow?";
            cin >> user;
            userman.follow(user);
        }
        else if (choice == 4)
        {
            cout << "who do you want to get followed by?";
            cin >> user;
            userman.followed(user);
        }
        else if (choice == 5)
        {
            cout << "enter what you want to post:" << endl;
            cin.ignore();
            getline(cin, post);
            userman.posting(post);
        }
        else if (choice == 6)
        {
            userman.delpost();
        }
        else if (choice == 7)
{
            userman.delfollower();
        }
        else if (choice == 8)
        {
            userman.delfollowing();
        }
        cout << "do you wish to continue?" << endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}