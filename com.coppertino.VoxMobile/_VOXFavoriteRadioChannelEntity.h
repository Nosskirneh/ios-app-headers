//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXMediaItem.h"

@class NSString, VOXFavoriteRadioChannelEntityID;

@interface _VOXFavoriteRadioChannelEntity : VOXMediaItem
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) VOXFavoriteRadioChannelEntityID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *countryName; // @dynamic countryName;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *externalInfoURL; // @dynamic externalInfoURL;
@property(retain, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;

@end

