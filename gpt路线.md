# 🧨 红队工具开发完整学习路径表（按阶段）

---

## 🧩 第一阶段：语言与系统基础

| 学习目标 | 推荐内容 | 推荐资源 |
|----------|----------|----------|
| ✅ 熟练掌握 C/C++  | 指针、结构体、类、内存操作、编译链接、DLL编写 | C++ Primer Plus、高级 C++ 编程 |
| ✅ 入门 C#/.NET | 委托、事件、反射、WinForm、LINQ、IO、网络通信 | 《C# 高级编程》《.NET Framework 编程》 |
| ✅ 基本 WinAPI 使用 | 句柄、文件、内存、进程、线程、DLL 注入、注册表、IO、剪贴板、窗口、服务 | MSDN + 中文笔记 |
| ✅ PowerShell 脚本 | Cmdlet 基础、远程执行、WMI、注册表、网络 | PowerShell 黑客指南、微软文档 |

---

## 💣 第二阶段：核心 WinAPI 与注入技术

| 技术 | 关键点 | 推荐实践 |
|------|--------|-----------|
| 🧬 进程操作 | OpenProcess / EnumProcesses / CreateProcess / Nt 系列函数 | 编写进程枚举器 + 注入器 |
| 🧠 内存操作 | VirtualAllocEx / WriteProcessMemory / ReadProcessMemory / CreateRemoteThread | 编写 DLL 注入器 / Shellcode 加载器 |
| 🧿 用户与系统信息 | GetUserName / WTS API / NetUserEnum / GetSystemDirectory | 编写信息收集模块 |
| 🧰 文件与注册表 | CreateFile / RegCreateKeyEx / RegEnumValue / DeleteFile | 文件后门配置、注册表持久化 |
| 🛡️ 服务控制 | OpenSCManager / CreateService / StartService / DeleteService | 服务型持久化后门 |

---

## 🧱 第三阶段：反射加载与免杀技术

| 技术点 | 内容说明 | 推荐项目 |
|--------|----------|----------|
| 💉 Reflective DLL Injection | 无文件加载 DLL，规避 AV 检测 | 修改 ReflectiveLoader 示例 |
| 📦 内存加载 Assembly | `Assembly.Load(byte[])` + `Invoke` | C# 内存执行器 |
| 🌀 P/Invoke | C# 中调用 WinAPI，绕过静态检测 | 写 Shellcode Loader |
| 🔐 AMSI 绕过 | 动态绕过 AmsiScanBuffer | Patch 函数指针 / Memory Patch |
| 🎭 EDR/AV 绕过 | NTDLL Hook 绕过、SysWhispers、自定义加载器 | NtCreateThreadEx + Inline Syscall |

---

## 🧰 第四阶段：模块化红队工具开发

| 模块 | 功能 | 推荐项目 |
|------|------|----------|
| 🎯 信息收集 | 用户、系统、进程、网络、域控等 | [Seatbelt](https://github.com/GhostPack/Seatbelt) |
| 🔎 横向移动 | WMI 执行、远程控制、Token 攻击等 | [SharpWMI](https://github.com/GhostPack/SharpWMI) |
| 📡 C2 通信 | HTTP/DNS/SMB 通信，内存任务分发 | Covenant、Mythic |
| 🪝 持久化 | 注册表、服务、计划任务、LNK 链接 | PersistenceSniper、CactusTorch |
| 🛠️ Shellcode Loader | AES 加密 + 内存加载 | SharpLoader、Donut |
| 🎭 绕过检测 | 编码、壳、混淆、反沙箱机制 | ConfuserEx、sRDI、PE Loader |

---

## 🧪 第五阶段：实战演练与框架复现

| 内容 | 推荐资源 |
|------|----------|
| ⚔️ 红队框架 | Covenant、Mythic、Sliver、Cobalt Strike |
| 🔎 蓝队对抗 | 日志分析、沙箱检测、EDR 追踪与绕过 |
| 🧬 工具复现 | ReflectiveLoader、Donut、SysWhispers |
| 👨‍🔬 检测回避 | Inline Hook 检测、系统调用混淆、PPL绕过等 |

---

## 📚 可选扩展方向

| 技术方向 | 说明 |
|----------|------|
| 🧬 Rust 红队工具 | Shellcode Loader、安全开发 |
| 💻 内核开发 | 编写驱动、内核注入、隐藏对象 |
| ☁️ 云红队 | Azure、AWS 渗透、云控通道 |
| 🛡️ Defender 检测机制 | Defender 规则分析、EDR 日志 |
| 🔐 加密与混淆 | 编码器、Crypter、自定义 Loader |

---

## 📂 Bonus：实战项目建议

| 项目 | 类型 | 技能点 |
|------|------|--------|
| Shellcode Loader | C# + P/Invoke | Memory Execution |
| 自定义 Beacon | C/C++ | 多模块、通信、注入 |
| 信息收集器 | C++/C# | 用户+网络+系统信息 |
| AMSI Bypass 加载器 | PowerShell/C# | CLR 反射执行 + 内存 Patch |

---

> 本文适合具备 C/C++ 或渗透基础的红队开发者逐步进入实战开发路线。如需每阶段详细代码实例和任务表，可继续向我索取。
