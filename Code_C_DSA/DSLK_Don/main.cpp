#include <iostream>

using namespace std;

//Cấu trúc node
struct Node{
    int data;
    Node* next;
};

//Hàm tạo node mới
Node* createNode(int value) {
    Node* p = new Node;
    p->data = value;
    p->next = NULL;
    return p;
}

//Thêm vào đầu danh sách
void addHead(Node*& head, int value) {
    Node* p = createNode(value);
    p->next = head;
    head = p;
}

//Thêm vào cuối danh sách
void addTail(Node*& head, int value) {
    Node* p = createNode(value);
    if(head == NULL) {
        head = p;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = p;
}

//Thêm vào 1 vị trí bất kỳ
void addAt(Node*& head, int value, int pos) {
    if(pos == 0) {
        addHead(head, value);
        return;
    }
    Node* tmp = head;
    int k = 0;
    while(tmp->next != NULL && k < pos - 1) {
        tmp = tmp->next;
        k++;
    }
    Node* p = createNode(value);
    p->next = tmp->next;
    tmp->next = p;
}

//Hàm in danh sách
void printList(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

//Hàm tìm xem trong danh sách có phần tử nào = x không
int findX(Node* head, int X) {
    int pos = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        if(tmp->data == X) {
            return pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return -1;
}

//Hàm đếm số lượng phần tử trong danh sách
int countNode(Node* head) {
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main() {
    Node* head = NULL;
    int choice, n, value, pos, X;

      do {
        cout << "\n===== MENU =====\n";
        cout << "1. Nhap danh sach\n";
        cout << "2. Chen 1 phan tu moi\n";
        cout << "3. Xuat danh sach\n";
        cout << "4. Tim phan tu X\n";
        cout << "5. Dem so luong phan tu\n";
        cout << "0. Thoat\n";
        cout << "================\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nhap so luong phan tu: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Nhap gia tri phan tu thu " << i + 1 << ": ";
                    cin >> value;
                    addTail(head, value);
                }
                break;

            case 2:
                cout << "Nhap gia tri can chen: ";
                cin >> value;
                cout << "1. Them vao dau\n2. Them vao cuoi\n3. Them vao vi tri bat ky\nChon: ";
                cin >> choice;
                if (choice == 1) addHead(head, value);
                else if (choice == 2) addTail(head, value);
                else {
                    cout << "Nhap vi tri: ";
                    cin >> pos;
                    addAt(head, value, pos);
                }
                break;

            case 3:
                cout << "Danh sach: ";
                printList(head);
                break;

            case 4:
                cout << "Nhap X can tim: ";
                cin >> X;
                pos = findX(head, X);
                if(pos != -1) {
                    cout << "Tim thay " << X << " o vi tri thu " << pos << endl;
                }
                else cout << "Khong tim thay " << X << " trong danh sach" << endl;
                break;

            case 5:
                cout << "So luong phan tu: " << countNode(head) << endl;
                break;

            case 0:
                cout << "Thoat chuong trinh.\n";
                break;

            default:
                cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 0);

    return 0;

}

