#ifndef linklist_H
#define linklist_H


class linklist
{
private:
	complex *head, *tail;

public:


	linklist();
	void insertatstart(complex v);
	
	void insertposition(int pos, complex c);
	
	void deleteposition(int pos);
	
	void getnth(int po);
	
	void showdatca();
	
};
#endif