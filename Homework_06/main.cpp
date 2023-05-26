#include "library.h"

int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}

	//How to inherit from a class
	//class Son: public Father
	//Multiple inheritance:
	//class Son: public Father, public Mother
	{
		Point2D* ptr2d;
		Point3D* ptr3d;
		
		//Upcast
		ptr2d = ptr3d; //Allowed
		//Downcast
		//ptr3d = ptr2d; //Not allowed
		ptr3d = (Point3D*) ptr2d; //Unsafe
	}

	//Altro metodo per derivare tramite aggregazione
	{
		class Father{};
		class Mother{};
		class Son {
			Father f1;
			Mother f2;
		};
	}
	
	//Virtual table: Il compilatore riserva un'area di memoria al puntatore a funzione
	//Questa area di memoria rimane costante anche se effettuato un downcast
	//Questo solo le la funzione è definita virtual

	//Override dopo la definizione della funzione, ritorna errore se la funzione su cui viene effettuata non è virtual

	//per creare le interfacce si creano dei metodi virtuali 'puri' con assegnazione a 0
	//ex. virtual int Area() = 0;
}