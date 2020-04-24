#include "LinkedList.h"
//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함
//LinkedList class를 상속받음
template <typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){

				//만약 비어있는 스택이라면 false를 반환
				if(this->first==0) return false;
				
				Node<T>*current=this->first;
				//만약 스택에 하나의 원소만 존재한다면 비어있도록 초기화
				if(current->link==0) this->first=NULL;
				//두개 이상의 원소가 존재할 경우 첫번째 원소를 제거
				else this->first=current->link;
				//임시로 선언한 노드 제거
				delete current;
				//current_size변수 조절
				this->current_size--;
				return true;
			}
};


