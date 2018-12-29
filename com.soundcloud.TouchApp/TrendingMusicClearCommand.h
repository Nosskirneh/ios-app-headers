//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BasicCommand-Protocol.h"

@class CoreDataAtomicOperation, CoreDataContextSaver, NSManagedObjectContext, NSString;

@interface TrendingMusicClearCommand : NSObject <BasicCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_contextSaver;
    CoreDataAtomicOperation *_operation;
}

@property(readonly, nonatomic) CoreDataAtomicOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) CoreDataContextSaver *contextSaver; // @synthesize contextSaver=_contextSaver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)feed;
- (void)clearTrendingMusicPlayables;
- (id)execute;
- (id)initWithContext:(id)arg1 contextSaver:(id)arg2 operation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
