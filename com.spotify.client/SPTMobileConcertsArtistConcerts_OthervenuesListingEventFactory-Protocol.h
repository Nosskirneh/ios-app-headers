//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTEventFactoryModelMapping, SPTImpressionEvent, SPTMobileConcertsArtistConcerts_OthervenuesListing_ConcertInOtherVenuesEventFactory;

@protocol SPTMobileConcertsArtistConcerts_OthervenuesListingEventFactory <NSObject>
- (id <SPTImpressionEvent>)impression;
- (id <SPTMobileConcertsArtistConcerts_OthervenuesListing_ConcertInOtherVenuesEventFactory>)concertInOtherVenuesFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTEventFactoryModelMapping>)_location;
@end
