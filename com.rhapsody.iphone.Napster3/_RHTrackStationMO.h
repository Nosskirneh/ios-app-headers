//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHStationMO.h"

#import "RHTrackStationMOProtocol-Protocol.h"

@class NSNumber, NSSet, NSString, RHTrackMO;

@interface _RHTrackStationMO : RHStationMO <RHTrackStationMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)tracksSet;
- (void)setPrimitiveSingleTrackStationValue:(_Bool)arg1;
- (_Bool)primitiveSingleTrackStationValue;
@property _Bool singleTrackStationValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *singleTrackStation; // @dynamic singleTrackStation;
@property(readonly) Class superclass;
@property(retain, nonatomic) RHTrackMO *track; // @dynamic track;
@property(retain, nonatomic) NSSet *tracks; // @dynamic tracks;

@end

