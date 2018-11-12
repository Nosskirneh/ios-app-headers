//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

@class SPTNowPlayingBaseInformationView, SPTProgressView;
@protocol SPContextMenuFeature, SPTPodcastContextMenuProvider, SPTPodcastSpeedControlManager;

@interface SPTNowPlayingVideoInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController
{
    id <SPContextMenuFeature> _contextMenu;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTProgressView *_progressView;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
}

@property(retain, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
- (void).cxx_destruct;
- (void)contextMenuPressed:(id)arg1;
- (id)initWithModel:(id)arg1 theme:(id)arg2 contextMenuFeature:(id)arg3 podcastContextMenuProvider:(id)arg4 logger:(id)arg5 linkDispatcher:(id)arg6;

// Remaining properties
@property(retain, nonatomic) SPTNowPlayingBaseInformationView *view; // @dynamic view;

@end

