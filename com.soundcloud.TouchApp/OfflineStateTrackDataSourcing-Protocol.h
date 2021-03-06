//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSDictionary, NSSet, OfflineStateMap, Urn;

@protocol OfflineStateTrackDataSourcing
- (void)updateStatesWithTracksThatShouldBeOffline:(NSSet *)arg1 completion:(void (^)(NSSet *))arg2;
- (NSSet *)findTracksForState:(unsigned long long)arg1 updatedBefore:(NSDate *)arg2;
- (void)updateOfflineStateForTracks:(NSSet *)arg1 usingMapper:(OfflineStateMap *)arg2 completion:(void (^)(void))arg3;
- (void)deleteAllOfflineStatesWithCompletion:(void (^)(void))arg1;
- (void)deleteOfflineStateForTracks:(NSSet *)arg1 completion:(void (^)(void))arg2;
- (id)observeTrackStatesWithObserver:(void (^)(NSDictionary *))arg1;
- (id)observeStateForTrackUrn:(Urn *)arg1 withObserver:(void (^)(unsigned long long))arg2;
- (NSDictionary *)trackStatesByUrn;
- (NSSet *)trackUrnsForOfflineTrackStates:(NSSet *)arg1;
- (unsigned long long)stateForTrackUrn:(Urn *)arg1;
@end

