#include<iostream>
#include<cstdlib>
using namespace std;


class TicTock{
private:
    char matrix[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char player = 'X';

public:
    void draw(){
        int countLine=0;
        system("cls");
        for(int i=0;i<3;i++){
            countLine++;
            for(int j=0;j<3;j++){
                if(matrix[i][j]=='3'||matrix[i][j]=='6'||matrix[i][j]=='9'){
                    cout<<matrix[i][j];
                }
                else{
                  cout<<matrix[i][j]<<" | ";
                }

            }
            cout<<endl;
            if(countLine!=3){
                cout<<"----------";
            }
            cout<<endl;
        }
    }

    void input(){
        int a;
        cout<<"It's "<<player<<" 's turn "<<endl;
        cout<<"Enter any number of 1 to 9 of the field : ";
        cin>>a;

        if(a==1){
            if(matrix[0][0]=='1'){
                matrix[0][0] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }

        }
        else if(a==2){
            if(matrix[0][1]=='2'){
                matrix[0][1] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==3){
            if(matrix[0][2]=='3'){
                matrix[0][2] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==4){
            if(matrix[1][0]=='4'){
                matrix[1][0] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==5){
            if(matrix[1][1]=='5'){
                matrix[1][1] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==6){
            if(matrix[1][2]=='6'){
                matrix[1][2] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==7){
            if(matrix[2][0]=='7'){
                matrix[2][0] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==8){
            if(matrix[2][1]=='8'){
                matrix[2][1] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else if(a==9){
            if(matrix[2][2]=='9'){
                matrix[2][2] = player;
            }
            else{
                cout<<"This slot is already in use. please try again..."<<endl;
                input();
            }
        }
        else{
            cout<<"you press wrong key. please use numbers from 1 to 9 "<<endl;
            input();
        }
    }

    void playersTurn(){
        if(player=='X')
            player = 'O';
        else
            player='X';
    }

    char winer(){
        if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X')
            return 'X';
        if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X')
            return 'X';
        if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X')
            return 'X';
        if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X')
            return 'X';
        if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X')
            return 'X';
        if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X')
            return 'X';
        if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
            return 'X';
        if(matrix[2][0]=='X'&&matrix[1][1]=='X'&&matrix[0][2]=='X')
            return 'X';


        if(matrix[0][0]=='O'&&matrix[0][1]=='O'&&matrix[0][2]=='O')
            return 'O';
        if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O')
            return 'O';
        if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O')
            return 'O';
        if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O')
            return 'O';
        if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O')
            return 'O';
        if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O')
            return 'O';
        if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O')
            return 'O';
        if(matrix[2][0]=='O'&&matrix[1][1]=='O'&&matrix[0][2]=='O')
            return 'O';

            return '/';

    }


};

int main(){
    TicTock obj;
    obj.draw();
    int count =0;
    while(1){
        count++;
        obj.input();
        obj.draw();
        if(obj.winer()=='X'){
            cout<<" X won the game .... ";
            break;
        }
        else if(obj.winer()=='O'){
            cout<<" O won the game....";
            break;
        }
        else if(obj.winer()=='/'&&count==9){
            cout<<"Match drawn....";
            break;
        }

        obj.playersTurn();
    }


    //system("pause");
    return 0;
}
