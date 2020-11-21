/*
	구조체 struct는 데이터와 코드가 분리

	struct A
	{
		int a;
		int b;
	}

	void showA(struct A temp)
	{
		cout << temp.a << endl;
	}

	단점 : 데이터 따로, 코드 따로
		   데이터를 수동적인 존재라고 인식하고 개발
*/

//OOP(Object Oriented programming //c++, java)
/*
	클래스 calss는 데이터와 코드가 한 번에

	class A
	{
		int a;
		int b;
		
		void showA()
		{
			cout << a << endl;
		}
	}
	
	장점 : 데이터와 그것의 처리반법이 하나로 합쳐짐으로써,
		   능동적인 존재로 인식하고 개발
		   객체(사물)들이 서로 상호간에 소통하고 반응하는 것을 상상하고 개발

		   코드 재활용성이 좋아져...(케잌+촛불) -> 케잌사면 촛불이랑 성냥 다 주니까 짱 편함 -> 이게 OOP의 장점


*내용 정리
    class   |  object(객체)
  ----------|---------------------
  data type | struct A temp(변수)

  => class로 데이터 타입을 정의하고 변수처럼 클래스 형 변수를 선언
  => 이렇게 만든 객체를 조립해서 만드는 것이 객체 기반 프로그래밍

*/





