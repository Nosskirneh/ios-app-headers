//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SyncNotifier;

@interface RemoveTrackFromPlaylistService : NSObject
{
    SyncNotifier *_syncNotifier;
}

@property(readonly, nonatomic) SyncNotifier *syncNotifier; // @synthesize syncNotifier=_syncNotifier;
- (void).cxx_destruct;
- (id)syncInfo:(id)arg1;
- (void)removeTrack:(id)arg1 fromPlaylist:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)removeTrack:(id)arg1 fromPlaylist:(id)arg2;
- (id)initWithSyncNotifier:(id)arg1;
- (id)init;

@end

