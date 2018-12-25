//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTICommand, YTIWatchNextResponse, YTPlayerTransition;
@protocol YTLatencyTickLoggerProtocol;

@interface YTMWatchTransition : NSObject
{
    _Bool _autoplay;
    _Bool _shouldStartPlayback;
    GIMMe *_gimme;
    YTPlayerTransition *_playerTransition;
    YTIWatchNextResponse *_watchNextResponse;
    id <YTLatencyTickLoggerProtocol> _watchLatencyTickLogger;
}

+ (_Bool)isAutoplayEndpoint:(id)arg1;
@property(readonly, nonatomic) id <YTLatencyTickLoggerProtocol> watchLatencyTickLogger; // @synthesize watchLatencyTickLogger=_watchLatencyTickLogger;
@property(readonly, nonatomic) _Bool shouldStartPlayback; // @synthesize shouldStartPlayback=_shouldStartPlayback;
@property(readonly, nonatomic) YTIWatchNextResponse *watchNextResponse; // @synthesize watchNextResponse=_watchNextResponse;
@property(readonly, nonatomic) YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMDXRemoteQueue;
@property(readonly, nonatomic) YTICommand *action;
- (_Bool)hasVideoIDInEndpoint;
- (id)copyWithWatchNextResponse:(id)arg1;
@property(readonly, nonatomic) YTICommand *navigationEndpoint;
- (id)initWithNavEndpoint:(id)arg1 startPlayback:(_Bool)arg2 watchNextResponse:(id)arg3 autoplay:(_Bool)arg4;
- (id)initWithNavEndpoint:(id)arg1 watchNextResponse:(id)arg2 autoplay:(_Bool)arg3;
- (id)initWithNavEndpoint:(id)arg1 watchNextResponse:(id)arg2;
- (id)initWithNavEndpoint:(id)arg1 startPlayback:(_Bool)arg2;
- (id)initWithNavEndpoint:(id)arg1;

@end

