//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTRadioStation, SPTRadioStationsService;

@protocol SPTRadioStationsObserver <NSObject>

@optional
- (void)radioStationService:(SPTRadioStationsService *)arg1 didUpdateStation:(SPTRadioStation *)arg2 withSavedState:(_Bool)arg3;
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadingTracksError:(NSError *)arg2 forStation:(SPTRadioStation *)arg3;
- (void)radioStationService:(SPTRadioStationsService *)arg1 loadedTracksForStation:(SPTRadioStation *)arg2;
@end

