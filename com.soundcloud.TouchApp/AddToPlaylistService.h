//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SyncNotifier;

@interface AddToPlaylistService : NSObject
{
    SyncNotifier *_syncNotifier;
}

@property(readonly, nonatomic) SyncNotifier *syncNotifier; // @synthesize syncNotifier=_syncNotifier;
- (void).cxx_destruct;
- (id)addToPlaylistDataForTrack:(id)arg1 playlist:(id)arg2;
- (id)syncWithData:(id)arg1;
- (id)addTrack:(id)arg1 toPlaylist:(id)arg2;
- (id)initWithSyncNotifier:(id)arg1;
- (id)init;

@end

