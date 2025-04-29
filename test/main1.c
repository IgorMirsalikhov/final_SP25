Game createGame(int r, char *gameTitle);
void printGameInfo(const Game *game);

int main() {
    Game g = createGame(100, "Witcher 3");
    Game g2 = createGame(75, "Mario Brothers");
    Game g3 = createGame(100, "GTA 6");
    printGameInfo(&g);
    printGameInfo(&g2);
    printGameInfo(&g3);

    return 0;
}
