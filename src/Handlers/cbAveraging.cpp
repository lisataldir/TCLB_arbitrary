#include "cbAveraging.h"
std::string cbAveraging::xmlname = "Average";
#include "../HandlerFactory.h"


int cbAveraging::Init () {
	Callback::Init();
	auto variant = solver->getLatticeVariant();
	if (std::holds_alternative<Lattice<CartLattice>*>(variant)) {
		solver->getCartLattice()->resetAverage();
	} 
	if (std::holds_alternative<Lattice<ArbLattice>*>(variant)) {
		solver->getArbLattice()->resetAverage();
	} 
	return 0;
}


int cbAveraging::DoIt () {
	Callback::DoIt();
	auto variant = solver->getLatticeVariant();
	if (std::holds_alternative<Lattice<CartLattice>*>(variant)) {
		solver->getCartLattice()->resetAverage();
	} 
	if (std::holds_alternative<Lattice<ArbLattice>*>(variant)) {
		solver->getArbLattice()->resetAverage();
	} 
	return 0;
}


int cbAveraging::Finish () {
    return Callback::Finish();
}


// Register the handler (basing on xmlname) in the Handler Factory
template class HandlerFactory::Register< GenericAsk< cbAveraging > >;
