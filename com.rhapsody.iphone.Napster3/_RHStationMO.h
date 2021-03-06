//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHContentManagedObject.h"

#import "RHStationMOProtocol-Protocol.h"

@class NSNumber, NSSet, NSString;

@interface _RHStationMO : RHContentManagedObject <RHStationMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)tagsSet;
- (id)stationTracksSet;
- (id)recentContainersSet;
- (id)associatedEditorialsSet;
- (void)setPrimitiveWeightValue:(long long)arg1;
- (long long)primitiveWeightValue;
@property long long weightValue;
- (void)setPrimitiveVarietyTuningValue:(float)arg1;
- (float)primitiveVarietyTuningValue;
@property float varietyTuningValue;
- (void)setPrimitiveSourceValue:(long long)arg1;
- (long long)primitiveSourceValue;
@property long long sourceValue;
- (void)setPrimitiveIsInLibraryValue:(_Bool)arg1;
- (_Bool)primitiveIsInLibraryValue;
@property _Bool isInLibraryValue;
- (void)setPrimitiveFreeValue:(_Bool)arg1;
- (_Bool)primitiveFreeValue;
@property _Bool freeValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *associatedEditorials; // @dynamic associatedEditorials;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *free; // @dynamic free;
@property(retain, nonatomic) NSString *guid; // @dynamic guid;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *isInLibrary; // @dynamic isInLibrary;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *nameInitial; // @dynamic nameInitial;
@property(retain, nonatomic) NSSet *recentContainers; // @dynamic recentContainers;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;
@property(retain, nonatomic) NSSet *stationTracks; // @dynamic stationTracks;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *tags; // @dynamic tags;
@property(retain, nonatomic) NSNumber *varietyTuning; // @dynamic varietyTuning;
@property(retain, nonatomic) NSNumber *weight; // @dynamic weight;

@end

