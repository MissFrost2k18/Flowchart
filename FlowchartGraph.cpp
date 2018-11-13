#include <iostream>
#include <cstdlib>
#include <string>



struct Graph{
	std::string ioput;
        std::string cycle;
        std::string cond;
        std::string begEnd;
        std::string ex;
	Graph*next;
};


void print(Graph*g){
	g = g->next;
	while(g != NULL){
		if(g->ioput != "0") std::cout << "Input or Output" << " " << g->ioput << std::endl;
		if(g->cycle != "0") std::cout << "Cycle " << g->cycle << std::endl;
		if(g->cond != "0") std::cout << "Condition " << g->cond << std::endl;
		if(g->begEnd != "0") std::cout << g->begEnd << std::endl;
		if(g->ex != "0") std::cout << g->ex << std::endl;
		g = g->next;
	}
	//std::cout << g->begEnd;
}

Graph*add(Graph*g, std::string s, int l){
	Graph*r = (Graph*)malloc(sizeof(Graph));
	g->next = r;
	if(l == 1){
		r->ioput = s;
		r->cycle = "0";
		r->cond = "0";
		r->begEnd = "0";
		r->ex = "0";
	}
	if(l == 2){
		r->ioput = "0";
                r->cycle = s;
                r->cond = "0";
                r->begEnd = "0";
                r->ex = "0";
	}
	if(l == 3){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = s;
                r->begEnd = "0";
                r->ex = "0";
	}
	if(l == 4){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = "0";
                r->begEnd = s;
                r->ex = "0";
	}
	if(l == 5){
		r->ioput = "0";
                r->cycle = "0";
                r->cond = "0";
                r->begEnd = "0";
                r->ex = s;
	}
	r->next = NULL;
	return r;
}

void SearchMin(Graph*g){
	std::string s = "begin";
	add(g, s, 4);
	g = g->next;
	s = "int*a";
	add(g, s, 5);
	g = g->next;
	s = "int n";
	add(g, s, 5);
	g = g->next;
	s = "n";
	add(g, s, 1);
	g = g->next;
	s = "int i = 0; i < n";
	add(g, s, 2);
	g = g->next;
	s = "a[i]";
	add(g, s, 1);
	g = g->next;
	s = "i++";
	add(g, s, 2);
	g = g->next;
	s = "int min = a[0]";
	add(g, s, 5);
	g = g->next;
	s = "int i = 0; i < n";
	add(g, s, 2);
	g = g->next;
	s = "a[i] < min";
	add(g, s, 3);
	g = g->next;
	s = "min = a[i]";
	add(g, s, 5);
	g = g->next;
	s = "i++";
	add(g, s, 2);
	g = g->next;
	s = "min";
	add(g, s, 1);
	g = g->next;
	s = "end";
	add(g, s, 4);
}

int main(){
	Graph*g = (Graph*)malloc(sizeof(Graph));
	SearchMin(g);
	print(g);
	return 0;
}
