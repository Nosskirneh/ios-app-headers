//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTTableRowAdapter.h"

#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTPSXLogger;
@protocol GLUETheme, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTEncoreComponentFactory, SPTExplicitContentAccessManager, SPTFormatListItemModel, SPTFormatListPlatformManager, SPTPSXTestManager, SPTPSXTrackRowDelegate, SPTPSXViewModel, SPTShelves;

@interface SPTPSXEncoreTrackRowAdapter : SPTTableRowAdapter <SPTPlayerObserver>
{
    id <SPTPSXTrackRowDelegate> _delegate;
    id <SPTFormatListItemModel> _track;
    id <SPTPSXViewModel> _viewModel;
    id <SPTFormatListPlatformManager> _platformManager;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTShelves> _shelves;
    id <SPTPSXTestManager> _testManager;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    SPTPSXLogger *_logger;
    id <SPTEncoreComponentFactory> _encoreComponentFactory;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTEncoreComponentFactory> encoreComponentFactory; // @synthesize encoreComponentFactory=_encoreComponentFactory;
@property(retain, nonatomic) SPTPSXLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPSXTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTFormatListPlatformManager> platformManager; // @synthesize platformManager=_platformManager;
@property(retain, nonatomic) id <SPTPSXViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTFormatListItemModel> track; // @synthesize track=_track;
@property(nonatomic) __weak id <SPTPSXTrackRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)banBanButtonTapped:(id)arg1;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)enableSwipeActionsOnCell:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)didSelectCell;
- (_Bool)shouldHighlightCell:(id)arg1;
- (id)tableCell;
- (double)tableCellHeight;
- (id)initWithTrack:(id)arg1 viewModel:(id)arg2 platformManager:(id)arg3 theme:(id)arg4 contextMenuPresenterFactory:(id)arg5 contextMenuOptionsFactory:(id)arg6 shelves:(id)arg7 testManager:(id)arg8 explicitContentAccessManager:(id)arg9 logger:(id)arg10 encoreComponentFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

