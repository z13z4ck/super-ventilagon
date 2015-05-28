// Precalculated transformations
// 64 row combinations
// times 6 possible rotations
// times 2 mirrored options = 768 bytes

const unsigned char PROGMEM transformations[] = {
  // Mirrored: no
  // Rotated: 0
  0b000000, 0b000001, 0b000010, 0b000011, 0b000100, 0b000101, 0b000110, 0b000111,
  0b001000, 0b001001, 0b001010, 0b001011, 0b001100, 0b001101, 0b001110, 0b001111,
  0b010000, 0b010001, 0b010010, 0b010011, 0b010100, 0b010101, 0b010110, 0b010111,
  0b011000, 0b011001, 0b011010, 0b011011, 0b011100, 0b011101, 0b011110, 0b011111,
  0b100000, 0b100001, 0b100010, 0b100011, 0b100100, 0b100101, 0b100110, 0b100111,
  0b101000, 0b101001, 0b101010, 0b101011, 0b101100, 0b101101, 0b101110, 0b101111,
  0b110000, 0b110001, 0b110010, 0b110011, 0b110100, 0b110101, 0b110110, 0b110111,
  0b111000, 0b111001, 0b111010, 0b111011, 0b111100, 0b111101, 0b111110, 0b111111,
  // Rotated: 1
  0b000000, 0b000010, 0b000100, 0b000110, 0b001000, 0b001010, 0b001100, 0b001110, 
  0b010000, 0b010010, 0b010100, 0b010110, 0b011000, 0b011010, 0b011100, 0b011110,
  0b100000, 0b100010, 0b100100, 0b100110, 0b101000, 0b101010, 0b101100, 0b101110,
  0b110000, 0b110010, 0b110100, 0b110110, 0b111000, 0b111010, 0b111100, 0b111110,
  0b000001, 0b000011, 0b000101, 0b000111, 0b001001, 0b001011, 0b001101, 0b001111,
  0b010001, 0b010011, 0b010101, 0b010111, 0b011001, 0b011011, 0b011101, 0b011111,
  0b100001, 0b100011, 0b100101, 0b100111, 0b101001, 0b101011, 0b101101, 0b101111,
  0b110001, 0b110011, 0b110101, 0b110111, 0b111001, 0b111011, 0b111101, 0b111111,
  // Rotated: 2
  0b000000, 0b000100, 0b001000, 0b001100, 0b010000, 0b010100, 0b011000, 0b011100,
  0b100000, 0b100100, 0b101000, 0b101100, 0b110000, 0b110100, 0b111000, 0b111100,
  0b000001, 0b000101, 0b001001, 0b001101, 0b010001, 0b010101, 0b011001, 0b011101,
  0b100001, 0b100101, 0b101001, 0b101101, 0b110001, 0b110101, 0b111001, 0b111101,
  0b000010, 0b000110, 0b001010, 0b001110, 0b010010, 0b010110, 0b011010, 0b011110,
  0b100010, 0b100110, 0b101010, 0b101110, 0b110010, 0b110110, 0b111010, 0b111110,
  0b000011, 0b000111, 0b001011, 0b001111, 0b010011, 0b010111, 0b011011, 0b011111,
  0b100011, 0b100111, 0b101011, 0b101111, 0b110011, 0b110111, 0b111011, 0b111111,
  // Rotated: 3
  0b000000, 0b001000, 0b010000, 0b011000, 0b100000, 0b101000, 0b110000, 0b111000,
  0b000001, 0b001001, 0b010001, 0b011001, 0b100001, 0b101001, 0b110001, 0b111001,
  0b000010, 0b001010, 0b010010, 0b011010, 0b100010, 0b101010, 0b110010, 0b111010,
  0b000011, 0b001011, 0b010011, 0b011011, 0b100011, 0b101011, 0b110011, 0b111011,
  0b000100, 0b001100, 0b010100, 0b011100, 0b100100, 0b101100, 0b110100, 0b111100,
  0b000101, 0b001101, 0b010101, 0b011101, 0b100101, 0b101101, 0b110101, 0b111101,
  0b000110, 0b001110, 0b010110, 0b011110, 0b100110, 0b101110, 0b110110, 0b111110,
  0b000111, 0b001111, 0b010111, 0b011111, 0b100111, 0b101111, 0b110111, 0b111111,
  // Rotated: 4
  0b000000, 0b010000, 0b100000, 0b110000, 0b000001, 0b010001, 0b100001, 0b110001, 
  0b000010, 0b010010, 0b100010, 0b110010, 0b000011, 0b010011, 0b100011, 0b110011, 
  0b000100, 0b010100, 0b100100, 0b110100, 0b000101, 0b010101, 0b100101, 0b110101, 
  0b000110, 0b010110, 0b100110, 0b110110, 0b000111, 0b010111, 0b100111, 0b110111, 
  0b001000, 0b011000, 0b101000, 0b111000, 0b001001, 0b011001, 0b101001, 0b111001,
  0b001010, 0b011010, 0b101010, 0b111010, 0b001011, 0b011011, 0b101011, 0b111011,
  0b001100, 0b011100, 0b101100, 0b111100, 0b001101, 0b011101, 0b101101, 0b111101,
  0b001110, 0b011110, 0b101110, 0b111110, 0b001111, 0b011111, 0b101111, 0b111111,
  // Rotated: 5
  0b000000, 0b100000, 0b000001, 0b100001, 0b000010, 0b100010, 0b000011, 0b100011, 
  0b000100, 0b100100, 0b000101, 0b100101, 0b000110, 0b100110, 0b000111, 0b100111, 
  0b001000, 0b101000, 0b001001, 0b101001, 0b001010, 0b101010, 0b001011, 0b101011, 
  0b001100, 0b101100, 0b001101, 0b101101, 0b001110, 0b101110, 0b001111, 0b101111, 
  0b010000, 0b110000, 0b010001, 0b110001, 0b010010, 0b110010, 0b010011, 0b110011, 
  0b010100, 0b110100, 0b010101, 0b110101, 0b010110, 0b110110, 0b010111, 0b110111,
  0b011000, 0b111000, 0b011001, 0b111001, 0b011010, 0b111010, 0b011011, 0b111011,
  0b011100, 0b111100, 0b011101, 0b111101, 0b011110, 0b111110, 0b011111, 0b111111,
  // Mirrored: yes
  // Rotated: 0
  0b000000, 0b100000, 0b010000, 0b110000, 0b001000, 0b101000, 0b011000, 0b111000, 
  0b000100, 0b100100, 0b010100, 0b110100, 0b001100, 0b101100, 0b011100, 0b111100, 
  0b000010, 0b100010, 0b010010, 0b110010, 0b001010, 0b101010, 0b011010, 0b111010,
  0b000110, 0b100110, 0b010110, 0b110110, 0b001110, 0b101110, 0b011110, 0b111110, 
  0b000001, 0b100001, 0b010001, 0b110001, 0b001001, 0b101001, 0b011001, 0b111001, 
  0b000101, 0b100101, 0b010101, 0b110101, 0b001101, 0b101101, 0b011101, 0b111101, 
  0b000011, 0b100011, 0b010011, 0b110011, 0b001011, 0b101011, 0b011011, 0b111011, 
  0b000111, 0b100111, 0b010111, 0b110111, 0b001111, 0b101111, 0b011111, 0b111111,
  // Rotated: 1
  0b000000, 0b010000, 0b001000, 0b011000, 0b000100, 0b010100, 0b001100, 0b011100, 
  0b000010, 0b010010, 0b001010, 0b011010, 0b000110, 0b010110, 0b001110, 0b011110, 
  0b000001, 0b010001, 0b001001, 0b011001, 0b000101, 0b010101, 0b001101, 0b011101, 
  0b000011, 0b010011, 0b001011, 0b011011, 0b000111, 0b010111, 0b001111, 0b011111,
  0b100000, 0b110000, 0b101000, 0b111000, 0b100100, 0b110100, 0b101100, 0b111100,
  0b100010, 0b110010, 0b101010, 0b111010, 0b100110, 0b110110, 0b101110, 0b111110,
  0b100001, 0b110001, 0b101001, 0b111001, 0b100101, 0b110101, 0b101101, 0b111101,
  0b100011, 0b110011, 0b101011, 0b111011, 0b100111, 0b110111, 0b101111, 0b111111,
  // Rotated: 2
  0b000000, 0b001000, 0b000100, 0b001100, 0b000010, 0b001010, 0b000110, 0b001110,
  0b000001, 0b001001, 0b000101, 0b001101, 0b000011, 0b001011, 0b000111, 0b001111,
  0b100000, 0b101000, 0b100100, 0b101100, 0b100010, 0b101010, 0b100110, 0b101110,
  0b100001, 0b101001, 0b100101, 0b101101, 0b100011, 0b101011, 0b100111, 0b101111,
  0b010000, 0b011000, 0b010100, 0b011100, 0b010010, 0b011010, 0b010110, 0b011110,
  0b010001, 0b011001, 0b010101, 0b011101, 0b010011, 0b011011, 0b010111, 0b011111,
  0b110000, 0b111000, 0b110100, 0b111100, 0b110010, 0b111010, 0b110110, 0b111110,
  0b110001, 0b111001, 0b110101, 0b111101, 0b110011, 0b111011, 0b110111, 0b111111,
  // Rotated: 3
  0b000000, 0b000100, 0b000010, 0b000110, 0b000001, 0b000101, 0b000011, 0b000111,
  0b100000, 0b100100, 0b100010, 0b100110, 0b100001, 0b100101, 0b100011, 0b100111,
  0b010000, 0b010100, 0b010010, 0b010110, 0b010001, 0b010101, 0b010011, 0b010111,
  0b110000, 0b110100, 0b110010, 0b110110, 0b110001, 0b110101, 0b110011, 0b110111,
  0b001000, 0b001100, 0b001010, 0b001110, 0b001001, 0b001101, 0b001011, 0b001111,
  0b101000, 0b101100, 0b101010, 0b101110, 0b101001, 0b101101, 0b101011, 0b101111,
  0b011000, 0b011100, 0b011010, 0b011110, 0b011001, 0b011101, 0b011011, 0b011111,
  0b111000, 0b111100, 0b111010, 0b111110, 0b111001, 0b111101, 0b111011, 0b111111,
  // Rotated: 4
  0b000000, 0b000010, 0b000001, 0b000011, 0b100000, 0b100010, 0b100001, 0b100011,
  0b010000, 0b010010, 0b010001, 0b010011, 0b110000, 0b110010, 0b110001, 0b110011,
  0b001000, 0b001010, 0b001001, 0b001011, 0b101000, 0b101010, 0b101001, 0b101011,
  0b011000, 0b011010, 0b011001, 0b011011, 0b111000, 0b111010, 0b111001, 0b111011,
  0b000100, 0b000110, 0b000101, 0b000111, 0b100100, 0b100110, 0b100101, 0b100111,
  0b010100, 0b010110, 0b010101, 0b010111, 0b110100, 0b110110, 0b110101, 0b110111,
  0b001100, 0b001110, 0b001101, 0b001111, 0b101100, 0b101110, 0b101101, 0b101111,
  0b011100, 0b011110, 0b011101, 0b011111, 0b111100, 0b111110, 0b111101, 0b111111,
  // Rotated: 5
  0b000000, 0b000001, 0b100000, 0b100001, 0b010000, 0b010001, 0b110000, 0b110001,
  0b001000, 0b001001, 0b101000, 0b101001, 0b011000, 0b011001, 0b111000, 0b111001,
  0b000100, 0b000101, 0b100100, 0b100101, 0b010100, 0b010101, 0b110100, 0b110101,
  0b001100, 0b001101, 0b101100, 0b101101, 0b011100, 0b011101, 0b111100, 0b111101,
  0b000010, 0b000011, 0b100010, 0b100011, 0b010010, 0b010011, 0b110010, 0b110011,
  0b001010, 0b001011, 0b101010, 0b101011, 0b011010, 0b011011, 0b111010, 0b111011,
  0b000110, 0b000111, 0b100110, 0b100111, 0b010110, 0b010111, 0b110110, 0b110111,
  0b001110, 0b001111, 0b101110, 0b101111, 0b011110, 0b011111, 0b111110, 0b111111,
};

