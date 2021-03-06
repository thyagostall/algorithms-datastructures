#ifndef QUICKUNION_H
#define QUICKUNION_H

#include "UnionFind.h"

class QuickUnion: public UnionFind {
public:
	QuickUnion(int);

	virtual void connect(int, int) override;
	virtual int find(int) override;
};

#endif