# Git과 GitHub 초보자 가이드

이 가이드는 Git을 처음 사용하는 사람을 위해 작성되었습니다.  
GitHub 계정이 이미 있다고 가정하고, 로컬 컴퓨터와 다른 컴퓨터에서 작업을 유지하는 방법을 설명합니다.  
개념부터 실습까지 단계별로 진행합니다.

## 1. Git이란 무엇인가?

Git은 **버전 관리 시스템**입니다.  
코드나 파일의 변경 사항을 추적하고, 이전 버전으로 되돌리거나 여러 사람과 협업할 수 있게 해줍니다.  
GitHub는 Git 저장소를 온라인에 호스팅하는 플랫폼으로, 여러 컴퓨터에서 작업을 동기화할 수 있습니다.

### 주요 개념
- **저장소 (Repository)**: 프로젝트의 모든 파일과 변경 이력을 저장하는 곳.
- **커밋 (Commit)**: 파일 변경 사항을 저장하는 스냅샷.
- **브랜치 (Branch)**: 독립적인 작업 라인 (예: main 브랜치에서 feature 브랜치를 만들어 작업).
- **푸시 (Push)**: 로컬 변경 사항을 GitHub에 업로드.
- **풀 (Pull)**: GitHub의 최신 변경 사항을 로컬로 다운로드.

## 2. Git 설치

Windows에서는 Git for Windows를 설치하세요.
1. [git-scm.com](https://git-scm.com/download/win)에서 다운로더를 받으세요.
2. 설치 마법사를 따라 기본 설정으로 설치하세요.
3. 설치 후, 명령 프롬프트나 PowerShell에서 `git --version`을 입력해 설치 확인하세요.

## 3. Git 기본 설정

Git을 사용하기 전에 사용자 정보를 설정하세요. 이 정보는 커밋에 기록됩니다.

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

- `Your Name`: 실제 이름 (예: "홍길동")
- `your.email@example.com`: GitHub 계정 이메일

설정 확인: `git config --global user.name` 또는 `git config --global user.email`

## 4. 로컬 저장소 만들기

프로젝트 폴더에서 Git 저장소를 초기화하세요.

1. 프로젝트 폴더로 이동: `cd C:\path\to\your\project`
2. 저장소 초기화: `git init`
3. `.git` 폴더가 생성됩니다 (숨겨진 폴더).

## 5. 파일 추가와 커밋

파일을 Git에 추가하고 변경 사항을 저장하세요.

1. 파일 생성 또는 수정 후, 상태 확인: `git status`
2. 파일 스테이징 (추가 준비): `git add 파일명` 또는 모든 파일: `git add .`
3. 커밋 (저장): `git commit -m "커밋 메시지"` (예: `git commit -m "첫 번째 커밋"`)

## 6. GitHub 연결 (원격 저장소)

GitHub에 저장소를 만들고 로컬과 연결하세요.

1. GitHub.com에 로그인하세요.
2. "New repository" 클릭, 이름 입력 (예: "my-project"), 공개/비공개 선택, "Create repository".
3. GitHub에서 제공된 URL 복사 (예: `https://github.com/username/my-project.git`).

로컬에서 연결:
```bash
git remote add origin https://github.com/username/my-project.git
```

## 7. 푸시와 풀

- **푸시 (업로드)**: 로컬 변경을 GitHub에 올리기: `git push -u origin main` (처음엔 `-u`로 기본 브랜치 설정)
- **풀 (다운로드)**: GitHub 변경을 로컬로 가져오기: `git pull origin main`

다른 컴퓨터에서 작업할 때:
1. Git 설치 후, `git clone https://github.com/username/my-project.git`로 저장소 복제.
2. 작업 후 `git add .`, `git commit -m "메시지"`, `git push`로 동기화.

## 8. 브랜치 사용

독립적인 작업을 위해 브랜치를 사용하세요.

- 새 브랜치 만들기: `git checkout -b feature-branch`
- 브랜치 전환: `git checkout main`
- 브랜치 병합: `git merge feature-branch` (main 브랜치에서)

## 9. 충돌 해결

두 컴퓨터에서 같은 파일을 수정하면 충돌이 발생할 수 있습니다.
1. `git pull` 시 충돌 메시지가 나오면, 파일을 열어 `<<<<<<<`, `=======`, `>>>>>>>` 부분을 편집하세요.
2. 원하는 부분만 남기고, `git add 파일명`, `git commit`하세요.

## 10. 추가 팁

- **.gitignore**: 추적하지 않을 파일 (예: 빌드 파일)을 `.gitignore` 파일에 추가하세요.
- **로그 확인**: `git log`로 커밋 이력 보기.
- **도움말**: `git help 명령어`로 자세히 알아보세요.
- GitHub에서 협업 시, Pull Request를 사용해 변경 제안하세요.

이제 Git과 GitHub로 효율적으로 작업하세요! 궁금한 점이 있으면 GitHub 문서나 커뮤니티를 참고하세요.