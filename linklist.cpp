#include <iostream>
using namespace std;
struct node{
    int data ;
    struct node *next;

};
struct node *matha;
void insert_first(int val){
    node*temp = new node;
    temp->data = val ;
    temp->next = matha;
    matha = temp;


}
void insert_last(int val){
    node *temp = new node;
    temp->data = val;
    node*last = matha;
    while(last->next!= nullptr){
        last = last->next;
    }
    last ->next = temp;
    temp->next = NULL;
}
void show_list(){
    node*temp = matha;
    while (temp != NULL){
        cout << temp->data<<" ";
        temp = temp ->next;
    }
    cout << endl;
}
int main() {
    insert_first (6);
    insert_first(7);
    insert_first(5);
    show_list();


    return 0;
}



