// sparselizard - Copyright (C) 2017- A. Halbach, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <alexandre.halbach at gmail.com>.


#ifndef OPINVERSION_H
#define OPINVERSION_H

#include "operation.h"

class opinversion: public operation
{

	private:
        
        bool reuse = false;
        std::shared_ptr<operation> myarg;
	
	public:
        
        opinversion(std::shared_ptr<operation> arg) { myarg = arg; };
        
        std::vector<std::vector<densematrix>> interpolate(elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);
        densematrix multiharmonicinterpolate(int numtimeevals, elementselector& elemselect, std::vector<double>& evaluationcoordinates, expression* meshdeform);

        std::vector<std::shared_ptr<operation>> getarguments(void) { return {myarg}; };
        std::shared_ptr<operation> simplify(std::vector<int> disjregs);
        
        std::shared_ptr<operation> copy(void);
        
        void reuseit(bool istobereused) { reuse = istobereused; };
        
		std::vector<double> evaluate(std::vector<double>& xcoords, std::vector<double>& ycoords, std::vector<double>& zcoords);

        void print(void);

};

#endif
