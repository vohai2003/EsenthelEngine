![Logo](https://esenthel.com/site/images/logo/GitHub%20Logo.jpg)

### About
Full Source of Esenthel Engine and its Tools (http://esenthel.com) - a super optimized, high performance, minimal memory usage, rock solid stable, cross platform Game Engine (software to create Games and Applications).<br/>
Esenthel strives to be pure perfection!<br/>
Official version available at: https://github.com/Esenthel/EsenthelEngine<br/>
To continue its development, Esenthel needs your support:
* Please donate:
   * https://esenthel.com/?id=store&cat=1
   * https://github.com/sponsors/GregSlazinski
* Or submit source code patches, thank you!


### License
<details><summary>Click to show</summary>

```
COPYRIGHT
Esenthel Engine created by Grzegorz Slazinski, all rights reserved.
You can use it for free to create games and applications.
This License is non-exclusive, non-transferable, worldwide and royalty-free - you don't have to
share the income that you make from your games/apps made with Esenthel Engine.
You can create unlimited number of games/apps using Esenthel Engine.
You can redistribute Esenthel Engine source code.
You can make changes to Esenthel Engine source code.
You don't have to make code changes public, but it would be appreciated if you could.

ATTRIBUTION
You don't have to show Esenthel Logo or mention the Engine anywhere in your game/app,
but it would be appreciated if you could.

LIMITATIONS
You may NOT claim that you wrote the source code.
You may NOT remove or change any copyright messages or this License text from the source code.

GAME ENGINES
You may NOT integrate the source code into other game engines, that are not based on Esenthel Engine. 
You can create your own game engines based on Esenthel, however they must clearly state that they're
"based on Esenthel Engine" with the name linking to:
http://esenthel.com or https://github.com/Esenthel/EsenthelEngine and 15% of income generated from
your engine and engine related services (including but not limited to: donations, license sales,
adding features, providing support) must be shared with Esenthel Engine creator.
However if Esenthel Engine creator dies without transferring copyrights to the Engine,
then Engine enters the Public Domain, and can be used by anyone without any restrictions.

SHARING
Esenthel Engine creator is allowed to publicly share that you are using Esenthel Engine,
include your organization's logo in the information, and share your application's screenshots and videos
(including trailers, teasers, cinematics and gameplay).

CONTRIBUTING
By submitting any source code patches to Esenthel creator, you agree that they can be integrated
free of any charge into Esenthel Engine, and as part of the Engine be covered by this License.

TERMINATION
If you violate any terms of this agreement, or you engage in any patent litigation against Engine creator,
then this License and access to Engine files will be terminated.

NO WARRANTY
This License does not include support or warranty of any kind - This software is provided 'as-is',
without any express or implied warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

THIRD PARTY LIBRARIES
Esenthel Engine uses many third-party libraries located in "ThirdPartyLibs" folder, they're covered by
their own licenses, majority are completely free to use, except the following which have some requirements:
Fraunhofer FDK AAC Sound Codec - please read its license carefully, it uses patented technology,
do not use the AAC sound codec unless you have a patent license.
Thank you to all of the third-party library developers!
```
</details>


### Folder Hierarchy

* **Data** - This entire folder gets converted into "Editor/Bin/Engine.pak" file (files required by the Engine to start)
* **Editor** - Esenthel Editor (some files for it need to be generated using the "Esenthel Builder" tool)
* **Editor Data** - This entire folder gets converted into "Editor/Bin/Editor.pak" file (files required by the Editor to start)
* **Editor Source** - Source code of Esenthel Editor
   * **\_Build\_** - Editor Source exported into C++ Project (Windows-Visual Studio, Mac-Xcode, Linux-NetBeans)
   * **0btc4f^3zje60097ikj149u0** - Tools as Esenthel Project to be opened in Esenthel Editor
   * **h3kv^1fvcwe4ri0#ll#761m7** - Editor Source as Esenthel Project to be opened in Esenthel Editor
   * **nop2ha8t22e6eg2!ck1odnk5** - Default Esenthel Gui Skins to be opened in Esenthel Editor
* **Engine** - Esenthel Engine (Headers, Source and C++ Projects)
* **Project** - Sample C++ Project (Windows-Visual Studio, Mac-Xcode, Linux-NetBeans) which can be used directly with the "Engine" without the need of "Editor"
* **ThirdPartyLibs** - All of the Third Party Libraries that Esenthel is based on (most of them include source and all have pre-compiled binaries that are ready to use)
* **Esenthel Builder** - Tool used to "Build" the Engine (compile the sources, link libraries, generate cleaned headers, generate "Engine.pak" from "Data" folder, generate "Code Editor.dat", etc.)
* **Esenthel.sln** - C++ Project in Windows Visual Studio format, that includes "Engine" and "Project" C++ Projects


### Getting things running
1. Download the entire repository to your computer
2. Start the "Esenthel Builder" tool and click "Do Selected" to run all checked tasks in order (compile the engine, link the libraries, compile the editor, etc.)
3. Enjoy!


### Esenthel Builder
It is important to run Esenthel Builder with all of the tasks that are checked by default, each time you update your engine source.

Simply start "Esenthel Builder" and click the "Do Selected" button at the bottom, which will execute all tasks that are currently selected.

Checked tasks will be executed in order from top to bottom, as some of the tasks depend on other tasks being executed first - those at the bottom may require that those at the top were already executed.


### Editions
Esenthel Engine is available in 2 Editions:
* **Binary** available from Esenthel Website - http://esenthel.com/
* **Source** available from GitHub Website - https://github.com/Esenthel/EsenthelEngine

Sometimes Source Edition is updated more frequently, which means that the Binary Edition may be older.

Everytime when the Editor is started, it checks Esenthel Website for an update to the Engine, it checks the Binary Version.

Since the version on Esenthel Website will usually be different from the one that you compile manually from the Source Code, it will display that "an Update is available".

However if your Source version is newer than the Binary version on Esenthel Website, then after clicking "Update" you will be actually updating to an older version.

                                                                                                                                                                         
### Branches
There are 2 branches: Master and Development.

Master is the one you should be using, as Development is the branch in development, which may fail to compile, contain bugs or even break your project.
Do not use Development.
