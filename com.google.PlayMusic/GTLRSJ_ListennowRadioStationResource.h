//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_ListennowRadioStationIdResource, GTLRSJ_ListennowRadioStationResource_ProfileImage, NSString;

@interface GTLRSJ_ListennowRadioStationResource : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *highlightColor; // @dynamic highlightColor;
@property(retain, nonatomic) GTLRSJ_ListennowRadioStationIdResource *identifier; // @dynamic identifier;
@property(retain, nonatomic) GTLRSJ_ListennowRadioStationResource_ProfileImage *profileImage; // @dynamic profileImage;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
