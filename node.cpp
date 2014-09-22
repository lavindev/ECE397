#include "node.h"

node::node(){
	set_coord(0,0);
}

node::node(int _x, int _y){
	set_coord(_x,_y);
}

node::node(int _x, int _y, cluster _c){
	set_coord(_x,_y);
	set_cluster(_c);
}

void node::set_coord(int _x, int _y){
	x = _x;
	y = _y;
}

void node::set_cluster(cluster _c){
	c = _c;
}

int node::get_x(){
	return x;
}

int node::get_y(){
	return y;
}

cluster node::get_cluster(){
	return c;
}
