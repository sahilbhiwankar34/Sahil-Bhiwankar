#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

// Initialize all variables
int bird_x = 100, bird_y = 200;
int bird_velocity = 0;
int gravity = 1;
int gap = 150;
int pipe_width = 80;
int pipe_x = 500;
int pipe_height;
int score = 0;
int game_over = 0;
int bird_radius = 15;

void draw_bird() {
    // Draw the bird as a ball (circle)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(bird_x, bird_y, bird_radius, bird_radius);
    
    // Add eye to make it look more like a bird
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(bird_x + 5, bird_y - 5, 3, 3);
    
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(bird_x + 5, bird_y - 5, 1, 1);
}

void draw_pipes() {
    // Draw upper pipe
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(pipe_x, 0, pipe_x + pipe_width, pipe_height);
    
    // Draw lower pipe
    bar(pipe_x, pipe_height + gap, pipe_x + pipe_width, 500);
    
    // Add pipe edges for better visuals
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(pipe_x - 5, pipe_height - 20, pipe_x + pipe_width + 5, pipe_height);
    bar(pipe_x - 5, pipe_height + gap, pipe_x + pipe_width + 5, pipe_height + gap + 20);
}

void update_bird() {
    bird_velocity += gravity;
    bird_y += bird_velocity;
    
    // Check if bird hits the ground or ceiling
    if (bird_y + bird_radius > getmaxy() || bird_y - bird_radius < 0) {
        game_over = 1;
    }
}

void update_pipes() {
    pipe_x -= 5;
    
    // If pipe goes off screen, reset it to the right with new height
    if (pipe_x < -pipe_width) {
        pipe_x = getmaxx();
        pipe_height = rand() % 200 + 100; // Random height between 100-300
        score++;
    }
    
    // Check collision with pipes
    if ((bird_x + bird_radius > pipe_x && bird_x - bird_radius < pipe_x + pipe_width) && 
        (bird_y - bird_radius < pipe_height || bird_y + bird_radius > pipe_height + gap)) {
        game_over = 1;
    }
}

void draw_score() {
    char score_text[20];
    sprintf(score_text, "Score: %d", score);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(10, 10, score_text);
}
char final_score[30];
void draw_game_over() {
    cleardevice();
    setcolor(RED);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
    outtextxy(getmaxx()/2 - 100, getmaxy()/2 - 30, "GAME OVER");

    sprintf(final_score, "Score: %d", score);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(getmaxx()/2 - 50, getmaxy()/2 + 20, final_score);
    
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(getmaxx()/2 - 100, getmaxy()/2 + 60, "Press any key to exit");
}

void game_loop() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
    // Set background color to blue
    setbkcolor(BLUE);
    cleardevice();
    
    // Initial pipe height
    pipe_height = rand() % 200 + 100;
    
    while (!game_over) {
        cleardevice();
        
        // Check for key press (space to jump)
        if (kbhit()) {
            char key = getch();
            if (key == ' ' || key == 72) {  // Space or up arrow
                bird_velocity = -10; // Jump
            }
        }
        
        // Update game state
        update_bird();
        update_pipes();
        
        // Draw everything
        draw_pipes();
        draw_bird();
        draw_score();
        
        delay(50);
    }
    
    // Game over screen
    draw_game_over();
    getch();
    closegraph();
}

int main() {
    game_loop();
    return 0;
}
