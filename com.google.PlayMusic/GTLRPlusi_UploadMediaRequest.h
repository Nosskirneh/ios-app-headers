//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRPlusi_ApiaryFields, GTLRPlusi_LocalData, GTLRPlusi_ScottyMedia, NSNumber, NSString;

@interface GTLRPlusi_UploadMediaRequest : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *albumId; // @dynamic albumId;
@property(copy, nonatomic) NSString *albumLabel; // @dynamic albumLabel;
@property(copy, nonatomic) NSString *albumTitle; // @dynamic albumTitle;
@property(retain, nonatomic) NSNumber *autoResize; // @dynamic autoResize;
@property(copy, nonatomic) NSString *clientAssignedId; // @dynamic clientAssignedId;
@property(retain, nonatomic) GTLRPlusi_ApiaryFields *commonFields; // @dynamic commonFields;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) NSNumber *enableTracing; // @dynamic enableTracing;
@property(copy, nonatomic) NSString *eventId; // @dynamic eventId;
@property(retain, nonatomic) GTLRPlusi_LocalData *localData; // @dynamic localData;
@property(copy, nonatomic) NSString *ownerId; // @dynamic ownerId;
@property(retain, nonatomic) GTLRPlusi_ScottyMedia *scottyMedia; // @dynamic scottyMedia;
@property(retain, nonatomic) NSNumber *setProfilePhoto; // @dynamic setProfilePhoto;

@end

