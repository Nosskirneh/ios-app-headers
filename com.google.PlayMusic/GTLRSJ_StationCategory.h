//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class NSArray, NSString;

@interface GTLRSJ_StationCategory : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) NSArray *subcategories; // @dynamic subcategories;

@end
