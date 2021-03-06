#ifndef _RMS_UTILS_FACE
#define _RMS_UTILS_FACE

/*
//====================================================================//
 
 ==========================
 Joseph DeGol
 UIUC Fall 2012
 ==========================
 RMS_Utils_Face: Version 1.0
 ==========================
 
 ================================================================
 RMS_Utils_Face.hpp
 This is a 3-dimensional polygon face class
 ================================================================
 
 List of Functions:
 
//====================================================================//
*/




//====================================================================//
//====================================================================//
//============================ Preamble ==============================//
//====================================================================//
//====================================================================//


//---------------------------------------------------------------//
//------------------------- Includes ----------------------------//
//---------------------------------------------------------------//

//system
#include <iostream>

//---------------------------------------------------------------//
//----------------------- end Includes --------------------------//
//---------------------------------------------------------------//


//---------------------------------------------------------------//
//----------------------- Namespaces ----------------------------//
//---------------------------------------------------------------//

//namespaces
using namespace std;

//---------------------------------------------------------------//
//---------------------- end Namespaces -------------------------//
//---------------------------------------------------------------//


//---------------------------------------------------------------//
//------------------------- Globals -----------------------------//
//---------------------------------------------------------------//
//---------------------------------------------------------------//
//------------------------ end Globals --------------------------//
//---------------------------------------------------------------//


//---------------------------------------------------------------//
//------------------- Function Prototypes -----------------------//
//---------------------------------------------------------------//
//---------------------------------------------------------------//
//------------------ end Function Prototypes --------------------//
//---------------------------------------------------------------//

//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//





namespace Robots {	
//====================================================================//
//====================================================================//
//====================== Face Class Definition =======================//
//====================================================================//
//====================================================================//
class Face
{
	
	
	//---------------------------------------------------------------//
	//------------------------- Private -----------------------------//
	//---------------------------------------------------------------//
	private:
	
		/*----- variables -----*/
		
		/*--- end variables ---*/
		
		/*----- methods -----*/
		
		/*--- end methods ---*/
		
	//---------------------------------------------------------------//
	//----------------------- end Private ---------------------------//
	//---------------------------------------------------------------//


	//---------------------------------------------------------------//
	//-------------------------- Public -----------------------------//
	//---------------------------------------------------------------//
	public:
	
		/*----- variables -----*/
		
		//indices
		vector<int> vertex_ind;
		vector<int> texture_ind;
		vector<int> normal_ind;
		
		/*--- end variables ---*/
		
		/*----- Constructors -----*/
		Face();
		/*--- end Constructors ---*/
		
		
		/*----- Destructors -----*/
		~Face();
		/*--- end Destructors ---*/
		
		/*----- Modifiers -----*/
		void Add_Vert_Tex_Norm(int vertex_in, int texture_in, int normal_in);
		/*--- end Modifiers ---*/
		
		/*----- Setters -----*/
		/*--- end Setters ---*/
		
		
		/*----- Getters -----*/
		/*--- end Getters ---*/
	
		/*----- Overloaded Operators -----*/
		/*--- end Overloaded Operators ---*/
		
	//---------------------------------------------------------------//
	//------------------------ end Public ---------------------------//
	//---------------------------------------------------------------//
	
	
};
//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//





//====================================================================//
//====================================================================//
//==================== Face Class Implementation =====================//
//====================================================================//
//====================================================================//


	//---------------------------------------------------------------//
	//-------------------------- Private ----------------------------//
	//---------------------------------------------------------------//

	//---------------------------------------------------------------//
	//------------------------ end Private --------------------------//
	//---------------------------------------------------------------//
	
	
	//---------------------------------------------------------------//
	//-------------------------- Public -----------------------------//
	//---------------------------------------------------------------//
	
	/*----- Constructors -----*/
	Face::Face()
	{
		//reserve space in vectors
		vertex_ind.reserve(3);
		texture_ind.reserve(3);
		normal_ind.reserve(3);
	}
	/*--- end Constructors ---*/
	
	
	/*----- Destructors -----*/
	Face::~Face() {}
	/*--- end Destructors ---*/
	
	/*----- Modify -----*/
	void Face::Add_Vert_Tex_Norm(int vertex_in, int texture_in, int norm_in)
	{
		//add new 
		vertex_ind.push_back(vertex_in);
		texture_ind.push_back(texture_in);
		normal_ind.push_back(norm_in);	
	}
	/*--- end Modify ---*/
	
	/*----- Setters -----*/
	/*--- end Setters ---*/
	
			
	/*----- Getters -----*/
	/*--- end Getters ---*/
	
	//---------------------------------------------------------------//
	//------------------------ end Public ---------------------------//
	//---------------------------------------------------------------//
	
	
//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//
//====================================================================//
}

#endif
