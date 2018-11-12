//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTShow-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTPodcast : NSObject <SPTShow>
{
    _Bool _following;
    long long _numberOfFollowers;
    long long _consumptionOrder;
    unsigned long long _unrangedLength;
    NSArray *_episodes;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_publisher;
    NSURL *_URL;
    NSURL *_latestPlayedEpisodeURL;
    NSURL *_imageURL;
    unsigned long long _mediaType;
}

+ (id)podcastWithDictionary:(id)arg1 featureFlags:(id)arg2;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following=_following;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *latestPlayedEpisodeURL; // @synthesize latestPlayedEpisodeURL=_latestPlayedEpisodeURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic) unsigned long long unrangedLength; // @synthesize unrangedLength=_unrangedLength;
@property(nonatomic) long long consumptionOrder; // @synthesize consumptionOrder=_consumptionOrder;
@property(nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPodcast:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

