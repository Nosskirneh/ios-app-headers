//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_VenueResource, NSString;

@interface GTLRSJ_ConcertResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *date; // @dynamic date;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *localizedDateString; // @dynamic localizedDateString;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) GTLRSJ_VenueResource *venue; // @dynamic venue;

@end

