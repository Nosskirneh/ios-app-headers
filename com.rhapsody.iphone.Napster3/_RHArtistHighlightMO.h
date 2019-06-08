//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDSManagedObject.h"

#import "RHArtistHighlightMOProtocol-Protocol.h"

@class NSNumber, NSString, RHArtistMO, RHGenreMO;

@interface _RHArtistHighlightMO : ZDSManagedObject <RHArtistHighlightMOProtocol>
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
@property(retain, nonatomic) RHArtistMO *artist; // @dynamic artist;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RHGenreMO *genre; // @dynamic genre;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(retain, nonatomic) NSNumber *ordinal; // @dynamic ordinal;
@property(readonly) Class superclass;

@end

