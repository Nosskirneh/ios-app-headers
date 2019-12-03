//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProviderDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SPTFreeTierPlaylistLogger;
@protocol SPTFreeTierPlaylistConfiguration, SPTFreeTierPlaylistViewModel;

@interface SPTFreeTierPlaylistCellProviderCoordinator : NSObject <SPTFreeTierPlaylistCellProviderDelegate>
{
    id <SPTFreeTierPlaylistConfiguration> _configuration;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    NSMutableDictionary *_rowHeightCache;
    SPTFreeTierPlaylistLogger *_logger;
}

@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableDictionary *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)indexPathForView:(id)arg1;
- (void)presentContextMenuWithSender:(id)arg1;
- (void)cellProvider:(id)arg1 playTrackAtIndexPath:(id)arg2;
- (void)contextMenuPressedForCellProvider:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellProviderForCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerCellProviderCellForTableView:(id)arg1;
- (id)initWithConfiguration:(id)arg1 playlistViewModel:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

