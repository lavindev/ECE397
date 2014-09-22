#include "cluster.h"

cluster::cluster(){
	members.clear();
}

node cluster::getNode(int index){
	return members[index-1];
}

void cluster::addNode(node newNode){
	members.push_back(newNode);
}

int cluster::size(){
	return members.size();
}

void cluster::clear(){
	members.clear();
}