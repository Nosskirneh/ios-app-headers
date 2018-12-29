//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataAtomicOperation, NSString;

@interface LikedStationCleanUpCommand : NSObject <BasicCommand>
{
    CoreDataAtomicOperation *_coreDataOperation;
}

@property(readonly, nonatomic) CoreDataAtomicOperation *coreDataOperation; // @synthesize coreDataOperation=_coreDataOperation;
- (void).cxx_destruct;
- (id)execute;
- (id)initWithCoreDataOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
