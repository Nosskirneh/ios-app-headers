//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PlayQueueDataSourceFactory;

@interface UserContentEntityLauncherCreator : NSObject
{
    PlayQueueDataSourceFactory *_playQueueDataSourceFactory;
}

@property(readonly, nonatomic) PlayQueueDataSourceFactory *playQueueDataSourceFactory; // @synthesize playQueueDataSourceFactory=_playQueueDataSourceFactory;
- (void).cxx_destruct;
- (id)playlistLauncher:(id)arg1 context:(id)arg2;
- (id)playerLauncher:(id)arg1 contentType:(unsigned long long)arg2 user:(id)arg3 paginationConfig:(id)arg4 context:(id)arg5;
- (id)launcherForEntity:(id)arg1 contentType:(unsigned long long)arg2 user:(id)arg3 paginationConfig:(id)arg4 context:(id)arg5;
- (id)initWithPlayQueueDataSourceFactory:(id)arg1;
- (id)init;

@end

