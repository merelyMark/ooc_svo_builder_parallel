#ifndef PARTITIONER_H_
#define PARTITIONER_H_

#include <tri_tools.h>
#include <trip_tools.h>
#include <file_tools.h>
#include "globals.h"
#include <TriReaderIter.h>
#include "Buffer.h"
#include "morton.h"
#include "voxelizer.h"

typedef Vec<3, unsigned int> uivec3;

// Partitioning-related stuff
size_t estimate_partitions(const size_t gridsize, const size_t memory_limit);
void removeTripFiles(const TripInfo &trip_info);
TripInfo partition(const TriInfo& tri_info, const size_t n_partitions, const size_t gridsize, TriReaderIter *);

#endif /* PARTITIONER_H_ */
