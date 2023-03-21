/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

int GetTabbarHeight(HWND, float factor = 1.f);

void SaveCurrentWindowTab(MainWindow*);
void LoadModelIntoTab(WindowTab*);

void CreateTabbar(MainWindow*);
WindowTab* AddTabToWindow(MainWindow* win, WindowTab* tab);
void TabsOnCloseWindow(MainWindow*);
void TabsOnChangedDoc(MainWindow*);
void TabsSelect(MainWindow* win, int tabIndex);
void TabsOnCtrlTab(MainWindow* win, bool reverse);
// also shows/hides the tabbar when necessary
void UpdateTabWidth(MainWindow*);
void SetTabsInTitlebar(MainWindow* win, bool inTitlebar);
void UpdateTabsColors(TabsCtrl*);
void RemoveTab(WindowTab*);
// create a new window if win==nullptr
void MigrateTab(WindowTab* tab, MainWindow* win);
void CollectTabsToClose(MainWindow* win, WindowTab* currTab, Vec<WindowTab*>& toCloseOther,
                        Vec<WindowTab*>& toCloseRight);
