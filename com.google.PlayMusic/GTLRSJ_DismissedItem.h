//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_ListennowItemIdentifierResource, NSNumber, NSString;

@interface GTLRSJ_DismissedItem : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *dismissalTimestamp; // @dynamic dismissalTimestamp;
@property(retain, nonatomic) GTLRSJ_ListennowItemIdentifierResource *itemId; // @dynamic itemId;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *suggestionReason; // @dynamic suggestionReason;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end
