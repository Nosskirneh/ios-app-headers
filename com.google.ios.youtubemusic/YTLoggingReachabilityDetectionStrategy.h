//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReachabilityDetectionStrategy-Protocol.h"

@class NSString;
@protocol YTReachabilityDetectionDelegate;

@interface YTLoggingReachabilityDetectionStrategy : NSObject <YTReachabilityDetectionStrategy>
{
    CDUnknownBlockType _loggingBlock;
    _Bool _systemReachable;
    id <YTReachabilityDetectionDelegate> _delegate;
}

@property(nonatomic) _Bool systemReachable; // @synthesize systemReachable=_systemReachable;
@property(nonatomic) __weak id <YTReachabilityDetectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callLoggingBlockWithSuccess:(_Bool)arg1 requestURL:(id)arg2;
- (_Bool)errorThresholdExceeded;
- (void)requestURL:(id)arg1 didFailWithReachabilityError:(id)arg2;
- (void)requestDidSucceedWithURL:(id)arg1;
@property(readonly, nonatomic) int detectionStrategyType;
- (id)initWithLoggingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

