#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define BOARD_SIZE 3


typedef struct 
{
    int player, computer, draw;
} Score;

int difficulty;
Score score = {.player = 0, .computer = 0, .draw = 0};


void input_difficulty();
void clear_screen();
void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
void play_game();
void player_move(char board[BOARD_SIZE][BOARD_SIZE], char player);
void computer_move(char board[BOARD_SIZE][BOARD_SIZE], char player);
int check_Win(char board[BOARD_SIZE][BOARD_SIZE], char player);
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]);
int valid_move(char board[BOARD_SIZE][BOARD_SIZE], int row, int col);



int main() 
{
    srand(time(NULL));
    int choice;

    input_difficulty();
    
    do {
        play_game();
        printf("\nPlay Again? (1 for YES, 0 for NO): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("\nThanks for playing!\n");
    return 0;
}


void play_game()
{
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char current_player = rand() % 2 == 0 ? 'X' : 'O';



    while (1) {
        print_board(board);
        
        if (current_player == 'X') {
            player_move(board, 'X');
            if (check_Win(board, 'X')) 
            {
                print_board(board);
                printf("\nYou Win!\n");
                score.player++;
                break;
            }
            current_player = 'O';
        } 
        
        else
        
        {
            computer_move(board, 'O');
            if (check_Win(board, 'O'))
            {
                print_board(board);
                printf("\nI (Computer) Win!\n");
                score.computer++;
                break;
            }
            current_player = 'X';
        }

        if (check_draw(board)) 
        {
            print_board(board);
            printf("\nIt's a Draw!\n");
            score.draw++;
            break;
        }
    }
}



int valid_move(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) 
{
    return !(row < 0 || col < 0 || row >= 3 || col >= 3 || board[row][col] != ' ');
}



void player_move(char board[BOARD_SIZE][BOARD_SIZE], char player) 
{
    int row, col;
    do {
        printf("\nPlayer %c's Turn\n", player);
        printf("Enter row and column (1-3): ");
        scanf("%d %d", &row, &col);
        row--; col--;
    } while (!valid_move(board, row, col));
    board[row][col] = player;
}




void computer_move(char board[BOARD_SIZE][BOARD_SIZE], char player) 
{
    int row, col;
    printf("\nComputer's Turn...\n");
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!valid_move(board, row, col));
    board[row][col] = player;
}



int check_Win(char board[BOARD_SIZE][BOARD_SIZE], char player)
{
    for (int i = 0; i < BOARD_SIZE; i++) {
        // Check rows and columns
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
        {
            return 1;
        }
    }


    
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        
    {
        return 1;
    }

    return 0;
}



int check_draw(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) 
    {
        for (int j = 0; j < BOARD_SIZE; j++) 
        {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}



void print_board(char board[BOARD_SIZE][BOARD_SIZE])
{
    clear_screen();
    printf("\nScore - Player (X): %d | Computer (O): %d | Draws: %d\n", score.player, score.computer, score.draw);
    printf("\nTic-Tac-Toe Board:\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("\n");
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1) printf("|");
        }
        if (i < BOARD_SIZE - 1) printf("\n---+---+---");
    }
    printf("\n");
}



void input_difficulty()
{
    while (1) {
        printf("\nSelect difficulty level:");
        printf("\n1. Human (Standard)");
        printf("\n2. God (Impossible to win)");
        printf("\nEnter your choice (1 or 2): ");
        scanf("%d", &difficulty);

        if (difficulty != 1 && difficulty != 2)
        {
            printf("\nInvalid choice! Please enter 1 or 2.\n");
        } 
        else 
        {
            break;
        }
    }
}



void clear_screen() 
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
