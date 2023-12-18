#include<bits/stdc++.h>   
using namespace std;        


struct Card {
    char suit;
    int number;
    int originalIndex; // To keep track of original order
};

int Partition(vector<Card> &A, int p, int r) {
    Card x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].number <= x.number) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void Quicksort(vector<Card> &A, int p, int r) {
    if (p < r) {
        int q = Partition(A, p, r);
        Quicksort(A, p, q - 1);
        Quicksort(A, q + 1, r);
    }
}

int main() {
    int n;
    cin >> n;

    vector<Card> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i].suit >> cards[i].number;
        cards[i].originalIndex = i; // Assign original index
    }

    // Sort the cards using Quicksort
    Quicksort(cards, 0, n - 1);

    bool isStable = true;
    for (int i = 1; i < n; i++) {
        if (cards[i].number == cards[i - 1].number && cards[i].originalIndex < cards[i - 1].originalIndex) {
            isStable = false;
            break;
        }
    }

    cout << (isStable ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; i++) {
        cout << cards[i].suit << " " << cards[i].number << endl;
    }

    return 0;
}
