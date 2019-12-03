//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDSManagedObject.h"

#import "RHTagDateMOProtocol-Protocol.h"

@class NSDate, NSNumber, NSString, RHTagMO;

@interface _RHTagDateMO : ZDSManagedObject <RHTagDateMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveTagItemDownloadedValue:(long long)arg1;
- (long long)primitiveTagItemDownloadedValue;
@property long long tagItemDownloadedValue;
- (void)setPrimitiveOrdinalByTenValue:(long long)arg1;
- (long long)primitiveOrdinalByTenValue;
@property long long ordinalByTenValue;
- (void)setPrimitiveOrdinalValue:(long long)arg1;
- (long long)primitiveOrdinalValue;
@property long long ordinalValue;
- (void)setPrimitiveDlOrdinalByTenValue:(long long)arg1;
- (long long)primitiveDlOrdinalByTenValue;
@property long long dlOrdinalByTenValue;
- (void)setPrimitiveDlOrdinalValue:(long long)arg1;
- (long long)primitiveDlOrdinalValue;
@property long long dlOrdinalValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *dlOrdinal; // @dynamic dlOrdinal;
@property(retain, nonatomic) NSNumber *dlOrdinalByTen; // @dynamic dlOrdinalByTen;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *lastChange; // @dynamic lastChange;
@property(retain, nonatomic) NSNumber *ordinal; // @dynamic ordinal;
@property(retain, nonatomic) NSNumber *ordinalByTen; // @dynamic ordinalByTen;
@property(readonly) Class superclass;
@property(retain, nonatomic) RHTagMO *tag; // @dynamic tag;
@property(retain, nonatomic) NSNumber *tagItemDownloaded; // @dynamic tagItemDownloaded;

@end
