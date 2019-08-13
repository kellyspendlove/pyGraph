/// graphLibrary.cpp
/// Shaun Harker, Kelly Spendlove
/// 2019-06-17
/// MIT LICENSE


#include "Components.hpp"
#include "Digraph.hpp"
#include "Poset.hpp"
#include "StrongComponents.hpp"
#include "LabelledMultidigraph.hpp"
#include "MorseDecomposition.hpp"


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

PYBIND11_MODULE( _graph, m) {
  TypedObjectBinding(m);
  DigraphBinding(m);
  PosetBinding(m);
  ComponentsBinding(m);
  StrongComponentsBinding(m);
  LabelledMultidigraphBinding(m);
  MorseDecompositionBinding(m);

}
