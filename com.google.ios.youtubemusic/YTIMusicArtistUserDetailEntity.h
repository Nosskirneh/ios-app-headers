//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMusicArtistUserDetailEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasParentArtist; // @dynamic hasParentArtist;
@property(nonatomic) _Bool hasSubscribed; // @dynamic hasSubscribed;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *parentArtist; // @dynamic parentArtist;
@property(nonatomic) _Bool subscribed; // @dynamic subscribed;

@end

