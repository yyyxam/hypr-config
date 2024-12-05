static const char norm_fg[] = "#decfdd";
static const char norm_bg[] = "#180c4a";
static const char norm_border[] = "#9b909a";

static const char sel_fg[] = "#decfdd";
static const char sel_bg[] = "#C86FA3";
static const char sel_border[] = "#decfdd";

static const char urg_fg[] = "#decfdd";
static const char urg_bg[] = "#C6649E";
static const char urg_border[] = "#C6649E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
