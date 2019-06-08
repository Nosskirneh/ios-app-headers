//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHPlaylistDetailsViewController.h"

@class RHActionSheet, RHDataController, RHMemberPlaylistHeaderViewController, RHNavigationService, UIButton, UILabel, UIView, _TtC7Napster12Dependencies;
@protocol ImageProviderOBJC;

@interface RHMemberPlaylistViewController : RHPlaylistDetailsViewController
{
    unsigned long long _playlistMode;
    UIView *_headerView;
    UIView *_editView;
    UILabel *_titleLabel;
    UIButton *_optionsButton;
    UIButton *_downloadButton;
    UIButton *_editButton;
    UIButton *_doneButton;
    UIButton *_deleteAllItemsButton;
    RHActionSheet *_actionSheet;
    _TtC7Napster12Dependencies *_dependencies;
    id <ImageProviderOBJC> _imageProvider;
    RHDataController *_dataController;
    RHNavigationService *_navigationService;
}

@property(readonly, nonatomic) RHNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic) id <ImageProviderOBJC> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) __weak RHActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak UIButton *deleteAllItemsButton; // @synthesize deleteAllItemsButton=_deleteAllItemsButton;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak UIButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *editView; // @synthesize editView=_editView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long playlistMode; // @synthesize playlistMode=_playlistMode;
- (void).cxx_destruct;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (id)reachabilityService;
@property(readonly, nonatomic) RHMemberPlaylistHeaderViewController *memberPlaylistHeaderViewController;
- (void)deletePlaylist;
- (void)askForConfirmationToDeletePlaylist;
- (void)deleteAllItems;
- (void)renamePlaylist;
- (void)choosePlaylistForAllTracks;
- (void)queuePlaylist;
- (void)updateInterface:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)deleteAllItemsButtonTapped:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)downloadButtonTapped:(id)arg1;
- (void)optionsButtonTapped:(id)arg1;
- (void)updateTitle;
- (void)clearAllButtonTapped:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (_Bool)shouldShowPlaybar;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewUnloading;
- (void)viewDidLoad;
- (void)setupPropertiesWithDependencies:(id)arg1;
- (id)initForDownloadedWithPlaylist:(id)arg1 dependencies:(id)arg2 metricsSource:(id)arg3;
- (id)initForInLibraryWithPlaylist:(id)arg1 dependencies:(id)arg2 metricsSource:(id)arg3;

@end

