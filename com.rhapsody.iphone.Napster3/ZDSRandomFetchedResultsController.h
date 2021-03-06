//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSFetchedResultsController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString, ZDSRandomFetchedResultsSample;

@interface ZDSRandomFetchedResultsController : NSFetchedResultsController <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_internalController;
    id _internalDelegate;
    unsigned long long _sampleLimit;
    ZDSRandomFetchedResultsSample *_sample;
}

@property(retain, nonatomic) ZDSRandomFetchedResultsSample *sample; // @synthesize sample=_sample;
@property(readonly, nonatomic) unsigned long long sampleLimit; // @synthesize sampleLimit=_sampleLimit;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (id)sectionIndexTitles;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)cacheName;
- (id)sectionNameKeyPath;
- (id)managedObjectContext;
- (id)fetchRequest;
- (id)sections;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)fetchedObjects;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)resampleFetchedObjectsWithLimit:(unsigned long long)arg1;
- (void)resampleFetchedObjects;
- (_Bool)performFetch:(id *)arg1;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sampleLimit:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

