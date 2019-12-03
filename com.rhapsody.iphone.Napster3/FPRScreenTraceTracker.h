//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAScreenViewReporterDelegate-Protocol.h"

@class CADisplayLink, NSMapTable, NSPointerArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FPRScreenTraceTracker : NSObject <FIRAScreenViewReporterDelegate>
{
    // Error parsing type: Aq, name: _totalFramesCount
    // Error parsing type: Aq, name: _slowFramesCount
    // Error parsing type: Aq, name: _frozenFramesCount
    NSMapTable *_activeScreenTraces;
    NSPointerArray *_previouslyVisibleViewControllers;
    NSObject<OS_dispatch_queue> *_screenTraceTrackerSerialQueue;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_group> *_screenTraceTrackerDispatchGroup;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *screenTraceTrackerDispatchGroup; // @synthesize screenTraceTrackerDispatchGroup=_screenTraceTrackerDispatchGroup;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *screenTraceTrackerSerialQueue; // @synthesize screenTraceTrackerSerialQueue=_screenTraceTrackerSerialQueue;
@property(retain, nonatomic) NSPointerArray *previouslyVisibleViewControllers; // @synthesize previouslyVisibleViewControllers=_previouslyVisibleViewControllers;
@property(retain, nonatomic) NSMapTable *activeScreenTraces; // @synthesize activeScreenTraces=_activeScreenTraces;
- (void).cxx_destruct;
@property long long frozenFramesCount; // @dynamic frozenFramesCount;
@property long long slowFramesCount; // @dynamic slowFramesCount;
@property long long totalFramesCount; // @dynamic totalFramesCount;
- (void)viewControllerDidDisappear:(id)arg1;
- (void)viewControllerDidAppear:(id)arg1 trackedByAnalytics:(_Bool)arg2;
- (void)registerAsFIRAScreenViewReporterDelegate;
- (_Bool)shouldCreateScreenTraceForViewController:(id)arg1;
- (void)stopScreenTraceForViewController:(id)arg1 currentTotalFrames:(long long)arg2 currentFrozenFrames:(long long)arg3 currentSlowFrames:(long long)arg4;
- (void)startScreenTraceForViewController:(id)arg1 currentTotalFrames:(long long)arg2 currentFrozenFrames:(long long)arg3 currentSlowFrames:(long long)arg4;
- (void)displayLinkStep;
- (void)appWillResignActiveNotification:(id)arg1;
- (void)appDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
