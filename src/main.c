#include "keyboard.h"
#include "raylib.h"
#include "screen.h"
#include <stdio.h>

#define START_POS_X 20
#define START_POS_Y 20
#define FONT_SIZE 20

int main() {
  char textBuffer[1024];
  initializeScreen();
  handleKeyboard();

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawText(textBuffer, START_POS_X, START_POS_Y, FONT_SIZE, BLACK);

    EndDrawing();
  }
  CloseWindow();
  return 0;
}
