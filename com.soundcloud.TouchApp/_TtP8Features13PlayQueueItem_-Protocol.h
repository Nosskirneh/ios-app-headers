//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, Urn;

@protocol _TtP8Features13PlayQueueItem_ <NSObject>
@property(readonly, nonatomic) double fullDuration;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, copy, nonatomic) NSString *playQueueTitle;
@property(readonly, nonatomic) long long itemType;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
@property(readonly, copy, nonatomic) Urn *artworkUrn;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) Urn *urn;
@end

