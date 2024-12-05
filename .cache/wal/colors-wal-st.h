const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#180c4a", /* black   */
  [1] = "#C6649E", /* red     */
  [2] = "#C86FA3", /* green   */
  [3] = "#9928CF", /* yellow  */
  [4] = "#B444C2", /* blue    */
  [5] = "#CC8EB4", /* magenta */
  [6] = "#CA99C6", /* cyan    */
  [7] = "#decfdd", /* white   */

  /* 8 bright colors */
  [8]  = "#9b909a",  /* black   */
  [9]  = "#C6649E",  /* red     */
  [10] = "#C86FA3", /* green   */
  [11] = "#9928CF", /* yellow  */
  [12] = "#B444C2", /* blue    */
  [13] = "#CC8EB4", /* magenta */
  [14] = "#CA99C6", /* cyan    */
  [15] = "#decfdd", /* white   */

  /* special colors */
  [256] = "#180c4a", /* background */
  [257] = "#decfdd", /* foreground */
  [258] = "#decfdd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
