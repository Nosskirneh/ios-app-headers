//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class CoreDataContextSaver, NSManagedObjectContext, NSString, StationCleaner, StationsAdapterFactory;

@interface RecentStationsUpdateCommand : NSObject <ApiCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_contextSaver;
    StationsAdapterFactory *_adapterFactory;
    StationCleaner *_stationCleaner;
}

@property(readonly, nonatomic) StationCleaner *stationCleaner; // @synthesize stationCleaner=_stationCleaner;
@property(readonly, nonatomic) StationsAdapterFactory *adapterFactory; // @synthesize adapterFactory=_adapterFactory;
@property(readonly, nonatomic) CoreDataContextSaver *contextSaver; // @synthesize contextSaver=_contextSaver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)userIsLoggedIn;
- (void)adaptCollection:(id)arg1;
- (void)adaptStations:(id)arg1;
- (id)executeWithObject:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 coreDataContextSaver:(id)arg2 adapterFactory:(id)arg3 stationCleaner:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

