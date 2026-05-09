# 개발자 안내

이 문서는 이 프로젝트에서 `c` 파일은 그대로 두고 빌드 산출물은 따로 분리하는 설정을 설명합니다.

## 목표

- 소스 파일(`.c`)은 `src/`와 `src/practice/`에만 보관합니다.
- 컴파일 결과물은 모두 `build/` 폴더로 이동합니다.
- Git에는 소스 코드와 공유 가능한 VS Code 설정(`.vscode/tasks.json`)만 추적하고 빌드 결과물은 커밋하지 않습니다.

## 왜 이렇게 하는가?

- 소스 폴더가 깔끔해집니다.
- 빌드 산출물이 소스 코드와 섞이지 않습니다.
- Git 저장소가 불필요한 바이너리 파일로 커지지 않습니다.

## 설정 방법

### 1. 폴더 구조

```
project-root/
├─ .gitignore
├─ README.md
├─ Dev.md
├─ .vscode/
│  └─ tasks.json
├─ build/
│  └─ (빌드 산출물)
└─ src/
   ├─ behappy.c
   ├─ hello.c
   ├─ test01.c
   ├─ test02.c
   └─ practice/
      ├─ 2-1.2.c
      ├─ 2-1.3.c
      ├─ 2_4.c
      ├─ 2_5.c
      ├─ 2_6.c
      ├─ 2_7.c
      ├─ 3_1.c
      ├─ 3_2.c
      ├─ 3_3.c
      ├─ 3_4.c
      └─ 3_5.c
```

### 2. `.gitignore`

`.gitignore`에는 다음 항목을 포함합니다:

- `build/`
- `*.exe`
- `*.obj`
- `*.pdb`
- `*.ilk`
- `*.log`
- `.vscode/*`
- `!.vscode/tasks.json`

이렇게 하면 `build/` 내부의 출력 파일과 컴파일 과정에서 생성되는 임시 파일은 무시하지만, 공유해야 하는 `tasks.json`은 Git에 포함됩니다.

### 3. VS Code 빌드 설정

`.vscode/tasks.json`은 운영체제별로 다음과 같이 작성되어야 합니다:

- Windows: `gcc` 또는 `g++` 출력 파일에 `.exe`를 붙입니다.
- macOS/Linux: 실행 파일 확장자를 생략합니다.
- 공통 출력 폴더: `${workspaceFolder}/build/`

이 예시 설정은 현재 열려 있는 `.c` 또는 `.cpp` 파일이 어느 폴더에 있든, 빌드 결과를 항상 `build/`에 저장합니다.

### 4. 빌드된 결과물 실행

빌드된 결과물은 `build/` 폴더에서 실행합니다.

- Windows: `.\\build\\프로그램이름.exe`
- macOS/Linux: `./build/프로그램이름`

### 5. 새 파일 추가 시 주의 사항

- 새로운 소스 코드는 `src/` 또는 `src/practice/`에 추가합니다.
- `build/` 안에 직접 파일을 추가하지 않습니다.
- Git 상태를 확인할 때 `build/`가 추적되지 않는지 확인합니다.

## 실제 적용 예시

- `src/behappy.c` → `build/behappy.exe`
- `src/hello.c` → `build/hello.exe`
- `src/practice/3_5.c` → `build/3_5.exe`

## 요약

1. 소스는 `src/`와 `src/practice/`에 작성
2. 산출물은 `build/`로 분리
3. `.gitignore`로 빌드 파일 무시
4. `tasks.json`에서 출력 경로를 `build/`로 설정

이 설정으로 컴파일 전에 `.c` 파일은 그대로 유지되고 나머지 출력물은 깔끔하게 분리됩니다.