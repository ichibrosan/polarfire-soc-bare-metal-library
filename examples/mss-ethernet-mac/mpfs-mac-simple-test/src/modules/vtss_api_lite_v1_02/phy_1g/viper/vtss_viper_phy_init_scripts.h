/* ******************************************************************************
* Copyright © 2015 Microsemi Corporation                                        *
* Permission is hereby granted, free of charge, to any person obtaining a copy  *
* of this software and associated documentation files (the "Software"), to deal *
* in the Software without restriction, including without limitation the rights  *
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     *
* copies of the Software, and to permit persons to whom the Software is         *
* furnished to do so, subject to the following conditions:                      *
* The above copyright notice and this permission notice shall be included in    *
* all copies or substantial portions of the Software.                           *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, *
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     *
* THE SOFTWARE.                                                                 *
******************************************************************************* */
const uint16_t init_script_viper_rev_a[] = {
//     Op,   Page,  Reg, Value,  Mask
//      0,      1,    2,     3,     4
//     --, ------, ----, ------, -----
        0, 0x0000, 0x1f, 0x0000, 0xffff,
        1, 0x0000, 0x16, 0x0001, 0x0001,
        0, 0x0001, 0x1f, 0x2A30, 0xffff,
        1, 0x2A30, 0x08, 0x8000, 0x8000,
        0, 0x2A30, 0x1f, 0x52B5, 0xffff,
        0, 0x52B5, 0x12, 0x0068, 0xffff,
        0, 0x52B5, 0x11, 0x8980, 0xffff,
        0, 0x52B5, 0x10, 0x8f90, 0xffff,
        0, 0x52B5, 0x12, 0x0000, 0xffff,
        0, 0x52B5, 0x11, 0x0003, 0xffff,
        0, 0x52B5, 0x10, 0x8796, 0xffff,
        0, 0x52B5, 0x12, 0x0050, 0xffff,
        0, 0x52B5, 0x11, 0x100f, 0xffff,
        0, 0x52B5, 0x10, 0x87fa, 0xffff,
        0, 0x52B5, 0x1f, 0x2A30, 0xffff,
        1, 0x2A30, 0x08, 0x0000, 0x8000,
        0, 0x2A30, 0x1f, 0x0000, 0xffff,
        1, 0x0000, 0x16, 0x0000, 0x0001,
      0xf, 0xffff, 0xff, 0xffff, 0xffff
};

const uint16_t init_script_viper_rev_b[] = {
//     Op,   Page,  Reg, Value,  Mask
//      0,      1,    2,     3,     4
//     --, ------, ----, ------, -----
        0, 0x0000, 0x1f, 0x0000, 0xffff,
        1, 0x0000, 0x16, 0x0001, 0x0001,
        0, 0x0000, 0x00, 0x1040, 0xffff,
        0, 0x0000, 0x12, 0x0008, 0xffff,
        0, 0x0000, 0x1f, 0x0003, 0xffff,
        0, 0x0003, 0x16, 0x2000, 0xffff,
        0, 0x0003, 0x1f, 0x2A30, 0xffff,
        0, 0x2A30, 0x05, 0x1f20, 0xffff,
        1, 0x2A30, 0x08, 0x8000, 0x8000,
        0, 0x2A30, 0x1f, 0x52B5, 0xffff,
        0, 0x52B5, 0x12, 0x0050, 0xffff,
        0, 0x52B5, 0x11, 0x100f, 0xffff,
        0, 0x52B5, 0x10, 0x87fa, 0xffff,
        0, 0x52B5, 0x12, 0x0004, 0xffff,
        0, 0x52B5, 0x11, 0x9f81, 0xffff,
        0, 0x52B5, 0x10, 0x9688, 0xffff,
        0, 0x52B5, 0x1f, 0x0002, 0xffff,
        0, 0x0002, 0x10, 0x028E, 0xffff,
        0, 0x0002, 0x1f, 0x52B5, 0xffff,
        0, 0x52B5, 0x12, 0x0008, 0xffff,
        0, 0x52B5, 0x11, 0xa518, 0xffff,
        0, 0x52B5, 0x10, 0x8486, 0xffff,
        0, 0x52B5, 0x12, 0x006d, 0xffff,
        0, 0x52B5, 0x11, 0xc696, 0xffff,
        0, 0x52B5, 0x10, 0x8488, 0xffff,
        0, 0x52B5, 0x12, 0x0000, 0xffff,
        0, 0x52B5, 0x11, 0x0912, 0xffff,
        0, 0x52B5, 0x10, 0x848a, 0xffff,
        0, 0x52B5, 0x1f, 0x2A30, 0xffff,
        1, 0x2A30, 0x08, 0x0000, 0x8000,
        0, 0x2A30, 0x1f, 0x0000, 0xffff,
        1, 0x0000, 0x16, 0x0000, 0x0001,
      0xf, 0xffff, 0xff, 0xffff, 0xffff
};