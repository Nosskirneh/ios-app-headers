//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDSManagedObject.h"

#import "RHEditorialAssociatedPlaylistMOProtocol-Protocol.h"

@class NSNumber, NSString, RHEditorialMO, RHPlaylistMO;

@interface _RHEditorialAssociatedPlaylistMO : ZDSManagedObject <RHEditorialAssociatedPlaylistMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveOrdinalValue:(int)arg1;
- (int)primitiveOrdinalValue;
@property int ordinalValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) RHPlaylistMO *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RHEditorialMO *editorial; // @dynamic editorial;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *ordinal; // @dynamic ordinal;
@property(readonly) Class superclass;

@end

