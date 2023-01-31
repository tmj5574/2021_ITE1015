class Shape {
public:
	Shape(int width, int height); //Implement to store necessary data as member variables
	int getArea(); //Returns the area of this rectangle
	int getPerimeter(); //Returns the perimeter of this rectangle
protected:
	int width_;
	int height_;
	//Define member variables you need
};
class Square : public Shape {
public:
	Square(int width); //Implement to call the parent class's constructor properly
	void print(); //Print out information about this object(ex. '5x5Square')
};
class NonSquare : public Shape {
public:
	NonSquare(int width, int height); //Implement to call the parent class's constructor properly
		void print(); //Print out information about this object (ex. '2x7NonSquare')
};
