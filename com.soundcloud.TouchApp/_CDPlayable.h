//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDUser, CDUserSpotlightItem, CDYou, NSDate, NSNumber, NSSet, NSString;

@interface _CDPlayable : NSManagedObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *artworkUrlTemplate; // @dynamic artworkUrlTemplate;
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSSet *feedPlayables; // @dynamic feedPlayables;
@property(copy, nonatomic) NSString *genre; // @dynamic genre;
@property(retain, nonatomic) NSNumber *likeCount; // @dynamic likeCount;
@property(copy, nonatomic) NSString *machineTagList; // @dynamic machineTagList;
@property(copy, nonatomic) NSString *permalink; // @dynamic permalink;
@property(retain, nonatomic) NSNumber *repostCount; // @dynamic repostCount;
@property(retain, nonatomic) CDYou *repostedByYou; // @dynamic repostedByYou;
@property(retain, nonatomic) NSSet *searchItem; // @dynamic searchItem;
@property(retain, nonatomic) NSSet *searchSuggestItem; // @dynamic searchSuggestItem;
@property(copy, nonatomic) NSString *secretToken; // @dynamic secretToken;
@property(copy, nonatomic) NSString *sharing; // @dynamic sharing;
@property(retain, nonatomic) CDUserSpotlightItem *spotlightItem; // @dynamic spotlightItem;
@property(retain, nonatomic) id tagList; // @dynamic tagList;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *urnString; // @dynamic urnString;
@property(retain, nonatomic) CDUser *user; // @dynamic user;
@end

