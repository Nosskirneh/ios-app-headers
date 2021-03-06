//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RequestCreatorFactory;

@interface StationCallFactory : NSObject
{
    RequestCreatorFactory *_requestCreatorFactory;
}

@property(readonly, nonatomic) RequestCreatorFactory *requestCreatorFactory; // @synthesize requestCreatorFactory=_requestCreatorFactory;
- (void).cxx_destruct;
- (id)requestObjectForLikedStations;
- (id)requestObjectForCreateRecentStation:(id)arg1;
- (id)requestObjectForStationTracksWithUrn:(id)arg1;
- (id)requestObjectForStationWithUrn:(id)arg1;
- (id)requestObjectForStationAndTracksWithUrn:(id)arg1;
- (id)apiCallForLikedStations;
- (id)apiCallForCreateRecentStationWithUrn:(id)arg1;
- (id)apiCallForStationTracksWithUrn:(id)arg1;
- (id)apiCallForStationWithUrn:(id)arg1;
- (id)apiCallForStationAndTracksWithUrn:(id)arg1;
- (id)init;

@end

