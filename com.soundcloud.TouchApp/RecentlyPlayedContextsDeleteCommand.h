//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class CoreDataAtomicOperation, NSString;

@interface RecentlyPlayedContextsDeleteCommand : NSObject <ApiCommand>
{
    CoreDataAtomicOperation *_saveOperation;
}

@property(readonly, nonatomic) CoreDataAtomicOperation *saveOperation; // @synthesize saveOperation=_saveOperation;
- (void).cxx_destruct;
- (void)deleteRecentlyPlayedContextsInContext:(id)arg1;
- (id)executeWithObject:(id)arg1;
- (id)initWithSaveOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

