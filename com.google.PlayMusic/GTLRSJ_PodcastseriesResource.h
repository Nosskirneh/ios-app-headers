//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_PodcastseriesuserpreferencesResource, NSArray, NSNumber, NSString;

@interface GTLRSJ_PodcastseriesResource : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSArray *art; // @dynamic art;
@property(copy, nonatomic) NSString *author; // @dynamic author;
@property(copy, nonatomic) NSString *continuationToken; // @dynamic continuationToken;
@property(copy, nonatomic) NSString *copyright; // @dynamic copyright;
@property(retain, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) NSArray *episodes; // @dynamic episodes;
@property(copy, nonatomic) NSString *explicitType; // @dynamic explicitType;
@property(copy, nonatomic) NSString *link; // @dynamic link;
@property(copy, nonatomic) NSString *seriesId; // @dynamic seriesId;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSNumber *totalNumEpisodes; // @dynamic totalNumEpisodes;
@property(retain, nonatomic) GTLRSJ_PodcastseriesuserpreferencesResource *userPreferences; // @dynamic userPreferences;

@end

