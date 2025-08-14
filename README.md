# Enemy-Fight-Practice
Simple Practice

# 기획 의도
- Player라는 기본 클래스를 정의 합니다.
    - Player 클래스에는 `attack()`이라는 순수 가상 함수를 포함합니다.
        - `attack()` 함수는 무기를 휘두르기만 하는 기본적인 공격 함수입니다.
- Player 클래스를 상속받아 다양한 직업 클래스를 생성합니다.
    - 예) Warrior, Magician, Thief, Archer
        - 각 직업 클래스에서 `attack()`함수를 **재정의**(오버라이딩)하여 해당 직업의 공격을 출력
- 메인 함수에서 Player 타입의 포인터 배열을 선언하고, 해당하는 번호를 입력하면 (1. 전사 2. 마법사 3. 도적 4. 궁수)  Warrior, Magician, Thief, Archer를 각각 배열의 원소로 선언합니다. → 이후 Player는 `attack()` 함수를 호출하여 공격

  <img width="741" height="539" alt="image" src="https://github.com/user-attachments/assets/6d6ecbcf-acd1-473a-9ea9-7d1fea5caa06" />

- 이후 Monster라는 새로운 클래서 정의하고 player 클래스를 매개인자로 받아 공격하는 attack 함수 구현

- 마찬가지로 player도 monster를 향해 공격하는 함수 구현
    - 이때, 궁수는 공격을 3번, 도적은 5번 공
- 전투가 시작되면 차례로 공격하며 한 쪽을 무찌르면 무찌른 캐릭터가 승리
