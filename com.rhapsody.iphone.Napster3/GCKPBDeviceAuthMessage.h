//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCKPBAuthChallenge, GCKPBAuthError, GCKPBAuthResponse;

@interface GCKPBDeviceAuthMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPBAuthChallenge *challenge; // @dynamic challenge;
@property(retain, nonatomic) GCKPBAuthError *error; // @dynamic error;
@property(nonatomic) _Bool hasChallenge; // @dynamic hasChallenge;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) GCKPBAuthResponse *response; // @dynamic response;

@end

