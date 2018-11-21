//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLogger-Protocol.h"

@class NSArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSURL;
@protocol SPTViewLoggerTransport;

@interface SPTViewLogger : NSObject <SPTViewLogger>
{
    long long _state;
    id <SPTViewLoggerTransport> _transport;
    NSURL *_viewURI;
    NSString *_pageId;
    NSString *_connectionType;
    struct __CFRunLoopObserver *_observer;
    NSMutableDictionary *_steps;
    NSString *_terminalState;
    NSMutableDictionary *_metaData;
    NSNumber *_viewStartedLoadingAt;
    NSSet *_pendingImageLoadingRequests;
    NSArray *_finishedImageLoadingRequests;
}

@property(copy, nonatomic) NSArray *finishedImageLoadingRequests; // @synthesize finishedImageLoadingRequests=_finishedImageLoadingRequests;
@property(copy, nonatomic) NSSet *pendingImageLoadingRequests; // @synthesize pendingImageLoadingRequests=_pendingImageLoadingRequests;
@property(retain, nonatomic) NSNumber *viewStartedLoadingAt; // @synthesize viewStartedLoadingAt=_viewStartedLoadingAt;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property(copy, nonatomic) NSString *terminalState; // @synthesize terminalState=_terminalState;
@property(retain, nonatomic) NSMutableDictionary *steps; // @synthesize steps=_steps;
@property(nonatomic) struct __CFRunLoopObserver *observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <SPTViewLoggerTransport> transport; // @synthesize transport=_transport;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)removeImageLoadingRequest:(id)arg1;
- (void)addImageLoadingRequest:(id)arg1;
- (void)logViewLoadingRendered;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDataDidFailToLoadWithError:(id)arg1 pageIdentifier:(id)arg2;
- (void)logImageLoadingEndedForImageWithURI:(id)arg1;
- (void)logImageLoadingStartedForImageWithURI:(id)arg1;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (_Bool)isViewLoadingInProgress;
- (void)reset;
- (void)terminateSequence;
- (void)logViewLoadWithStepName:(id)arg1 timeSinceStart:(double)arg2 isTerminalStep:(_Bool)arg3 terminateSequence:(_Bool)arg4;
- (double)durationSinceStart:(id)arg1;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 viewURI:(id)arg2 connectionType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

