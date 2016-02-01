# MatrixKeyboard
A simple class to connect up to 256 buttons
Example:(3*3)
row/col   0   1   2         Key numbers (returned by getKeyPresing)
          |   |   |
  0   ----X---X---X         0x00  0x01  0x02
          |   |   |
  1   ----X---X---X         0x10  0x11  0x12
          |   |   |
  2   ----X---X---X         0x20  0x21  0x22
  The first 4bits of key numbers is the number of row, and the second is column.
  eg:
  0x21:  0010 0001
          row  col