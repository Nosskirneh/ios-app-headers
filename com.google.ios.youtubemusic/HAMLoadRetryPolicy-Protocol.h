//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol HAMLoadRetryPolicy <NSObject>
@property(readonly, nonatomic) _Bool retryScheduled;
@property(readonly, nonatomic) _Bool canRetry;
@property(readonly, nonatomic) NSError *error;
- (void)cancelRetry;
- (void)scheduleRetryWithBlock:(void (^)(void))arg1;
- (void)didCompleteLoadWithError:(NSError *)arg1;
@end

