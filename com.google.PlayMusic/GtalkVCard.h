//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkPhoto, NSString;

@interface GtalkVCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *avatarHash; // @dynamic avatarHash;
@property(copy, nonatomic) NSString *fullName; // @dynamic fullName;
@property(nonatomic) _Bool hasAvatarHash; // @dynamic hasAvatarHash;
@property(nonatomic) _Bool hasFullName; // @dynamic hasFullName;
@property(nonatomic) _Bool hasModified; // @dynamic hasModified;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) _Bool modified; // @dynamic modified;
@property(retain, nonatomic) GtalkPhoto *photo; // @dynamic photo;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

