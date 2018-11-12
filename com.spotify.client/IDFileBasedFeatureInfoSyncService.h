//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDFeatureInfoSyncService-Protocol.h"

@class IDRhmiFeatureSwitcherDataAccess, NSString, NSURL;

@interface IDFileBasedFeatureInfoSyncService : NSObject <IDFeatureInfoSyncService>
{
    NSURL *_directoryURL;
    IDRhmiFeatureSwitcherDataAccess *_dataAccess;
}

@property(retain) IDRhmiFeatureSwitcherDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(retain) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (id)deriveIconFileURLFromJSON:(id)arg1 JSONFileURL:(id)arg2;
- (id)loadFeatureInfoIconFromFileURL:(id)arg1;
- (id)loadFeatureInfoJSONDictFromFileURL:(id)arg1;
- (id)JSONFileULRsInDirectory:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDirectoryURL:(id)arg1 dataAccess:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

