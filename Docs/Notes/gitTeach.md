初始化Git仓库

```
git init
```

添加当前目录下的所有文件到暂存区

```
git add .
```

添加一个或多个文件到暂存区

```
git add [file1] [file2] ...
```

添加指定目录到暂存区，包括子目录

```
git add [dir]
```

在PowerShell中，SimWheel 根目录下清除所有Git缓存（这一步不会删除你本地的任何文件！）

```
git rm -r --cached .
```

检查现在的状态

```
git status
```

临时关闭 SSL 验证

```
git config --global http.sslVerify false