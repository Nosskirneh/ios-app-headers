//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataAtomicOperation, NSString;

@interface FeedsDeleteCommand : NSObject <BasicCommand>
{
    CoreDataAtomicOperation *_coreDataAtomicOperation;
}

@property(readonly, nonatomic) CoreDataAtomicOperation *coreDataAtomicOperation; // @synthesize coreDataAtomicOperation=_coreDataAtomicOperation;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)deleteFeedsInContext:(id)arg1;
- (id)execute;
- (id)initWithCoreDataAtomicOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
