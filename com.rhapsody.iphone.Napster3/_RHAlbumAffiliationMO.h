//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDSManagedObject.h"

#import "RHAlbumAffiliationMOProtocol-Protocol.h"

@class NSNumber, NSString, RHAlbumMO;

@interface _RHAlbumAffiliationMO : ZDSManagedObject <RHAlbumAffiliationMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveOrdinalValue:(long long)arg1;
- (long long)primitiveOrdinalValue;
@property long long ordinalValue;
- (void)setPrimitiveKindValue:(long long)arg1;
- (long long)primitiveKindValue;
@property long long kindValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) RHAlbumMO *affiliated; // @dynamic affiliated;
@property(retain, nonatomic) RHAlbumMO *album; // @dynamic album;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(retain, nonatomic) NSNumber *ordinal; // @dynamic ordinal;
@property(readonly) Class superclass;

@end

