//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMAutoOfflineControllerObserver-Protocol.h"
#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"

@class GIMMe, NSString, YTOfflineVideoController;
@protocol YTMOfflinePlaylistMonitorDelegate;

@interface YTMOfflinePlaylistMonitor : NSObject <YTMAutoOfflineControllerObserver, YTOfflinePlaylistControllerObserver, YTOfflineVideoControllerObserver>
{
    YTOfflineVideoController *_offlineVideoController;
    GIMMe *_gimme;
    id <YTMOfflinePlaylistMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMOfflinePlaylistMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)rendererForVideo:(id)arg1;
- (void)updateOfflineStatusForVideo:(id)arg1;
- (void)didDeleteVideoID:(id)arg1 fromPlaylistID:(id)arg2;
- (void)didSaveThumbnailWithVideoID:(id)arg1;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (void)didDeleteAllOfflineVideos;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didFailToSaveOfflineVideoWithID:(id)arg1;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidCancelWithVideoID:(id)arg1;
- (void)downloadDidStartWithVideoID:(id)arg1;
- (void)autoOfflineController:(id)arg1 didDeleteVideoWithId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

