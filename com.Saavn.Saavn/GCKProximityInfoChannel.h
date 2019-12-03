//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

@class NSString;
@protocol GCKProximityInfoChannelDelegate;

@interface GCKProximityInfoChannel : GCKCastChannel
{
    NSString *_receiverDestinationID;
    id <GCKProximityInfoChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKProximityInfoChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveTextMessage:(id)arg1;
- (void)initiateGetProximityInfo;
- (void)didDisconnect;
- (id)initWithReceiverDestinationID:(id)arg1;
- (id)initWithNamespace:(id)arg1;

@end
