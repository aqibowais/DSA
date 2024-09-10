class Node{
public:
    string url;
    Node* next;
    Node* prev;
    Node(string url){
        this->url = url;
        this->next = NULL;
        this->prev = NULL;
    }
};

class BrowserHistory {
public:
    Node* currentPage;
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        currentPage->next = newNode;
        newNode->prev = currentPage;
        currentPage = newNode;
    }
    
    string back(int steps) {
        while(steps){
            if(currentPage->prev) currentPage = currentPage->prev;
            else break; 
            steps--;
        }
        return currentPage->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(currentPage->next) currentPage = currentPage->next;
            else break; 
            steps--;
        }
        return currentPage->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */