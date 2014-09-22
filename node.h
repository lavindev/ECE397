#ifndef NODE_H
#define NODE_H

#include "cluster.h"

class node
{
private:
	int x;
	int y;
	cluster c;

public:
	node();
	node(int _x, int _y);
	node(int _x, int _y, cluster _cluster);
	~node();

	void set_coord(int _x, int _y);
	void set_cluster(cluster _c);
	int get_x();
	int get_y();
	cluster get_cluster();
	
};

#endif