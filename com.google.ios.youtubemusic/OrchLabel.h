//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface OrchLabel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSData *token; // @dynamic token;

@end
