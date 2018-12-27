//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDFeed, CDPlayable, CDUser, NSDate, NSNumber, NSString;

@interface _CDFeedPlayable : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) CDFeed *feed; // @dynamic feed;
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) CDPlayable *playable; // @dynamic playable;
@property(copy, nonatomic) NSString *playableType; // @dynamic playableType;
@property(retain, nonatomic) NSNumber *promoted; // @dynamic promoted;
@property(copy, nonatomic) NSString *promotedUrnString; // @dynamic promotedUrnString;
@property(retain, nonatomic) CDUser *promoter; // @dynamic promoter;
@property(retain, nonatomic) CDUser *reposter; // @dynamic reposter;
@property(retain, nonatomic) id trackingImpressionUrls; // @dynamic trackingImpressionUrls;
@property(retain, nonatomic) id trackingProfileClickedUrls; // @dynamic trackingProfileClickedUrls;
@property(retain, nonatomic) id trackingPromoterClickedUrls; // @dynamic trackingPromoterClickedUrls;
@property(retain, nonatomic) id trackingTrackClickedUrls; // @dynamic trackingTrackClickedUrls;
@property(retain, nonatomic) id trackingTrackPlayedUrls; // @dynamic trackingTrackPlayedUrls;
@end

