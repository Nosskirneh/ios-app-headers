//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCSessionDelegate-Protocol.h"

@class NSMutableArray, NSString, WCSession;

@interface ANGWatchSessionManager : NSObject <WCSessionDelegate>
{
    WCSession *session;
    WCSession *validSession;
    NSMutableArray *songIdsToTransfer;
    NSMutableArray *cachedOwnPlaylistsArray;
    _Bool _isPendingWatchAnswer;
    _Bool _lastSessionReachable;
    long long _syncingFilesTotalCount;
}

+ (id)sharedManager;
@property long long syncingFilesTotalCount; // @synthesize syncingFilesTotalCount=_syncingFilesTotalCount;
@property(nonatomic) _Bool lastSessionReachable; // @synthesize lastSessionReachable=_lastSessionReachable;
@property(nonatomic) _Bool isPendingWatchAnswer; // @synthesize isPendingWatchAnswer=_isPendingWatchAnswer;
- (void).cxx_destruct;
- (void)downloadAndSendSongsToWatch:(id)arg1;
- (void)sendMessageToWatchType:(id)arg1 metadata:(id)arg2 replyHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)sendMessageToWatchType:(id)arg1 metadata:(id)arg2;
- (void)startSync;
- (void)cancelSync;
- (void)syncPlaylistsWithWatch;
- (void)updateWatchSelectedPlaylists:(id)arg1;
- (void)sendSong:(id)arg1;
- (id)getPlaylistsForPaginationIndex:(long long)arg1;
- (void)updateWatchLikeSongButton;
- (void)updateWatchPlayPauseButton;
- (void)updateWatchQueue;
- (void)notifyWatchOfPlaylistsUpdate;
- (id)userDefaultsDictionaryToWatch;
- (void)syncWatchUserDefaults;
- (id)playlistToFullDictionary:(id)arg1;
- (id)playlistToDictionary:(id)arg1;
- (id)arrayOfOwnPlaylists;
- (id)songToDictionary:(id)arg1;
- (id)songsToDictionaryArray:(id)arg1;
- (void)postTransfersUpdatedNotificationDelay;
- (void)postTransfersUpdatedNotification;
- (void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)handleSession:(id)arg1 message:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sessionReachabilityDidChange:(id)arg1;
- (_Bool)isPairedToWatch;
- (_Bool)isWatchConnected;
- (_Bool)syncingInProgress;
- (long long)filesPendingTransfer;
- (id)transferStatus;
- (id)validReachableSession;
- (id)validSession;
- (void)startSession;
- (void)cachedSongDownloaded:(id)arg1;
- (id)playStatusChangedNotifications;
- (id)playQueueChangeNotifications;
- (void)registerForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

