#include "acArbitraryLattice.h"
std::string acArbitraryLattice::xmlname = "ArbitraryLattice";
#include "../HandlerFactory.h"

int acArbitraryLattice::Init() {
    const auto lattice = solver->getArbLattice();
    lattice->CutsOverwrite(lattice->connect.cuts.get());
    return lattice->reinitialize(solver->num_snaps, solver->setting_zones, node);

}

// Register the handler (based on xmlname) in the Handler Factory
template class HandlerFactory::Register<GenericAsk<acArbitraryLattice> >;
