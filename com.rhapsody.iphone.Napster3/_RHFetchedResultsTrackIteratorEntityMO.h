//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHRandomAccessTrackIteratorEntityMO.h"

#import "RHFetchedResultsTrackIteratorEntityMOProtocol-Protocol.h"

@class NSData, NSString;

@interface _RHFetchedResultsTrackIteratorEntityMO : RHRandomAccessTrackIteratorEntityMO <RHFetchedResultsTrackIteratorEntityMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *fetchRequestData; // @dynamic fetchRequestData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

