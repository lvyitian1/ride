#ifndef RIDE_SETTINGS_H
#define RIDE_SETTINGS_H

#include <wx/wx.h>

namespace EdgeStyle {
  enum Type {
    NONE, LINE, BACKGROUND
  };
}

namespace ViewWhitespace {
  enum Type {
    HIDDEN, ALWAYS, AFTER_IDENT
  };
}

namespace WrapMode {
  enum Type {
    NONE, CHAR, WORD
  };
}

struct FoldFlags {
  FoldFlags();

  bool LINEBEFORE_EXPANDED;
  bool LINEBEFORE_CONTRACTED;
  bool LINEAFTER_EXPANDED;
  bool LINEAFTER_CONTRACTED;
  bool LEVELNUMBERS;
};

class Style {
public:
  Style(const wxFont& font, const wxColor& foreground=wxColor(0,0,0), const wxColor& background = wxNullColour);
  wxFont font;
  wxColor foreground;
  wxColor background;
};

class Settings {
public:
  Settings();

  bool lineNumberEnable;
  bool foldEnable;
  bool displayEOLEnable;
  bool indentGuideEnable;
  ViewWhitespace::Type whitespace;
  WrapMode::Type wordWrap;

  EdgeStyle::Type edgeStyle;
  wxColor edgeColor;
  int edgeColumn;

  int tabWidth;
  bool useTabs;
  bool tabIndents;
  bool backspaceUnindents;

  FoldFlags foldflags;

  bool foldComment;
  bool foldCompact;
  bool foldPreproc;
};

#endif  // RIDE_SETTINGS_H