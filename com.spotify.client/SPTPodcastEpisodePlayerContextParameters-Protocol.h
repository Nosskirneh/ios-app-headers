//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL, SPTPlayerContext;

@protocol SPTPodcastEpisodePlayerContextParameters <NSObject>
@property(readonly, nonatomic) NSNumber *timestamp;
@property(readonly, nonatomic) SPTPlayerContext *playerContext;
@property(readonly, nonatomic) NSString *episodeItemID;
@property(readonly, nonatomic) NSURL *playerContextURI;
- (long long)getEpisodeContextType;
- (id)initWithQueryPrameters:(NSDictionary *)arg1;
@end

