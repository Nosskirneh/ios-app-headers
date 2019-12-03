//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHContentManagedObject.h"

#import "RHPersonalizedReasonMOProtocol-Protocol.h"

@class NSNumber, NSSet, NSString;

@interface _RHPersonalizedReasonMO : RHContentManagedObject <RHPersonalizedReasonMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)trackSet;
- (id)albumSet;
- (void)setPrimitiveWeightValue:(long long)arg1;
- (long long)primitiveWeightValue;
@property long long weightValue;
- (void)setPrimitiveSourceValue:(long long)arg1;
- (long long)primitiveSourceValue;
@property long long sourceValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *album; // @dynamic album;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *guid; // @dynamic guid;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *track; // @dynamic track;
@property(retain, nonatomic) NSNumber *weight; // @dynamic weight;

@end
