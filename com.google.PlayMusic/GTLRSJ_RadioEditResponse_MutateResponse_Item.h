//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_RadioStation, NSString;

@interface GTLRSJ_RadioEditResponse_MutateResponse_Item : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *responseCode; // @dynamic responseCode;
@property(retain, nonatomic) GTLRSJ_RadioStation *station; // @dynamic station;

@end

