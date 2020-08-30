/****
DIAMOND protein aligner
Copyright (C) 2019-2020 Max Planck Society for the Advancement of Science e.V.

Code developed by Benjamin Buchfink <benjamin.buchfink@tue.mpg.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
****/

#include "test.h"

using std::vector;

namespace Test {

const vector<TestCase> test_cases = {
{ "blastp (target seqs)", "blastp -k3 -c1 -p4" },
};

const vector<uint64_t> ref_hashes = {
0x84c4115983e586c,
0x84c4115983e586c,
0x2def78441b4c3a7a,
0x2b645cd10219017f,
0x25885e48f1ac3e89,
0xbd269d535e4f069c,
0xc4f255d1db2c9320,
0x2b645cd10219017f,
0x1e18a06b7e01a95d,
0x17513888b40a4ecf,
0xb05cbb3d3b7c740a,
0x8ac0057c68f8c239,
0x3f57079d04ca0a86,
0x94d7b547ffa86585,
0x1797ca2c968d754,
0x268e745b23c18ff0,
0xbf42ad46448d9ab8
};

}