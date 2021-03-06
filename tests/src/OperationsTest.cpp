
//          Copyright Sebastian Jeckel 2014.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "OperationsTest.h"
#include "TestUtil.h"

#include "react/engine/PulsecountEngine.h"
#include "react/engine/ToposortEngine.h"
#include "react/engine/SubtreeEngine.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
namespace {

using namespace react;

using P1 = DomainParams<sequential,ToposortEngine>;
using P2 = DomainParams<parallel,ToposortEngine>;
using P3 = DomainParams<parallel,PulsecountEngine>;
using P4 = DomainParams<parallel,SubtreeEngine>;

INSTANTIATE_TYPED_TEST_CASE_P(SeqToposort, OperationsTest, P1);
INSTANTIATE_TYPED_TEST_CASE_P(ParToposort, OperationsTest, P2);
INSTANTIATE_TYPED_TEST_CASE_P(Pulsecount, OperationsTest, P3);
INSTANTIATE_TYPED_TEST_CASE_P(Subtree, OperationsTest, P4);

} // ~namespace