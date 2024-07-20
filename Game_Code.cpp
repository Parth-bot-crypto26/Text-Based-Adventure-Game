#include <iostream>
#include <string>

using namespace std;

void startAdventure();
void enterForest();
void crossRiver();
void exploreCave();
void helpStranger();
void fightDragon();
void findTreasure();
void solvePuzzle();
void climbMountain();
void reachVillage();

int main() {
    cout << "Welcome to the Grand Adventure Game!\n";
    startAdventure();
    return 0;
}

void startAdventure() {
    cout << "You are standing at the edge of a dark forest.\n";
    cout << "Do you want to enter the forest or cross the river? (forest/river)\n";
    
    string choice;
    cin >> choice;

    if (choice == "forest") {
        enterForest();
    } else if (choice == "river") {
        crossRiver();
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void enterForest() {
    cout << "You enter the forest and hear strange noises around you.\n";
    cout << "Do you want to follow the sound or ignore it? (follow/ignore)\n";
    
    string choice;
    cin >> choice;

    if (choice == "follow") {
        fightDragon();
    } else if (choice == "ignore") {
        cout << "You ignore the sound and continue your journey.\n";
        cout << "You come across a mysterious cave. Do you want to explore it? (yes/no)\n";
        
        cin >> choice;
        if (choice == "yes") {
            exploreCave();
        } else if (choice == "no") {
            cout << "You continue walking and safely find your way out of the forest.\n";
            cout << "The adventure ends here. You survived!\n";
        } else {
            cout << "Invalid choice. The adventure ends here.\n";
        }
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void crossRiver() {
    cout << "You decide to cross the river, but the current is strong.\n";
    cout << "Do you want to swim or look for a bridge? (swim/bridge)\n";
    
    string choice;
    cin >> choice;

    if (choice == "swim") {
        cout << "You try to swim but the current is too strong. You drown.\n";
        cout << "The adventure ends here.\n";
    } else if (choice == "bridge") {
        findTreasure();
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void exploreCave() {
    cout << "You enter the cave and find a treasure chest.\n";
    cout << "Do you want to open the chest or leave it alone? (open/leave)\n";
    
    string choice;
    cin >> choice;

    if (choice == "open") {
        cout << "The chest is filled with gold and jewels! You are rich!\n";
        cout << "Congratulations! You completed the adventure successfully.\n";
    } else if (choice == "leave") {
        cout << "You leave the chest and continue exploring the cave.\n";
        cout << "You find a secret passage that leads you to a hidden village.\n";
        reachVillage();
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void fightDragon() {
    cout << "You follow the sound and find a dragon!\n";
    cout << "Do you want to fight the dragon or run away? (fight/run)\n";
    
    string choice;
    cin >> choice;

    if (choice == "fight") {
        cout << "You bravely fight the dragon but it's too powerful. You perish.\n";
        cout << "The adventure ends here.\n";
    } else if (choice == "run") {
        cout << "You run away safely and find your way out of the forest.\n";
        cout << "The adventure ends here. You survived!\n";
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void findTreasure() {
    cout << "You find a bridge and safely cross the river.\n";
    cout << "On the other side, you discover a hidden path that leads to a mountain.\n";
    cout << "Do you want to climb the mountain or explore the path? (climb/explore)\n";
    
    string choice;
    cin >> choice;

    if (choice == "climb") {
        climbMountain();
    } else if (choice == "explore") {
        cout << "You explore the path and find a stranger in need of help.\n";
        cout << "Do you want to help the stranger or ignore them? (help/ignore)\n";
        
        cin >> choice;
        if (choice == "help") {
            helpStranger();
        } else if (choice == "ignore") {
            cout << "You ignore the stranger and continue your journey.\n";
            cout << "The adventure ends here.\n";
        } else {
            cout << "Invalid choice. The adventure ends here.\n";
        }
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void helpStranger() {
    cout << "You help the stranger and they reveal a hidden treasure map to you.\n";
    cout << "Do you want to follow the map or keep exploring? (map/explore)\n";
    
    string choice;
    cin >> choice;

    if (choice == "map") {
        cout << "You follow the map and find the hidden treasure!\n";
        cout << "Congratulations! You found the treasure and completed the adventure.\n";
    } else if (choice == "explore") {
        cout << "You continue exploring and find a beautiful meadow.\n";
        cout << "The adventure ends here. You enjoyed a peaceful journey.\n";
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void climbMountain() {
    cout << "You climb the mountain and reach the top.\n";
    cout << "At the peak, you find an ancient temple with a puzzle.\n";
    cout << "Do you want to solve the puzzle or go back? (solve/go back)\n";
    
    string choice;
    cin >> choice;

    if (choice == "solve") {
        solvePuzzle();
    } else if (choice == "go back") {
        cout << "You decide to go back and safely find your way home.\n";
        cout << "The adventure ends here.\n";
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}

void solvePuzzle() {
    cout << "You solve the ancient puzzle and unlock a hidden chamber filled with treasures!\n";
    cout << "Congratulations! You found the ancient treasure and completed the adventure.\n";
}

void reachVillage() {
    cout << "You reach a hidden village and are welcomed by the villagers.\n";
    cout << "They tell you stories of an ancient treasure hidden in the nearby mountains.\n";
    cout << "Do you want to search for the treasure or stay in the village? (search/stay)\n";
    
    string choice;
    cin >> choice;

    if (choice == "search") {
        cout << "You decide to search for the treasure and embark on a new adventure.\n";
        cout << "The adventure continues...\n";
    } else if (choice == "stay") {
        cout << "You decide to stay in the village and live a peaceful life.\n";
        cout << "The adventure ends here. You lived happily ever after.\n";
    } else {
        cout << "Invalid choice. The adventure ends here.\n";
    }
}
