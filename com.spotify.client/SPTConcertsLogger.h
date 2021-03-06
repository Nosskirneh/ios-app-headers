//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTConcertsLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_concertURIString;
}

@property(readonly, copy, nonatomic) NSString *concertURIString; // @synthesize concertURIString=_concertURIString;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)getTimestamp;
- (void)logRelatedRecommendedShowsInteractionWithConcertURI:(id)arg1;
- (void)logRelatedArtistShowsInteractionWithConcertURI:(id)arg1;
- (void)logGoToAlbumInteractionForAlbumURI:(id)arg1;
- (void)logGoToArtistInteractionForArtistURI:(id)arg1;
- (void)logShareButtonInteraction;
- (void)logFindTicketsInteractionForURI:(id)arg1;
- (void)logConcertEntityPageImpression;
- (id)initWithLogCenter:(id)arg1 concertURI:(id)arg2;

@end

