//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class UIScrollView, UIView, WMPOfflineAlbumsCollectionModule, WMPOfflinePlaylistsCollectionModule, WMPTrackListModule, _TtC4WiMP28DownloadProgressButtonModule;

@interface WMPOfflineContentScene : WMPAbstractScene
{
    WMPOfflineAlbumsCollectionModule *_offlineAlbumsCollectionModule;
    WMPOfflinePlaylistsCollectionModule *_offlinePlaylistsCollectionModule;
    WMPTrackListModule *_trackListModule;
    _TtC4WiMP28DownloadProgressButtonModule *_downloadProgressButtonModule;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _TtC4WiMP28DownloadProgressButtonModule *downloadProgressButtonModule; // @synthesize downloadProgressButtonModule=_downloadProgressButtonModule;
@property(retain, nonatomic) WMPTrackListModule *trackListModule; // @synthesize trackListModule=_trackListModule;
@property(retain, nonatomic) WMPOfflinePlaylistsCollectionModule *offlinePlaylistsCollectionModule; // @synthesize offlinePlaylistsCollectionModule=_offlinePlaylistsCollectionModule;
@property(retain, nonatomic) WMPOfflineAlbumsCollectionModule *offlineAlbumsCollectionModule; // @synthesize offlineAlbumsCollectionModule=_offlineAlbumsCollectionModule;
- (void).cxx_destruct;
- (id)downloadProgressController;
- (id)favouriteTracksModule;
- (id)offlineAlbumsController;
- (id)offlinePlaylistsController;
- (id)newContainer;
- (id)createPlaylistsContainerForModule:(id)arg1 withTitle:(id)arg2;
- (id)createAlbumsContainerForModule:(id)arg1 withTitle:(id)arg2;
- (id)createTracksContainerForModule:(id)arg1 withTitle:(id)arg2;
- (id)createDownloadProgressContainerForModule:(id)arg1;
- (id)createNoContentView;
- (void)setupModules;
- (void)setupScrollView;
- (_Bool)hasFavouriteTracksOfflined;
- (void)updateModuleContent;
- (void)refreshContent;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(nonatomic) UIView *noContentView; // @dynamic noContentView;

@end

