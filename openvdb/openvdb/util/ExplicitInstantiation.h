// Copyright Contributors to the OpenVDB Project
// SPDX-License-Identifier: MPL-2.0

#ifndef OPENVDB_UTIL_EXPLICIT_INSTANTIATION_HAS_BEEN_INCLUDED
#define OPENVDB_UTIL_EXPLICIT_INSTANTIATION_HAS_BEEN_INCLUDED

#undef OPENVDB_INSTANTIATE
#undef OPENVDB_INSTANTIATE_CLASS
#undef OPENVDB_INSTANTIATE_STRUCT

#define OPENVDB_INSTANTIATE template OPENVDB_TEMPLATE_EXPORT
#define OPENVDB_INSTANTIATE_CLASS template class OPENVDB_TEMPLATE_EXPORT
#define OPENVDB_INSTANTIATE_STRUCT template struct OPENVDB_TEMPLATE_EXPORT

#endif // OPENVDB_UTIL_EXPLICIT_INSTANTIATION_HAS_BEEN_INCLUDED