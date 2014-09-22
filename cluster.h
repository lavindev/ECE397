#ifndef CLUSTER_H
#define CLUSTER_H

#include <vector>

class cluster
{
private:
	vector<node> members;

public:
	cluster();
	node getNode(int index);
	void addNode(node newNode);
	int size();
	void clear();
};

#endif