# C Practice Workspace

이 저장소는 C 언어 연습과 예제 코드를 관리하기 위한 구조를 제공합니다.

## 폴더 구조

- `src/`
  - 메인 소스 코드 파일(.c)을 보관합니다.
- `src/practice/`
  - 연습 문제 소스 코드를 보관합니다.
- `build/`
  - 컴파일 결과물(.exe, 실행 파일, 객체 파일)을 보관합니다.
- `.vscode/`
  - 공유 가능한 VS Code 작업 설정 파일을 보관합니다.

## 사용 방법

1. 소스 파일은 `src/` 또는 `src/practice/`에 작성합니다.
2. `build/` 폴더로 빌드 결과가 출력됩니다.
3. VS Code에서 빌드는 `Build C`, `Build C++` 작업을 사용하거나 `Ctrl+Shift+B`로 실행할 수 있습니다.
   - 이 저장소는 Windows 전용이며, 기본 C/C++ 확장 자동 빌드 대신 여기 정의된 `Build C` / `Build C++` 작업을 사용해야 합니다.
4. 빌드 후 실행하려면 편집 중인 소스 파일을 선택한 상태에서 `Run executable` 작업을 실행합니다.
5. 디버그할 때는 `.vscode/launch.json`에 있는 `Debug active C/C++ file` 구성을 사용하세요 (`F5`).
   - 이 구성은 `Build C++` 작업을 실행하고, 결과를 `${workspaceFolder}/build/${fileBasenameNoExtension}.exe`로 저장합니다.
6. Windows에서 `build/<filename>.exe` 경로로 실행 파일이 생성됩니다.
7. `.gitignore`에서 `build/`와 빌드 산출물을 자동으로 무시합니다.
8. `.vscode/tasks.json`과 `.vscode/launch.json`은 Git에 추적되도록 설정되어 있습니다.

## Git 커밋 규칙

- 커밋 대상: `src/`, `src/practice/`, `README.md`, `Dev.md`, `.gitignore`, `.vscode/tasks.json`
- 제외 대상: `build/` 폴더와 빌드 산출물

## 주요 파일

- `.gitignore`: 빌드 및 임시 파일 무시 설정
- `.vscode/tasks.json`: macOS, Linux, Windows에서 모두 동작하도록 설정된 빌드 작업
- `Dev.md`: 프로젝트 설정과 빌드 출력 분리 방법 설명
