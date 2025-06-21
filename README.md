# 🎓 Graduation Project - 3D Action Game with Unreal Engine 5

> Unreal Engine 5를 처음 학습하며 제작한 졸업 프로젝트로,  
> **전투 시스템 / AI 추적 / 무기 충돌 / 아이템 상호작용 / 세이브 / 레벨 전환 등**  
> 실시간 액션 게임의 기초 시스템을 직접 구현해보는 것을 목표로 했습니다.

---

## 📽️ Gameplay Demo

[▶️ 시연 영상 보기 (YouTube)](https://youtu.be/XqFw9PFNrfI)

---

## 🧠 주요 학습 성과

- Unreal Actor / Component 구조 전반에 대한 이해
- AIController + NavMesh 기반의 추적 로직 구현
- `AnimMontage` 및 `AnimNotify`를 통한 데미지 타이밍 처리
- SaveGame 시스템을 이용한 캐릭터 상태 저장 / 불러오기
- UMG HUD 위젯을 활용한 Enemy 체력 표시 구현
- Blueprint + C++ 연동을 통한 상호작용 구조 구성

---

## 🛠️ 구현 기능 요약

| 시스템 | 기능 설명 |
|--------|-----------|
| 전투 시스템 | 공격/회피/사망 애니메이션 + 타이밍 기반 데미지 처리 |
| AI 시스템 | 감지 → 추적 → 공격 전환 구조 (AggroSphere / CombatSphere) |
| 무기 시스템 | 무기 장착, 충돌 타이밍 설정, 충돌 시 파티클 및 사운드 출력 |
| 아이템 시스템 | 폭발 아이템, 코인 픽업, 사운드/이펙트 트리거 |
| 세이브 시스템 | 캐릭터 체력/위치/회전값 저장 및 불러오기 |
| 레벨 전환 | 특정 지점 진입 시 레벨 이동 처리 |
| 오브젝트 상호작용 | FloorSwitch, FloatingPlatform 등 간단한 환경 퍼즐 |
| 스폰 시스템 | Enemy를 무작위 위치에 소환하는 SpawnVolume 구성 |

---
