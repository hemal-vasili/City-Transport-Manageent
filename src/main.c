#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Node structure
struct Node {
    int vertex;
    struct Node* next;
};

// Adjacency list
struct Node* adjLists[MAX];
int numVertices;

// ➕ Add Connection
void addEdge(int src, int dest) {
    if (src >= numVertices || dest >= numVertices) {
        printf("Invalid station\n");
        return;
    }

    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->vertex = dest;
    newNode->next = adjLists[src];
    adjLists[src] = newNode;

    newNode = malloc(sizeof(struct Node));
    newNode->vertex = src;
    newNode->next = adjLists[dest];
    adjLists[dest] = newNode;

    printf("Connection added successfully\n");
}

// ❌ Delete Connection
void deleteEdge(int src, int dest) {
    struct Node *temp, *prev;

    // From src
    temp = adjLists[src];
    prev = NULL;

    while (temp != NULL && temp->vertex != dest) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        if (prev == NULL)
            adjLists[src] = temp->next;
        else
            prev->next = temp->next;

        free(temp);
    }

    // From dest
    temp = adjLists[dest];
    prev = NULL;

    while (temp != NULL && temp->vertex != src) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        if (prev == NULL)
            adjLists[dest] = temp->next;
        else
            prev->next = temp->next;

        free(temp);
    }

    printf("Connection deleted successfully\n");
}

// 🔍 Search Connection
void search(int src, int dest) {
    struct Node* temp = adjLists[src];

    while (temp) {
        if (temp->vertex == dest) {
            printf("Connection exists\n");
            return;
        }
        temp = temp->next;
    }

    printf("Connection not found\n");
}

// 📊 Display Map
void display() {
    for (int i = 0; i < numVertices; i++) {
        struct Node* temp = adjLists[i];

        printf("Station %d: ", i);

        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

// ✏️ Update Connection
void updateEdge(int oldSrc, int oldDest, int newSrc, int newDest) {
    deleteEdge(oldSrc, oldDest);
    addEdge(newSrc, newDest);
    printf("Connection updated successfully\n");
}

// 🚀 Main
int main() {
    int choice, src, dest;
    int oldSrc, oldDest, newSrc, newDest;

    printf("Enter number of stations: ");
    scanf("%d", &numVertices);

    if (numVertices <= 0 || numVertices > MAX) {
        printf("Invalid number of stations\n");
        return 0;
    }

    // Initialize
    for (int i = 0; i < numVertices; i++) {
        adjLists[i] = NULL;
    }

    while (1) {
        printf("1. Add Connection\n");
        printf("2. Delete Connection\n");
        printf("3. Update Connection\n");
        printf("4. Search Connection\n");
        printf("5. Display Map\n");
        printf("6. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                addEdge(src, dest);
                break;

            case 2:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                deleteEdge(src, dest);
                break;

            case 3:
                printf("Enter old source and destination: ");
                scanf("%d %d", &oldSrc, &oldDest);
                printf("Enter new source and destination: ");
                scanf("%d %d", &newSrc, &newDest);
                updateEdge(oldSrc, oldDest, newSrc, newDest);
                break;

            case 4:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                search(src, dest);
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting program\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}