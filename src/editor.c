#define MAX_LINES 4096
#define MAX_LINE_LEN 1024

typedef struct {
  char lines[MAX_LINES][MAX_LINE_LEN];
  int linesCount;

  int cursorRow;
  int cursorCol;
} Editor;
