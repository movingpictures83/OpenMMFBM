__global__ void blockcopyToOpenMM( float *target, float *source, int *blocks, int numblocks, int setnum, int N ) {
    int blockNum = blockIdx.x * blockDim.x + threadIdx.x;
    int dof = 3 * blocks[blockNum] + setnum;
    int atom = dof / 3;

    if( atom >= N || ( blockNum != numblocks && atom >= blocks[blockNum + 1] ) ) {
        return;    // Out of bounds
    }

    *( target + ( dof + atom + 1 )*sizeof( float ) ) = source[dof]; // Save the old
}
