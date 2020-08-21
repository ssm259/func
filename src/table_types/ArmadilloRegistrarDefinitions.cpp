#include "UniformArmadilloPrecomputedInterpolationTable.hpp"
#include "config.hpp" // FUNC_USE_BOOST_AUTODIFF, FUNC_USE_ARMADILLO

FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformArmadilloPrecomputedInterpolationTable,4);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformArmadilloPrecomputedInterpolationTable,5);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformArmadilloPrecomputedInterpolationTable,6);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformArmadilloPrecomputedInterpolationTable,7);

#ifdef FUNC_USE_BOOST_AUTODIFF
#include "UniformPadeTable.hpp"
#include "NonUniformLookupTable.hpp"
#include "NonUniformLinearInterpolationTable.hpp"
#include "NonUniformPseudoLinearInterpolationTable.hpp"
#include "NonUniformCubicPrecomputedInterpolationTable.hpp"
#include "NonUniformPseudoCubicPrecomputedInterpolationTable.hpp"

FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,1,1);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,2,1);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,3,1);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,4,1);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,5,1);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,6,1);

FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,2,2);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,3,2);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,4,2);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,5,2);

FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,3,3);
FUNC_REGISTER_TEMPLATED_DOUBLE_AND_FLOAT_LUT_IMPLS(UniformPadeTable,4,3);

// Just registering these tables on double->double
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,3);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,4);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,5);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,6);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,7);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformCubicPrecomputedInterpolationTable,double,double,8);

FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,3);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,4);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,5);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,6);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,7);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformLinearInterpolationTable,double,double,8);

FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,3);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,4);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,5);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,6);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,7);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoCubicPrecomputedInterpolationTable,double,double,8);

FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,3);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,4);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,5);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,6);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,7);
FUNC_REGISTER_NONUNIFORM_IMPL(NonUniformPseudoLinearInterpolationTable,double,double,8);
#endif
