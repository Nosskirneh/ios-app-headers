//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncCreator-Protocol.h"

@class CoreDataController, NSString;

@interface RemovePlaylistSyncCreator : NSObject <SyncCreator>
{
    CoreDataController *_controller;
}

@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)syncerForLoadData:(id)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

