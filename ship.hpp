#include "direction.hpp"

class Ship {
	protected:
		int size;
		Direction facing;
	public:
		Ship(int size, Direction facing): size(size), facing(facing) {}
		// Pure virtual function to make class abstract 
		virtual void dummy() = 0;
};
