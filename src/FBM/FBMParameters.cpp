#include "FBM/FBMParameters.h"

namespace OpenMMFBM {
	FBMParameters::FBMParameters() {
		blockDelta = 1e-4; //NM
		sDelta = 1e-4; // NM

		blockPlatform = Preference::OpenCL;
	}
}
