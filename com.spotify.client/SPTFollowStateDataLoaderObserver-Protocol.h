//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FollowData, NSDictionary, NSError, SPTFollowStateDataLoader;

@protocol SPTFollowStateDataLoaderObserver <NSObject>
- (void)followStateDataLoader:(SPTFollowStateDataLoader *)arg1 followFailedWithError:(NSError *)arg2 followData:(FollowData *)arg3 requestContext:(NSDictionary *)arg4;
- (void)followStateDataLoader:(SPTFollowStateDataLoader *)arg1 changedOptimistically:(FollowData *)arg2 requestContext:(NSDictionary *)arg3;
- (void)followStateDataLoader:(SPTFollowStateDataLoader *)arg1 changed:(FollowData *)arg2 requestContext:(NSDictionary *)arg3;
@end

