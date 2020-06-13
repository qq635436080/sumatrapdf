/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

enum class Cmd {
    Open = 400,
    OpenFolder,
    Close,
    SaveAs,
    Print,
    ShowInFolder,
    Exit,
    Refresh,
    SaveAsBookmark,
    SendByEmail,
    Properties,
    ExitFullScreen,

    ViewSinglePage, // alias: ViewLayoutFirst
    ViewFacing,
    ViewBook,
    ViewContinuous,
    ViewMangaMode, // alias: ViewLayoutLast

    ViewRotateLeft,
    ViewRotateRight,
    ViewBookmarks,
    ViewFullScreen,
    ViewPresentationMode,
    ViewShowHideToolbar,
    ViewShowHideMenuBar,

    CopySelection,
    SelectAll,

    NewWindow,
    DuplicateInNewWindow,
    CopyImage,
    CopyLinkTarget,
    CopyComment,

    GoToNextPage,
    GoToPrevPage,
    GoToFirstPage,
    GoToLastPage,
    GoToPage,
    GoToNavBack,
    GoToNavForward,

    FindFirst,
    FindNext,
    FindPrev,
    FindMatch,
    FindNextSel,
    FindPrevSel,

    SaveAnnotationsSmx,
    EditAnnotations,
    ZoomFitPage, // alias:: ZoomFirst
    ZoomActualSize,
    ZoomFitWidth,
    Zoom6400,
    Zoom3200,
    Zoom1600,
    Zoom800,
    Zoom400,
    Zoom200,
    Zoom150,
    Zoom125,
    Zoom100,
    Zoom50,
    Zoom25,
    Zoom12_5,
    Zoom8_33,
    ZoomFitContent,
    ZoomCustom, // alias: ZoomLast

    ContributeTranslation,

    ViewWithAcrobat,
    ViewWithFoxIt,
    ViewWithPdfXchange,
    ViewWithXpsViewer,
    ViewWithHtmlHelp,

    OpenSelectedDocument,
    PinSelectedDocument,
    ForgetSelectedDocument,

    Edit, // TODO: better name
    AddSibling,
    AddChild,
    Remove,
    AddPdfChild,
    AddPdfSibling,

    VisitWebsite,
    ExpandAll,
    CollapseAll,
    ExportBookmarks,

    SortTagSmallFirst,
    SortTagBigFirst,
    SortColor,
    SaveEmbedded,
    OpenEmbedded,
    EmbedSeparator, // TODO: SeparatorEmbed

    About,
    Options,
    ChangeLanguage,
    CheckUpdate,
    Manual,

    MoveFrameFocus,

    FavAdd,
    FavDel,
    FavToggle,
    FavShow,
    FavHide,
    RenameFile,

    DebugShowLinks,
    DebugCrashMe,
    LoadMobiSample,
    DebugEbookUI,
    DebugAnnotations,
    DebugDownloadSymbols,
    DebugTestApp,
    DebugShowNOtif,

    AdvancedOptions,
    NewBookmarks,

    // TODO: rename to IDM_*
    ViewZoomIn,
    ViewZoomOut,
    ToolbarViewFitWidth, // TODO: replace with ViewFitWidth,
    ToolbarViewFitPage,  // TODO: replace with ViewFitPage

    Separator,

    /* a range for "external viewers" setting */
    OpenWithExternalFirst,
    OpenWithExternalLast = OpenWithExternalFirst + 20,

    /* a range for file history */
    FileHistoryFirst,
    FileHistoryLast = FileHistoryFirst + 20,

    /* a range for favorites */
    FavFirst,
    FavLast = FavFirst + 200,

    /* a range for themes. We don't have themes yet. */
    ThemeFirst,
    ThemeLast,

    // aliases, at the end to not mess ordering
    ViewLayoutFirst = ViewSinglePage,
    ViewLayoutLast = ViewMangaMode,

    ZoomFirst = ZoomFitPage,
    ZoomLast = ZoomCustom,
};

enum {
    IDM_SAVE_ANNOTATIONS_SMX,
    IDM_EDIT_ANNOTATIONS,
    IDM_ZOOM_FIT_PAGE,
    IDM_ZOOM_FIRST = IDM_ZOOM_FIT_PAGE,
    IDM_ZOOM_ACTUAL_SIZE,
    IDM_ZOOM_FIT_WIDTH,
    IDM_ZOOM_6400,
    IDM_ZOOM_3200,
    IDM_ZOOM_1600,
    IDM_ZOOM_800,
    IDM_ZOOM_400,
    IDM_ZOOM_200,
    IDM_ZOOM_150,
    IDM_ZOOM_125,
    IDM_ZOOM_100,
    IDM_ZOOM_50,
    IDM_ZOOM_25,
    IDM_ZOOM_12_5,
    IDM_ZOOM_8_33,
    IDM_ZOOM_FIT_CONTENT,
    IDM_ZOOM_CUSTOM,
    IDM_ZOOM_LAST = IDM_ZOOM_CUSTOM,
    IDM_CONTRIBUTE_TRANSLATION,
    IDM_VIEW_WITH_ACROBAT,
    IDM_VIEW_WITH_FOXIT,
    IDM_VIEW_WITH_PDF_XCHANGE,
    IDM_VIEW_WITH_XPS_VIEWER,
    IDM_VIEW_WITH_HTML_HELP,
    IDM_OPEN_SELECTED_DOCUMENT,
    IDM_PIN_SELECTED_DOCUMENT,
    IDM_FORGET_SELECTED_DOCUMENT,
    /* a range for "external viewers" setting */
    IDM_OPEN_WITH_EXTERNAL_FIRST,
    IDM_OPEN_WITH_EXTERNAL_LAST = IDM_OPEN_WITH_EXTERNAL_FIRST + 20,
    /* a range for file history */
    IDM_FILE_HISTORY_FIRST,
    IDM_FILE_HISTORY_LAST = IDM_FILE_HISTORY_FIRST + 20,
    IDM_EDIT,
    IDM_ADD_SIBLING,
    IDM_ADD_CHILD,
    IDM_REMOVE,
    IDM_ADD_PDF_CHILD,
    IDM_ADD_PDF_SIBLING,
    IDM_VISIT_WEBSITE,
    IDM_EXPAND_ALL,
    IDM_COLLAPSE_ALL,
    IDM_EXPORT_BOOKMARKS,
    IDM_SEPARATOR,
    IDM_SORT_TAG_SMALL_FIRST,
    IDM_SORT_TAG_BIG_FIRST,
    IDM_SORT_COLOR,
    IDM_SAVE_EMBEDDED,
    IDM_OPEN_EMBEDDED,
    IDM_EMBED_SEPARATOR,
    IDM_ABOUT,
    IDM_OPTIONS,
    IDM_CHANGE_LANGUAGE,
    IDM_CHECK_UPDATE,
    IDM_MANUAL,
    IDM_MOVE_FRAME_FOCUS,
    IDM_GOTO_NAV_BACK,
    IDM_GOTO_NAV_FORWARD,
    IDM_FAV_ADD,
    IDM_FAV_DEL,
    IDM_FAV_TOGGLE,
    IDM_FAV_SHOW,
    IDM_FAV_HIDE,
    IDM_RENAME_FILE,
    IDM_FIND_NEXT_SEL,
    IDM_FIND_PREV_SEL,
    IDM_DEBUG_SHOW_LINKS,
    IDM_DEBUG_CRASH_ME,
    IDM_LOAD_MOBI_SAMPLE,
    IDM_DEBUG_EBOOK_UI,
    IDM_DEBUG_MUI,
    IDM_DEBUG_ANNOTATION,
    IDM_DEBUG_DOWNLOAD_SYMBOLS,
    IDM_DEBUG_TEST_APP,
    IDM_DEBUG_SHOW_NOTIF,
    IDM_ADVANCED_OPTIONS,
    IDM_NEW_BOOKMARKS,
    IDM_FAV_FIRST,
    IDM_FAV_LAST = IDM_FAV_FIRST + 200,
    IDM_CHANGE_THEME_FIRST,
    IDM_CHANGE_THEME_LAST,
    // TODO: rename to IDM_*
    IDT_VIEW_ZOOMIN,
    IDT_VIEW_ZOOMOUT,
    IDT_VIEW_FIT_WIDTH, // TODO: replace with IDM_ZOOM_FIT_WIDTH
    IDT_VIEW_FIT_PAGE,  // TOOD: replace with IDM_ZOOM_FIT_PAGE
};