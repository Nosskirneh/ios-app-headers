//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIAccessibilityId;

@interface YTIAccessibilityData : GPBMessage
{
}

+ (id)descriptor;
+ (id)stringWithID:(int)arg1;
- (id)clientIdentifier;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityIdentifier_p; // @dynamic accessibilityIdentifier_p;
@property(nonatomic) _Bool hasAccessibilityIdentifier_p; // @dynamic hasAccessibilityIdentifier_p;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) YTIAccessibilityId *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

