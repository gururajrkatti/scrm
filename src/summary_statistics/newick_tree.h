/*
 * scrm is an implementation of the Sequential-Coalescent-with-Recombination Model.
 * 
 * Copyright (C) 2013 Paul R. Staab, Sha (Joe) Zhu and Gerton Lunter
 * 
 * This file is part of scrm.
 * 
 * scrm is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef scrm_src_summary_statistic_newick_tree
#define scrm_src_summary_statistic_newick_tree

#include <sstream>
#include <iostream>

#include "summary_statistic.h"
#include "../forest.h"

class NewickTree : public SummaryStatistic
{
 public:
   NewickTree() {};

   //Virtual methods
   void calculate(const Forest &forest);
   void printSegmentOutput(std::ostream &output) {};
   void printLocusOutput(std::ostream &output);

 private:
   std::string generateTree(Node *node, const Forest &forest);
   std::ostringstream output_buffer_;
};

#endif