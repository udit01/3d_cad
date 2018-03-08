/************************
* Implementation of 3DModel class
*
*************************/

/// A Representation for the 3D Model Class(isometric View) specified using a graph of nodes and edges
class Model3d
{
public:
	///Graph containing the nodes/points of the model
	Graph G;
	///
	Plane P;
	/// defining the reference origin 
	Point O;
	/// defining the Direction cosines of reference axis 1
	DirectionCosine l1;
	/// defining the Direction cosines of reference axis 2
	DirectionCosine l2;
	/// defining the Direction cosines of reference axis 3
	DirectionCosine l3;

	///Constructor for 3d model
	Model3d() {

	}

	///Destructor for 3d model
	~Model3d() {

	}

	///Traslating the whole 3d model by a vector/point
	void translate(Point p)
	{

	}

	///Rotating the 3d model by given direction Cosines
	void rotate(DirectionCosines dc)
	{

	}

	///Scale the 3d model by given factor
	void scale(float factor){

	}

	///Generate a projection of the 3D model on the given plane
	Projection generateProjection(Plane P){

	}

	///Return the graph of the 3D model
	Graph getGraph(){

	}

	///Rendering of 3D model on the screen
	void render(){

	}

	///Getting the serialized version of object to store/transfer
	string serialized(){

	}

	///Getting the deserialized version of string to retrive object contents
	static Model3d deserialize(string s) {

	}
};
