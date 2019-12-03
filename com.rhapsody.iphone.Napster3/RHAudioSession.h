//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSMutableArray, NSString;

@interface RHAudioSession : NSObject
{
    int _interruptState;
    int _activeCount;
    CDUnknownBlockType _isApplicationInBackground;
    NSMutableArray *_routeWatchers;
    NSMutableArray *_interruptWatchers;
}

+ (id)getAudioProperty:(int)arg1;
+ (void)doInterrupt:(int)arg1 canResume:(_Bool)arg2;
+ (id)sharedSession;
@property(retain, nonatomic) NSMutableArray *interruptWatchers; // @synthesize interruptWatchers=_interruptWatchers;
@property(retain, nonatomic) NSMutableArray *routeWatchers; // @synthesize routeWatchers=_routeWatchers;
@property int activeCount; // @synthesize activeCount=_activeCount;
@property(nonatomic) int interruptState; // @synthesize interruptState=_interruptState;
@property(copy, nonatomic) CDUnknownBlockType isApplicationInBackground; // @synthesize isApplicationInBackground=_isApplicationInBackground;
- (void).cxx_destruct;
- (void)interruptChanged:(id)arg1;
- (void)routeChanged:(id)arg1;
- (_Bool)tearDownInterruptListener_Error:(id *)arg1;
- (_Bool)setUpInterruptListener_Error:(id *)arg1;
- (_Bool)tearDownRouteChangeListener_Error:(id *)arg1;
- (_Bool)setUpRouteChangeListener_Error:(id *)arg1;
- (_Bool)setMediaPlayback:(_Bool)arg1 mixWithOthers:(_Bool)arg2 error:(id *)arg3;
- (_Bool)intSetActive:(_Bool)arg1 error:(id *)arg2;
- (id)getAudioProperty:(int)arg1;
- (void)sendInterruptMessage:(int)arg1 shouldResumeOnEnd:(_Bool)arg2;
- (void)sendRouteChangeMessage:(int)arg1 fromRoute:(id)arg2 toRoute:(id)arg3;
- (void)stopWhenInterrupted:(id)arg1;
- (id)doWhenInterrupted:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)stopWhenRouteChanges:(id)arg1;
- (id)doWhenRouteChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)doInterrupt:(int)arg1 canResume:(_Bool)arg2;
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *category;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) AVAudioSession *session;
- (id)init;

@end
