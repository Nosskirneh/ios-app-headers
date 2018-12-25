//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCommandHandler-Protocol.h"

@class GIMMe, NSString, YTEditPlaylistController;

@interface YTMPlaylistEditEndpointCommand : NSObject <YTCommandHandler>
{
    YTEditPlaylistController *_editPlaylistController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)sendNotificationsForEndpoint:(id)arg1 addedPlaylistSetVideoId:(id)arg2 entry:(id)arg3;
- (void)removeFromPlaylistWithSender:(id)arg1 entry:(id)arg2 serviceEndpoint:(id)arg3;
- (void)addToPlaylistWithSender:(id)arg1 entry:(id)arg2 serviceEndpoint:(id)arg3;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

