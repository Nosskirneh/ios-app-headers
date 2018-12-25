//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTOfflineCoordinatorObserver-Protocol.h"
#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"

@class NSArray, NSString, YTMAutoOfflineController, YTMOfflineItemSectionHeaderView, YTMSettings, YTOfflineCoordinator, YTOfflinePlaylistController, YTOfflineVideoController, YTUserInfoController;
@protocol YTMServices;

@interface YTMOfflineItemSectionController : YTInnerTubeSectionController <YTOfflineVideoControllerObserver, YTOfflinePlaylistControllerObserver, YTOfflineCoordinatorObserver>
{
    YTUserInfoController *_userInfoController;
    YTMAutoOfflineController *_autoOfflineController;
    YTOfflineVideoController *_offlineVideoController;
    YTOfflinePlaylistController *_offlinePlaylistController;
    YTOfflineCoordinator *_offlineCoordinator;
    YTMSettings *_settings;
    id <YTMServices> _services;
    NSArray *_entries;
    _Bool _calculatingStorage;
    _Bool _headerVisible;
    YTMOfflineItemSectionHeaderView *_headerView;
}

@property(retain, nonatomic) YTMOfflineItemSectionHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)didPressRefresh;
- (void)didPressSettings;
- (void)didPressPlayAll;
- (void)updateHeaderVideoCount;
- (_Bool)entry:(id)arg1 hasEqualIdentifierToEntry:(id)arg2;
- (_Bool)isNopResponseWithNewEntries:(id)arg1;
- (void)refreshAllEntries;
- (id)behaviorResponderProvider;
- (void)updatePlaylistEntriesMatchingBlock:(CDUnknownBlockType)arg1 withCompletedVideos:(unsigned long long)arg2 totalVideos:(unsigned long long)arg3;
- (void)updateVideoEntriesMatchingBlock:(CDUnknownBlockType)arg1 withPercentageDownloaded:(double)arg2;
- (void)updateEntriesWithPlaylistID:(id)arg1;
- (id)rendererForPlaylist:(id)arg1;
- (id)playlistIDForEntry:(id)arg1;
- (_Bool)isValidPlaylistEntry:(id)arg1;
- (void)updateClientDataAvailabilityReasonForCell:(id)arg1 entry:(id)arg2;
- (void)updateEntriesWithVideoID:(id)arg1;
- (id)rendererForVideo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateIndexText;
- (id)videoIDForEntry:(id)arg1;
- (_Bool)isValidVideoEntry:(id)arg1;
- (_Bool)shouldShowOfflineUsageHintForCell:(id)arg1 forIndex:(long long)arg2;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (void)updateCell:(id)arg1 forEntry:(id)arg2;
- (void)clearAndHandleEntries:(id)arg1 totalResults:(unsigned long long)arg2;
- (void)networkTypeDidChange;
- (void)downloadDidCompleteWithPlaylistID:(id)arg1;
- (void)downloadDidProgressWithPlaylistID:(id)arg1 completedVideos:(unsigned long long)arg2 totalVideos:(unsigned long long)arg3;
- (void)downloadDidStartWithPlaylistID:(id)arg1;
- (void)didDeleteAllOfflinePlaylists;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didSaveThumbnailWithPlaylistID:(id)arg1;
- (void)didFailToSaveOfflinePlaylistWithID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)didSaveThumbnailWithVideoID:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidCancelWithVideoID:(id)arg1;
- (void)downloadDidProgressWithVideoID:(id)arg1 percentageDownloaded:(double)arg2;
- (void)downloadDidStartWithVideoID:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (void)updateHeader:(id)arg1;
- (Class)classForHeader;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
