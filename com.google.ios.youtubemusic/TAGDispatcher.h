//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGHitSender-Protocol.h"

@class NSMutableSet, NSString, NSTimer, TAGDataProvider, TAGNetworking, TAGRateLimiter;
@protocol TAGLogger;

@interface TAGDispatcher : NSObject <TAGHitSender>
{
    TAGDataProvider *_store;
    TAGNetworking *_network;
    NSString *_wrapperUrl;
    NSString *_wrapperQueryParameter;
    id <TAGLogger> _logger;
    double _dispatchInterval;
    TAGRateLimiter *_rateLimiter;
    NSMutableSet *_operations;
    NSTimer *_timer;
    unsigned long long _maxRequestsPerDispatch;
}

+ (id)keyPathsForValuesAffectingCanDispatch;
+ (id)keyPathsForValuesAffectingCanScheduleDispatch;
+ (void)initialize;
+ (id)instance;
@property(nonatomic) unsigned long long maxRequestsPerDispatch; // @synthesize maxRequestsPerDispatch=_maxRequestsPerDispatch;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) TAGRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(nonatomic) double dispatchInterval; // @synthesize dispatchInterval=_dispatchInterval;
@property(nonatomic) __weak id <TAGLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *wrapperQueryParameter; // @synthesize wrapperQueryParameter=_wrapperQueryParameter;
@property(retain, nonatomic) NSString *wrapperUrl; // @synthesize wrapperUrl=_wrapperUrl;
@property(retain, nonatomic) TAGNetworking *network; // @synthesize network=_network;
@property(retain, nonatomic) TAGDataProvider *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (double)timerInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendHitToUrl:(id)arg1;
- (void)dispatchWithCallback:(CDUnknownBlockType)arg1;
- (oneway void)dispatch;
- (void)startTimer;
- (void)cancelTimer;
- (void)timerFired;
- (oneway void)rescheduleDispatch;
@property(readonly, nonatomic) _Bool canDispatch;
@property(readonly, nonatomic) _Bool canScheduleDispatch;
- (void)initialDispatch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

