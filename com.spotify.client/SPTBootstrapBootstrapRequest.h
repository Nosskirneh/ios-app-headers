//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SPTBootstrapRemoteConfigRequestV1;

@interface SPTBootstrapBootstrapRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int remoteConfigRequestOneOfCase; // @dynamic remoteConfigRequestOneOfCase;
@property(retain, nonatomic) SPTBootstrapRemoteConfigRequestV1 *remoteConfigRequestV1; // @dynamic remoteConfigRequestV1;

@end

