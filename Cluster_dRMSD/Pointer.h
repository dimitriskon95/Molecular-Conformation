#ifndef Pointer_H
#define Pointer_H

class Pointer
{
	private:
		int id;
		int size;
		double *vector;
		Pointer *next;
	public:
		Pointer(double *, int, int);
		~Pointer();

		void set_next(Pointer *);
		Pointer* get_next();
		int get_size();
		int get_id();
		double* get_data();

		void printNode();
};

#endif
