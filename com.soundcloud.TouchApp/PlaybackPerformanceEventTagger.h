//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayerPerformanceTagger-Protocol.h"

@class APAnalyticsController, AnalyticsPerformanceEventStateManager, NSString;

@interface PlaybackPerformanceEventTagger : NSObject <PlayerPerformanceTagger>
{
    APAnalyticsController *_analyticsController;
    AnalyticsPerformanceEventStateManager *_stateManager;
    NSString *_playerName;
}

@property(readonly, nonatomic) NSString *playerName; // @synthesize playerName=_playerName;
@property(readonly, nonatomic) AnalyticsPerformanceEventStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) APAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (id)stringFromFormat:(long long)arg1;
- (void)tagEventWithType:(unsigned long long)arg1 withDuration:(double)arg2 diagnostics:(id)arg3;
- (void)tagBufferUnderrunWithDiagnostics:(id)arg1;
- (void)tagPlaybackStartedWithDiagnostics:(id)arg1;
- (void)tagPlaybackStopped;
- (void)tagPlaybackInitiated;
- (void)reset;
- (id)initWithAnalyticsController:(id)arg1 playerName:(id)arg2;
- (id)initWithPlayerName:(id)arg1;

@end

