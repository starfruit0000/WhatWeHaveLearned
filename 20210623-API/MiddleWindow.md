# 해상도의 정중앙 좌표를 구하는 법

---

|좌표 이름|좌표|
|:---:|:---:|
왼쪽 위 좌표: (LTx, LTy)

오른쪽 아래 좌표: (RBx, RBy)

일때,

x축 정중앙 좌표를 구하는 방식은 `(LTx + RBx) / 2`이다.

y축 정중앙 좌표를 구하는 방식은 `(LBy + RBy) / 2`이다.


<br>
<br>

# 주의해야 할 점

---

## 1. 해상도의 가운데 좌표는 비행기의 왼쪽 위 좌표이다.

x축과 y축이 겹치는 좌표를 `(x,y) = (0,0)`이라고 가정해보자.

비행기를 움직이기 위해 우리가 해야 하는 것은 비행기를 중앙으로 움직이는 것 뿐이다.


