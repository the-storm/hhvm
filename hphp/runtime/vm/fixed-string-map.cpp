/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#include "hphp/runtime/vm/fixed-string-map.h"

#include "hphp/runtime/base/execution-context.h"
#include "hphp/runtime/base/struct-log-util.h"

#include "hphp/runtime/vm/jit/tc.h"

#include "hphp/util/stack-trace.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

namespace FSM {

const StringData* null_key;

} // FSM

///////////////////////////////////////////////////////////////////////////////
}
