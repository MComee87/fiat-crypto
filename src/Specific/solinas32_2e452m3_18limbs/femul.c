static void femul(uint32_t out[18], const uint32_t in1[18], const uint32_t in2[18]) {
  { const uint32_t x36 = in1[17];
  { const uint32_t x37 = in1[16];
  { const uint32_t x35 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x70 = in2[17];
  { const uint32_t x71 = in2[16];
  { const uint32_t x69 = in2[15];
  { const uint32_t x67 = in2[14];
  { const uint32_t x65 = in2[13];
  { const uint32_t x63 = in2[12];
  { const uint32_t x61 = in2[11];
  { const uint32_t x59 = in2[10];
  { const uint32_t x57 = in2[9];
  { const uint32_t x55 = in2[8];
  { const uint32_t x53 = in2[7];
  { const uint32_t x51 = in2[6];
  { const uint32_t x49 = in2[5];
  { const uint32_t x47 = in2[4];
  { const uint32_t x45 = in2[3];
  { const uint32_t x43 = in2[2];
  { const uint32_t x41 = in2[1];
  { const uint32_t x39 = in2[0];
  { uint64_t x72 = (((uint64_t)x5 * x70) + ((0x2 * ((uint64_t)x7 * x71)) + ((0x2 * ((uint64_t)x9 * x69)) + ((0x2 * ((uint64_t)x11 * x67)) + ((0x2 * ((uint64_t)x13 * x65)) + ((0x2 * ((uint64_t)x15 * x63)) + ((0x2 * ((uint64_t)x17 * x61)) + ((0x2 * ((uint64_t)x19 * x59)) + (((uint64_t)x21 * x57) + (((uint64_t)x23 * x55) + ((0x2 * ((uint64_t)x25 * x53)) + ((0x2 * ((uint64_t)x27 * x51)) + ((0x2 * ((uint64_t)x29 * x49)) + ((0x2 * ((uint64_t)x31 * x47)) + ((0x2 * ((uint64_t)x33 * x45)) + ((0x2 * ((uint64_t)x35 * x43)) + ((0x2 * ((uint64_t)x37 * x41)) + ((uint64_t)x36 * x39))))))))))))))))));
  { uint64_t x73 = ((((uint64_t)x5 * x71) + ((0x2 * ((uint64_t)x7 * x69)) + ((0x2 * ((uint64_t)x9 * x67)) + ((0x2 * ((uint64_t)x11 * x65)) + ((0x2 * ((uint64_t)x13 * x63)) + ((0x2 * ((uint64_t)x15 * x61)) + ((0x2 * ((uint64_t)x17 * x59)) + (((uint64_t)x19 * x57) + (((uint64_t)x21 * x55) + (((uint64_t)x23 * x53) + ((0x2 * ((uint64_t)x25 * x51)) + ((0x2 * ((uint64_t)x27 * x49)) + ((0x2 * ((uint64_t)x29 * x47)) + ((0x2 * ((uint64_t)x31 * x45)) + ((0x2 * ((uint64_t)x33 * x43)) + ((0x2 * ((uint64_t)x35 * x41)) + ((uint64_t)x37 * x39))))))))))))))))) + (0x3 * ((uint64_t)x36 * x70)));
  { uint64_t x74 = ((((uint64_t)x5 * x69) + ((0x2 * ((uint64_t)x7 * x67)) + ((0x2 * ((uint64_t)x9 * x65)) + ((0x2 * ((uint64_t)x11 * x63)) + ((0x2 * ((uint64_t)x13 * x61)) + ((0x2 * ((uint64_t)x15 * x59)) + (((uint64_t)x17 * x57) + (((uint64_t)x19 * x55) + (((uint64_t)x21 * x53) + (((uint64_t)x23 * x51) + ((0x2 * ((uint64_t)x25 * x49)) + ((0x2 * ((uint64_t)x27 * x47)) + ((0x2 * ((uint64_t)x29 * x45)) + ((0x2 * ((uint64_t)x31 * x43)) + ((0x2 * ((uint64_t)x33 * x41)) + ((uint64_t)x35 * x39)))))))))))))))) + (0x3 * (((uint64_t)x37 * x70) + ((uint64_t)x36 * x71))));
  { uint64_t x75 = ((((uint64_t)x5 * x67) + ((0x2 * ((uint64_t)x7 * x65)) + ((0x2 * ((uint64_t)x9 * x63)) + ((0x2 * ((uint64_t)x11 * x61)) + ((0x2 * ((uint64_t)x13 * x59)) + (((uint64_t)x15 * x57) + (((uint64_t)x17 * x55) + (((uint64_t)x19 * x53) + (((uint64_t)x21 * x51) + (((uint64_t)x23 * x49) + ((0x2 * ((uint64_t)x25 * x47)) + ((0x2 * ((uint64_t)x27 * x45)) + ((0x2 * ((uint64_t)x29 * x43)) + ((0x2 * ((uint64_t)x31 * x41)) + ((uint64_t)x33 * x39))))))))))))))) + (0x3 * (((uint64_t)x35 * x70) + (((uint64_t)x37 * x71) + ((uint64_t)x36 * x69)))));
  { uint64_t x76 = ((((uint64_t)x5 * x65) + ((0x2 * ((uint64_t)x7 * x63)) + ((0x2 * ((uint64_t)x9 * x61)) + ((0x2 * ((uint64_t)x11 * x59)) + (((uint64_t)x13 * x57) + (((uint64_t)x15 * x55) + (((uint64_t)x17 * x53) + (((uint64_t)x19 * x51) + (((uint64_t)x21 * x49) + (((uint64_t)x23 * x47) + ((0x2 * ((uint64_t)x25 * x45)) + ((0x2 * ((uint64_t)x27 * x43)) + ((0x2 * ((uint64_t)x29 * x41)) + ((uint64_t)x31 * x39)))))))))))))) + (0x3 * (((uint64_t)x33 * x70) + (((uint64_t)x35 * x71) + (((uint64_t)x37 * x69) + ((uint64_t)x36 * x67))))));
  { uint64_t x77 = ((((uint64_t)x5 * x63) + ((0x2 * ((uint64_t)x7 * x61)) + ((0x2 * ((uint64_t)x9 * x59)) + (((uint64_t)x11 * x57) + (((uint64_t)x13 * x55) + (((uint64_t)x15 * x53) + (((uint64_t)x17 * x51) + (((uint64_t)x19 * x49) + (((uint64_t)x21 * x47) + (((uint64_t)x23 * x45) + ((0x2 * ((uint64_t)x25 * x43)) + ((0x2 * ((uint64_t)x27 * x41)) + ((uint64_t)x29 * x39))))))))))))) + (0x3 * (((uint64_t)x31 * x70) + (((uint64_t)x33 * x71) + (((uint64_t)x35 * x69) + (((uint64_t)x37 * x67) + ((uint64_t)x36 * x65)))))));
  { uint64_t x78 = ((((uint64_t)x5 * x61) + ((0x2 * ((uint64_t)x7 * x59)) + (((uint64_t)x9 * x57) + (((uint64_t)x11 * x55) + (((uint64_t)x13 * x53) + (((uint64_t)x15 * x51) + (((uint64_t)x17 * x49) + (((uint64_t)x19 * x47) + (((uint64_t)x21 * x45) + (((uint64_t)x23 * x43) + ((0x2 * ((uint64_t)x25 * x41)) + ((uint64_t)x27 * x39)))))))))))) + (0x3 * (((uint64_t)x29 * x70) + (((uint64_t)x31 * x71) + (((uint64_t)x33 * x69) + (((uint64_t)x35 * x67) + (((uint64_t)x37 * x65) + ((uint64_t)x36 * x63))))))));
  { uint64_t x79 = ((((uint64_t)x5 * x59) + (((uint64_t)x7 * x57) + (((uint64_t)x9 * x55) + (((uint64_t)x11 * x53) + (((uint64_t)x13 * x51) + (((uint64_t)x15 * x49) + (((uint64_t)x17 * x47) + (((uint64_t)x19 * x45) + (((uint64_t)x21 * x43) + (((uint64_t)x23 * x41) + ((uint64_t)x25 * x39))))))))))) + (0x3 * (((uint64_t)x27 * x70) + (((uint64_t)x29 * x71) + (((uint64_t)x31 * x69) + (((uint64_t)x33 * x67) + (((uint64_t)x35 * x65) + (((uint64_t)x37 * x63) + ((uint64_t)x36 * x61)))))))));
  { uint64_t x80 = ((((uint64_t)x5 * x57) + ((0x2 * ((uint64_t)x7 * x55)) + ((0x2 * ((uint64_t)x9 * x53)) + ((0x2 * ((uint64_t)x11 * x51)) + ((0x2 * ((uint64_t)x13 * x49)) + ((0x2 * ((uint64_t)x15 * x47)) + ((0x2 * ((uint64_t)x17 * x45)) + ((0x2 * ((uint64_t)x19 * x43)) + ((0x2 * ((uint64_t)x21 * x41)) + ((uint64_t)x23 * x39)))))))))) + (0x3 * ((0x2 * ((uint64_t)x25 * x70)) + ((0x2 * ((uint64_t)x27 * x71)) + ((0x2 * ((uint64_t)x29 * x69)) + ((0x2 * ((uint64_t)x31 * x67)) + ((0x2 * ((uint64_t)x33 * x65)) + ((0x2 * ((uint64_t)x35 * x63)) + ((0x2 * ((uint64_t)x37 * x61)) + (0x2 * ((uint64_t)x36 * x59)))))))))));
  { uint64_t x81 = ((((uint64_t)x5 * x55) + ((0x2 * ((uint64_t)x7 * x53)) + ((0x2 * ((uint64_t)x9 * x51)) + ((0x2 * ((uint64_t)x11 * x49)) + ((0x2 * ((uint64_t)x13 * x47)) + ((0x2 * ((uint64_t)x15 * x45)) + ((0x2 * ((uint64_t)x17 * x43)) + ((0x2 * ((uint64_t)x19 * x41)) + ((uint64_t)x21 * x39))))))))) + (0x3 * (((uint64_t)x23 * x70) + ((0x2 * ((uint64_t)x25 * x71)) + ((0x2 * ((uint64_t)x27 * x69)) + ((0x2 * ((uint64_t)x29 * x67)) + ((0x2 * ((uint64_t)x31 * x65)) + ((0x2 * ((uint64_t)x33 * x63)) + ((0x2 * ((uint64_t)x35 * x61)) + ((0x2 * ((uint64_t)x37 * x59)) + ((uint64_t)x36 * x57)))))))))));
  { uint64_t x82 = ((((uint64_t)x5 * x53) + ((0x2 * ((uint64_t)x7 * x51)) + ((0x2 * ((uint64_t)x9 * x49)) + ((0x2 * ((uint64_t)x11 * x47)) + ((0x2 * ((uint64_t)x13 * x45)) + ((0x2 * ((uint64_t)x15 * x43)) + ((0x2 * ((uint64_t)x17 * x41)) + ((uint64_t)x19 * x39)))))))) + (0x3 * (((uint64_t)x21 * x70) + (((uint64_t)x23 * x71) + ((0x2 * ((uint64_t)x25 * x69)) + ((0x2 * ((uint64_t)x27 * x67)) + ((0x2 * ((uint64_t)x29 * x65)) + ((0x2 * ((uint64_t)x31 * x63)) + ((0x2 * ((uint64_t)x33 * x61)) + ((0x2 * ((uint64_t)x35 * x59)) + (((uint64_t)x37 * x57) + ((uint64_t)x36 * x55))))))))))));
  { uint64_t x83 = ((((uint64_t)x5 * x51) + ((0x2 * ((uint64_t)x7 * x49)) + ((0x2 * ((uint64_t)x9 * x47)) + ((0x2 * ((uint64_t)x11 * x45)) + ((0x2 * ((uint64_t)x13 * x43)) + ((0x2 * ((uint64_t)x15 * x41)) + ((uint64_t)x17 * x39))))))) + (0x3 * (((uint64_t)x19 * x70) + (((uint64_t)x21 * x71) + (((uint64_t)x23 * x69) + ((0x2 * ((uint64_t)x25 * x67)) + ((0x2 * ((uint64_t)x27 * x65)) + ((0x2 * ((uint64_t)x29 * x63)) + ((0x2 * ((uint64_t)x31 * x61)) + ((0x2 * ((uint64_t)x33 * x59)) + (((uint64_t)x35 * x57) + (((uint64_t)x37 * x55) + ((uint64_t)x36 * x53)))))))))))));
  { uint64_t x84 = ((((uint64_t)x5 * x49) + ((0x2 * ((uint64_t)x7 * x47)) + ((0x2 * ((uint64_t)x9 * x45)) + ((0x2 * ((uint64_t)x11 * x43)) + ((0x2 * ((uint64_t)x13 * x41)) + ((uint64_t)x15 * x39)))))) + (0x3 * (((uint64_t)x17 * x70) + (((uint64_t)x19 * x71) + (((uint64_t)x21 * x69) + (((uint64_t)x23 * x67) + ((0x2 * ((uint64_t)x25 * x65)) + ((0x2 * ((uint64_t)x27 * x63)) + ((0x2 * ((uint64_t)x29 * x61)) + ((0x2 * ((uint64_t)x31 * x59)) + (((uint64_t)x33 * x57) + (((uint64_t)x35 * x55) + (((uint64_t)x37 * x53) + ((uint64_t)x36 * x51))))))))))))));
  { uint64_t x85 = ((((uint64_t)x5 * x47) + ((0x2 * ((uint64_t)x7 * x45)) + ((0x2 * ((uint64_t)x9 * x43)) + ((0x2 * ((uint64_t)x11 * x41)) + ((uint64_t)x13 * x39))))) + (0x3 * (((uint64_t)x15 * x70) + (((uint64_t)x17 * x71) + (((uint64_t)x19 * x69) + (((uint64_t)x21 * x67) + (((uint64_t)x23 * x65) + ((0x2 * ((uint64_t)x25 * x63)) + ((0x2 * ((uint64_t)x27 * x61)) + ((0x2 * ((uint64_t)x29 * x59)) + (((uint64_t)x31 * x57) + (((uint64_t)x33 * x55) + (((uint64_t)x35 * x53) + (((uint64_t)x37 * x51) + ((uint64_t)x36 * x49)))))))))))))));
  { uint64_t x86 = ((((uint64_t)x5 * x45) + ((0x2 * ((uint64_t)x7 * x43)) + ((0x2 * ((uint64_t)x9 * x41)) + ((uint64_t)x11 * x39)))) + (0x3 * (((uint64_t)x13 * x70) + (((uint64_t)x15 * x71) + (((uint64_t)x17 * x69) + (((uint64_t)x19 * x67) + (((uint64_t)x21 * x65) + (((uint64_t)x23 * x63) + ((0x2 * ((uint64_t)x25 * x61)) + ((0x2 * ((uint64_t)x27 * x59)) + (((uint64_t)x29 * x57) + (((uint64_t)x31 * x55) + (((uint64_t)x33 * x53) + (((uint64_t)x35 * x51) + (((uint64_t)x37 * x49) + ((uint64_t)x36 * x47))))))))))))))));
  { uint64_t x87 = ((((uint64_t)x5 * x43) + ((0x2 * ((uint64_t)x7 * x41)) + ((uint64_t)x9 * x39))) + (0x3 * (((uint64_t)x11 * x70) + (((uint64_t)x13 * x71) + (((uint64_t)x15 * x69) + (((uint64_t)x17 * x67) + (((uint64_t)x19 * x65) + (((uint64_t)x21 * x63) + (((uint64_t)x23 * x61) + ((0x2 * ((uint64_t)x25 * x59)) + (((uint64_t)x27 * x57) + (((uint64_t)x29 * x55) + (((uint64_t)x31 * x53) + (((uint64_t)x33 * x51) + (((uint64_t)x35 * x49) + (((uint64_t)x37 * x47) + ((uint64_t)x36 * x45)))))))))))))))));
  { uint64_t x88 = ((((uint64_t)x5 * x41) + ((uint64_t)x7 * x39)) + (0x3 * (((uint64_t)x9 * x70) + (((uint64_t)x11 * x71) + (((uint64_t)x13 * x69) + (((uint64_t)x15 * x67) + (((uint64_t)x17 * x65) + (((uint64_t)x19 * x63) + (((uint64_t)x21 * x61) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + (((uint64_t)x31 * x51) + (((uint64_t)x33 * x49) + (((uint64_t)x35 * x47) + (((uint64_t)x37 * x45) + ((uint64_t)x36 * x43))))))))))))))))));
  { uint64_t x89 = (((uint64_t)x5 * x39) + (0x3 * ((0x2 * ((uint64_t)x7 * x70)) + ((0x2 * ((uint64_t)x9 * x71)) + ((0x2 * ((uint64_t)x11 * x69)) + ((0x2 * ((uint64_t)x13 * x67)) + ((0x2 * ((uint64_t)x15 * x65)) + ((0x2 * ((uint64_t)x17 * x63)) + ((0x2 * ((uint64_t)x19 * x61)) + ((0x2 * ((uint64_t)x21 * x59)) + (((uint64_t)x23 * x57) + ((0x2 * ((uint64_t)x25 * x55)) + ((0x2 * ((uint64_t)x27 * x53)) + ((0x2 * ((uint64_t)x29 * x51)) + ((0x2 * ((uint64_t)x31 * x49)) + ((0x2 * ((uint64_t)x33 * x47)) + ((0x2 * ((uint64_t)x35 * x45)) + ((0x2 * ((uint64_t)x37 * x43)) + (0x2 * ((uint64_t)x36 * x41))))))))))))))))))));
  { uint64_t x90 = (x89 >> 0x1a);
  { uint32_t x91 = ((uint32_t)x89 & 0x3ffffff);
  { uint64_t x92 = (x90 + x88);
  { uint64_t x93 = (x92 >> 0x19);
  { uint32_t x94 = ((uint32_t)x92 & 0x1ffffff);
  { uint64_t x95 = (x93 + x87);
  { uint64_t x96 = (x95 >> 0x19);
  { uint32_t x97 = ((uint32_t)x95 & 0x1ffffff);
  { uint64_t x98 = (x96 + x86);
  { uint64_t x99 = (x98 >> 0x19);
  { uint32_t x100 = ((uint32_t)x98 & 0x1ffffff);
  { uint64_t x101 = (x99 + x85);
  { uint64_t x102 = (x101 >> 0x19);
  { uint32_t x103 = ((uint32_t)x101 & 0x1ffffff);
  { uint64_t x104 = (x102 + x84);
  { uint64_t x105 = (x104 >> 0x19);
  { uint32_t x106 = ((uint32_t)x104 & 0x1ffffff);
  { uint64_t x107 = (x105 + x83);
  { uint64_t x108 = (x107 >> 0x19);
  { uint32_t x109 = ((uint32_t)x107 & 0x1ffffff);
  { uint64_t x110 = (x108 + x82);
  { uint64_t x111 = (x110 >> 0x19);
  { uint32_t x112 = ((uint32_t)x110 & 0x1ffffff);
  { uint64_t x113 = (x111 + x81);
  { uint64_t x114 = (x113 >> 0x19);
  { uint32_t x115 = ((uint32_t)x113 & 0x1ffffff);
  { uint64_t x116 = (x114 + x80);
  { uint64_t x117 = (x116 >> 0x1a);
  { uint32_t x118 = ((uint32_t)x116 & 0x3ffffff);
  { uint64_t x119 = (x117 + x79);
  { uint64_t x120 = (x119 >> 0x19);
  { uint32_t x121 = ((uint32_t)x119 & 0x1ffffff);
  { uint64_t x122 = (x120 + x78);
  { uint64_t x123 = (x122 >> 0x19);
  { uint32_t x124 = ((uint32_t)x122 & 0x1ffffff);
  { uint64_t x125 = (x123 + x77);
  { uint64_t x126 = (x125 >> 0x19);
  { uint32_t x127 = ((uint32_t)x125 & 0x1ffffff);
  { uint64_t x128 = (x126 + x76);
  { uint64_t x129 = (x128 >> 0x19);
  { uint32_t x130 = ((uint32_t)x128 & 0x1ffffff);
  { uint64_t x131 = (x129 + x75);
  { uint64_t x132 = (x131 >> 0x19);
  { uint32_t x133 = ((uint32_t)x131 & 0x1ffffff);
  { uint64_t x134 = (x132 + x74);
  { uint64_t x135 = (x134 >> 0x19);
  { uint32_t x136 = ((uint32_t)x134 & 0x1ffffff);
  { uint64_t x137 = (x135 + x73);
  { uint64_t x138 = (x137 >> 0x19);
  { uint32_t x139 = ((uint32_t)x137 & 0x1ffffff);
  { uint64_t x140 = (x138 + x72);
  { uint64_t x141 = (x140 >> 0x19);
  { uint32_t x142 = ((uint32_t)x140 & 0x1ffffff);
  { uint64_t x143 = (x91 + (0x3 * x141));
  { uint32_t x144 = (uint32_t) (x143 >> 0x1a);
  { uint32_t x145 = ((uint32_t)x143 & 0x3ffffff);
  { uint32_t x146 = (x144 + x94);
  { uint32_t x147 = (x146 >> 0x19);
  { uint32_t x148 = (x146 & 0x1ffffff);
  out[0] = x145;
  out[1] = x148;
  out[2] = (x147 + x97);
  out[3] = x100;
  out[4] = x103;
  out[5] = x106;
  out[6] = x109;
  out[7] = x112;
  out[8] = x115;
  out[9] = x118;
  out[10] = x121;
  out[11] = x124;
  out[12] = x127;
  out[13] = x130;
  out[14] = x133;
  out[15] = x136;
  out[16] = x139;
  out[17] = x142;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
