typedef unsigned int u32;
typedef int i32;

#define FACTOR 100
#define WIDTH (16*FACTOR)
#define HEIGHT (9*FACTOR)
#define CELL_SIZE 100
#define COLS (WIDTH/CELL_SIZE)
#define ROWS (WIDTH/CELL_SIZE)

// hexcodes are little endian
#define COLOR_BG 0xFFFF0000 // blue
#define COLOR_FG 0xFFFFFFFF // white
#define COLOR_CELL1 COLOR_BG
#define COLOR_CELL2 COLOR_FG

typedef struct {
  i32 x, y;
  i32 width;
} Cell;

void platform_fill_rect(i32 x, i32 y, i32 w, i32 h, u32 color);

int view_width(void) {
  return WIDTH;
}

int view_height(void) {
  return HEIGHT;
}

static void render_background(void) {
  platform_fill_rect(0, 0, WIDTH, HEIGHT, COLOR_BG);
}

void view_render(void) {
  render_background();
}
