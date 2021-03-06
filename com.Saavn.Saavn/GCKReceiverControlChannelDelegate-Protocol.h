//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKApplicationStatus, GCKReceiverControlChannel, GCKReceiverStatus, NSDictionary, NSError;

@protocol GCKReceiverControlChannelDelegate <NSObject>
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveAppAvailability:(NSDictionary *)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveReceiverStatus:(GCKReceiverStatus *)arg2 applicationStatus:(GCKApplicationStatus *)arg3 requestID:(long long)arg4;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 requestDidFailWithID:(long long)arg2 error:(NSError *)arg3;
- (void)receiverControlChannelDidStopCastApplication:(GCKReceiverControlChannel *)arg1;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didFailToLaunchCastApplicationWithError:(NSError *)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didLaunchCastApplication:(GCKApplicationStatus *)arg2;
@end

