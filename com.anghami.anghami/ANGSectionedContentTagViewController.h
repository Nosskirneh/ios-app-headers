//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

#import "ANGAsyncImageViewDelegate-Protocol.h"
#import "ANGOptionsSelectorDelegate-Protocol.h"
#import "LoaderDelegate-Protocol.h"
#import "TitleLabelTapDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class ANGMusicLanguageManager, HashTag, NSDictionary, NSSet, NSString, SearchTag, Tag, TagContentLoader;

@interface ANGSectionedContentTagViewController : ANGSectionedContentViewController <ANGOptionsSelectorDelegate, TitleLabelTapDelegate, ANGAsyncImageViewDelegate, LoaderDelegate, UIActionSheetDelegate>
{
    TagContentLoader *_loader;
    _Bool _didSendOpenAnalytics;
    unsigned long long _selectedIndex;
    NSSet *_supportedLanguages;
    Tag *_tag;
    unsigned long long _oldSortType;
    unsigned long long _oldSelectedIndex;
    NSDictionary *_parameters;
    NSString *_originalCoverArtId;
    unsigned long long _sortType;
    ANGMusicLanguageManager *_musicLanguageManager;
}

@property(retain, nonatomic) ANGMusicLanguageManager *musicLanguageManager; // @synthesize musicLanguageManager=_musicLanguageManager;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
- (void).cxx_destruct;
- (void)surpriseMeUpdated:(id)arg1;
- (_Bool)isSurpriseMeTag;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (id)loader;
- (void)playAtIndex:(unsigned long long)arg1;
- (void)constructPlayQueueForSection:(id)arg1 atIndex:(unsigned long long)arg2 isVideoPlayQueue:(_Bool)arg3 showPlayerForVideo:(_Bool)arg4;
- (void)playAction:(id)arg1;
- (void)openSelectorOptions;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (void)handleChangeMusicLanguageForValue:(unsigned long long)arg1;
- (void)saveStateBeforeLoading;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2;
- (void)handleClickedObject:(id)arg1 inSection:(id)arg2 atIndexPath:(id)arg3 correctedIndex:(long long)arg4;
- (id)getShareOption;
- (id)getSortOptions;
- (id)getMusicLanguageOptions;
- (id)optionsForSection:(unsigned long long)arg1;
- (id)getMusicLanguageManager;
- (id)optionsSelectorImageNameForSection:(unsigned long long)arg1;
- (id)optionsSelectorTitleForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfRowsForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfSections;
- (_Bool)hasLanguageSelector;
- (void)showSelectorOptions;
- (void)optButtonPressed;
- (void)setCoverArtImage:(id)arg1;
- (void)asyncImageFailed:(id)arg1;
- (void)asyncImageSet:(id)arg1;
- (void)filterPressed;
- (id)defaultHeaderButtons;
- (void)reloadHeader;
- (_Bool)headerVisible;
- (_Bool)headerBackgroundGradientViewVisible;
- (_Bool)navigationMinimizes;
- (_Bool)shouldShowHeader;
- (void)setHeaderTitle:(id)arg1;
- (void)subtitleLabelTapped;
- (void)layoutTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) HashTag *hashTag;
@property(readonly, nonatomic) SearchTag *searchTag;
- (void)setup;
- (void)updateViewWithTag:(id)arg1;
- (id)initWithTag:(id)arg1 andParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

