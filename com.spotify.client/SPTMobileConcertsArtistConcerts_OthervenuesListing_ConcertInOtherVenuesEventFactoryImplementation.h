//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMobileConcertsArtistConcerts_OthervenuesListing_ConcertInOtherVenuesEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTMobileConcertsArtistConcerts_OthervenuesListing_ConcertInOtherVenuesEventFactoryImplementation : NSObject <SPTMobileConcertsArtistConcerts_OthervenuesListing_ConcertInOtherVenuesEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)impression;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

