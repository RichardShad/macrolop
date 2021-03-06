#include "assert.h"

#include "../include/macrolop/eval.h"
#include "../include/macrolop/lang.h"

#define FOO(x) v((x + 1))
#define BAR(x) v((x * 3))

ASSERT_EQ(call(FOO, call(BAR, v(123))), v((123 * 3) + 1));

#undef FOO
#undef BAR

#define FOO() v(123)

ASSERT_EQ(call(FOO, ), v(123));

#undef FOO

#define FOO(x, y, z) v(x##y##z)
#define BAR(x, y)    v(x + y)

ASSERT_EQ(call(v(BAR), v(5) v(7)), v(5 + 7));
ASSERT_EQ(call(call(FOO, v(B) v(A) v(R)), v(6) v(11)), v(6 + 11));

#undef FOO
#undef BAR

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`, but nonetheless the
// second call to `FOO` must be performed as expected.
#define FOO(op) call(op, v(123))
#define OP(x)   call(FOO, v(ID))
#define ID(x)   v(x)

ASSERT_EQ(call(FOO, v(OP)), v(123));

#undef FOO
#undef OP
#undef ID
