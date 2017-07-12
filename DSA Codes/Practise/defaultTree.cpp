#include <iostream>
#include <conio.h>
using namespace std;
class tree{
public:
	int value;
	tree *left;
	tree *right;

	// tree* add(int ele){
	// 	tree *ptr=new tree;
	// 	ptr->value=ele;
	// 	ptr->left=ptr->right=NULL;
	// 	return ptr;
	// }
	void inorder(tree *p){

		if(p!=NULL){
			inorder(p->left);
			cout<<p->value<<"->";
			inorder(p->right);
		}
	}
};
tree* tree::add(int ele){
	tree *ptr=new tree;
		ptr->value=ele;
		ptr->left=ptr->right=NULL;
		return ptr;
}
int main(){
	tree *p[1025];
	for(int i=0;i<1025;i++)p[i]=NULL;
	int n,l,r;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(p[i]==NULL){
			p[i]->add(i);
		}
		p[2*i]->add(2*i);
		p[i]->left=p[2*i];

		p[2*i +1]->add(2*i +1);
		p[i]->right=p[2*i +1];
	}
	t.inorder(p[1]);
	return 0;
}