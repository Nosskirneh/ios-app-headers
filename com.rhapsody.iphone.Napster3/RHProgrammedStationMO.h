//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHProgrammedStationMO.h"

#import "RHEditorialContent-Protocol.h"

@class NSString;

@interface RHProgrammedStationMO : _RHProgrammedStationMO <RHEditorialContent>
{
}

+ (_Bool)isProgrammedStationGuid:(id)arg1;
+ (id)fetchRequestForAllSortedByNameInContext:(id)arg1;
+ (id)fetchedRandomStationsWithLimit:(unsigned long long)arg1 dataController:(id)arg2;
+ (id)processProgrammedStationsPayload:(id)arg1 forGenre:(id)arg2 range:(id)arg3 memo:(id)arg4 context:(id)arg5;
+ (id)processAllProgrammedStationsPayload:(id)arg1 context:(id)arg2;
+ (id)processHeavyProgrammedStationsPayload:(id)arg1 context:(id)arg2;
+ (id)processLiteProgrammedStationsPayload:(id)arg1 context:(id)arg2;
+ (id)existingObjectOrStubForEditorialWithContentID:(id)arg1 context:(id)arg2;
- (id)reportingType;
- (id)stationArtworkEntity;
- (id)asDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
