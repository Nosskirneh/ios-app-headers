//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class CoreDataAtomicOperation, NSString, TrackAdapter;

@interface UpdateMissingTracksCommand : NSObject <ApiCommand>
{
    CoreDataAtomicOperation *_coreDataOperation;
    TrackAdapter *_trackAdapter;
}

@property(readonly, nonatomic) TrackAdapter *trackAdapter; // @synthesize trackAdapter=_trackAdapter;
@property(readonly, nonatomic) CoreDataAtomicOperation *coreDataOperation; // @synthesize coreDataOperation=_coreDataOperation;
- (void).cxx_destruct;
- (id)executeWithObject:(id)arg1;
- (id)initWithCoreDataOperation:(id)arg1 trackAdapter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

