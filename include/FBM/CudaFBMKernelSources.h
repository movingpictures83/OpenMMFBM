#ifndef OPENMM_CUDAFBMKERNELSOURCES_H_
#define OPENMM_CUDAFBMKERNELSOURCES_H_

/* -------------------------------------------------------------------------- *
 *                                   OpenMM                                   *
 * -------------------------------------------------------------------------- *
 * This is part of the OpenMM molecular simulation toolkit originating from   *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2010-2012 Stanford University and the Authors.      *
 * Authors: Peter Eastman                                                     *
 * Contributors:                                                              *
 *                                                                            *
 * This program is free software: you can redistribute it and/or modify       *
 * it under the terms of the GNU Lesser General Public License as published   *
 * by the Free Software Foundation, either version 3 of the License, or       *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU Lesser General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the GNU Lesser General Public License   *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.      *
 * -------------------------------------------------------------------------- */

#include "openmm/internal/windowsExport.h"
#include <string>

namespace OpenMM {

	/**
	 * This class is a central holding place for the source code of CUDA kernels.
	 * The CMake build script inserts declarations into it based on the .cu files in the
	 * kernels subfolder.
	 */

	class OPENMM_EXPORT CudaFBMKernelSources {
		public:
			static const std::string perturb;
			static const std::string copy;
			static const std::string blockHess;
			static const std::string symmetrize;
			static const std::string matmul;
			static const std::string eigen;
			static const std::string sort;
			static const std::string project;
			static const std::string dof;
			static const std::string orthogonalize;
			static const std::string qr;

	};

} // namespace OpenMM

#endif /*OPENMM_CUDALTMDKERNELSOURCES_H_*/
