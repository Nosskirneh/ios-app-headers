//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataContextSaver, NSManagedObjectContext, NSString, Urn;

@interface EnqueueExistingStationTracksCommand : NSObject <BasicCommand>
{
    Urn *_initialTrackUrn;
    Urn *_stationUrn;
    long long _analyticsContext;
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_contextSaver;
}

@property(readonly, nonatomic) CoreDataContextSaver *contextSaver; // @synthesize contextSaver=_contextSaver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(readonly, nonatomic) Urn *stationUrn; // @synthesize stationUrn=_stationUrn;
@property(readonly, nonatomic) Urn *initialTrackUrn; // @synthesize initialTrackUrn=_initialTrackUrn;
- (void).cxx_destruct;
- (id)fetchQueue;
- (id)fetchStation;
- (void)copyStationTracks:(id)arg1 toQueue:(id)arg2;
- (void)performCommandWithSubscriber:(id)arg1;
- (id)execute;
- (id)initWithInitialTrackUrn:(id)arg1 stationUrn:(id)arg2 analyticsContext:(long long)arg3 context:(id)arg4 contextSaver:(id)arg5;
- (id)initWithInitialTrackUrn:(id)arg1 stationUrn:(id)arg2 analyticsContext:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
