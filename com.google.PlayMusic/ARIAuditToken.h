//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARISessionId;

@interface ARIAuditToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(retain, nonatomic) ARISessionId *sessionId; // @dynamic sessionId;

@end
