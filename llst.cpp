#include <bits/stdc++.h>

struct node{
    int info;
    node *link;
};

void display(node *start){
   node *p;
   if(start==NULL){
        printf("List is empty\n\n");
        return;
   }
   printf("The elements are: ");
   p=start;
   while(p!=NULL){
    printf("%d ",p->info);
    p=p->link;
   }
   printf("\n\n");
    system("pause");
    system("cls");
}


node *add(node *start,int num){
    node *temp;
    temp=new node;
    temp->info=num;
    temp->link = start;
    start=temp;
    return start;
}


node *del(node *start,int num){
    node *temp,*p;
    if(start==NULL){
            printf("List is empty\n");
            return start;

    }
    if(start->info == num)
    {
        temp=start;
        start=start->link;
        delete temp;
        return start;
    }
    p=start;

    while(p->link!=NULL)
        {
        if(p->link->info==num)
        {
            temp=p->link;
            p->link=temp->link;
            delete temp;
            return start;
        }
        p=p->link;
    }
    printf("%d not present in the list\n",num);
    return start;
}


int main(){
    node *start = NULL;
    int x,num,num2;

    while(1){
        printf("\nInput 1 to Display\n");
        printf("Input 2 to Add a node\n");
        printf("Input 3 to Delete a node\n");
        printf("Input 4 to Exit the loop\n\n");
        printf("\n\nEnter your choice here: ");
        scanf("%d",&x);
        system("cls");
        if(x==1){

            display(start);
        }

        else if(x==2){
            printf("Enter the number to be inserted: ");
            scanf("%d",&num);
            start = add(start,num);
        }

        else if(x==3)
        {
            printf("Enter the number to be deleted: ");
            scanf("%d",&num);
            start=del(start,num);
        }


        else if(x==4){
           break;
        }

}
      return 0;
}

