# Git�� GitHub �ʺ��� ���̵�

�� ���̵�� Git�� ó�� ����ϴ� ����� ���� �ۼ��Ǿ����ϴ�.  
GitHub ������ �̹� �ִٰ� �����ϰ�, ���� ��ǻ�Ϳ� �ٸ� ��ǻ�Ϳ��� �۾��� �����ϴ� ����� �����մϴ�.  
������� �ǽ����� �ܰ躰�� �����մϴ�.

## 1. Git�̶� �����ΰ�?

Git�� **���� ���� �ý���**�Դϴ�.  
�ڵ峪 ������ ���� ������ �����ϰ�, ���� �������� �ǵ����ų� ���� ����� ������ �� �ְ� ���ݴϴ�.  
GitHub�� Git ����Ҹ� �¶��ο� ȣ�����ϴ� �÷�������, ���� ��ǻ�Ϳ��� �۾��� ����ȭ�� �� �ֽ��ϴ�.

### �ֿ� ����
- **����� (Repository)**: ������Ʈ�� ��� ���ϰ� ���� �̷��� �����ϴ� ��.
- **Ŀ�� (Commit)**: ���� ���� ������ �����ϴ� ������.
- **�귣ġ (Branch)**: �������� �۾� ���� (��: main �귣ġ���� feature �귣ġ�� ����� �۾�).
- **Ǫ�� (Push)**: ���� ���� ������ GitHub�� ���ε�.
- **Ǯ (Pull)**: GitHub�� �ֽ� ���� ������ ���÷� �ٿ�ε�.

## 2. Git ��ġ

Windows������ Git for Windows�� ��ġ�ϼ���.
1. [git-scm.com](https://git-scm.com/download/win)���� �ٿ�δ��� ��������.
2. ��ġ �����縦 ���� �⺻ �������� ��ġ�ϼ���.
3. ��ġ ��, ���� ������Ʈ�� PowerShell���� `git --version`�� �Է��� ��ġ Ȯ���ϼ���.

## 3. Git �⺻ ����

Git�� ����ϱ� ���� ����� ������ �����ϼ���. �� ������ Ŀ�Կ� ��ϵ˴ϴ�.

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

- `Your Name`: ���� �̸� (��: "ȫ�浿")
- `your.email@example.com`: GitHub ���� �̸���

���� Ȯ��: `git config --global user.name` �Ǵ� `git config --global user.email`

## 4. ���� ����� �����

������Ʈ �������� Git ����Ҹ� �ʱ�ȭ�ϼ���.

1. ������Ʈ ������ �̵�: `cd C:\path\to\your\project`
2. ����� �ʱ�ȭ: `git init`
3. `.git` ������ �����˴ϴ� (������ ����).

## 5. ���� �߰��� Ŀ��

������ Git�� �߰��ϰ� ���� ������ �����ϼ���.

1. ���� ���� �Ǵ� ���� ��, ���� Ȯ��: `git status`
2. ���� ������¡ (�߰� �غ�): `git add ���ϸ�` �Ǵ� ��� ����: `git add .`
3. Ŀ�� (����): `git commit -m "Ŀ�� �޽���"` (��: `git commit -m "ù ��° Ŀ��"`)

## 6. GitHub ���� (���� �����)

GitHub�� ����Ҹ� ����� ���ð� �����ϼ���.

1. GitHub.com�� �α����ϼ���.
2. "New repository" Ŭ��, �̸� �Է� (��: "my-project"), ����/����� ����, "Create repository".
3. GitHub���� ������ URL ���� (��: `https://github.com/username/my-project.git`).

���ÿ��� ����:
```bash
git remote add origin https://github.com/username/my-project.git
```

## 7. Ǫ�ÿ� Ǯ

- **Ǫ�� (���ε�)**: ���� ������ GitHub�� �ø���: `git push -u origin main` (ó���� `-u`�� �⺻ �귣ġ ����)
- **Ǯ (�ٿ�ε�)**: GitHub ������ ���÷� ��������: `git pull origin main`

�ٸ� ��ǻ�Ϳ��� �۾��� ��:
1. Git ��ġ ��, `git clone https://github.com/username/my-project.git`�� ����� ����.
2. �۾� �� `git add .`, `git commit -m "�޽���"`, `git push`�� ����ȭ.

## 8. �귣ġ ���

�������� �۾��� ���� �귣ġ�� ����ϼ���.

- �� �귣ġ �����: `git checkout -b feature-branch`
- �귣ġ ��ȯ: `git checkout main`
- �귣ġ ����: `git merge feature-branch` (main �귣ġ����)

## 9. �浹 �ذ�

�� ��ǻ�Ϳ��� ���� ������ �����ϸ� �浹�� �߻��� �� �ֽ��ϴ�.
1. `git pull` �� �浹 �޽����� ������, ������ ���� `<<<<<<<`, `=======`, `>>>>>>>` �κ��� �����ϼ���.
2. ���ϴ� �κи� �����, `git add ���ϸ�`, `git commit`�ϼ���.

## 10. �߰� ��

- **.gitignore**: �������� ���� ���� (��: ���� ����)�� `.gitignore` ���Ͽ� �߰��ϼ���.
- **�α� Ȯ��**: `git log`�� Ŀ�� �̷� ����.
- **����**: `git help ���ɾ�`�� �ڼ��� �˾ƺ�����.
- GitHub���� ���� ��, Pull Request�� ����� ���� �����ϼ���.

���� Git�� GitHub�� ȿ�������� �۾��ϼ���! �ñ��� ���� ������ GitHub ������ Ŀ�´�Ƽ�� �����ϼ���.