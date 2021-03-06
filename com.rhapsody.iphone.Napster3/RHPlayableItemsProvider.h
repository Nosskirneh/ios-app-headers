//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSNotificationCenter, NSString, RHDownloadsController;
@protocol RHPlayableEntity, RHPlayableItemsProviderDelegate;

@interface RHPlayableItemsProvider : NSObject <NSFetchedResultsControllerDelegate>
{
    id <RHPlayableItemsProviderDelegate> _delegate;
    NSFetchedResultsController *_fetchedResultsController;
    id <RHPlayableEntity> _currentItem;
    RHDownloadsController *_downloadsController;
    id <RHPlayableEntity> _oldCurrentItem;
    NSNotificationCenter *_notificationCenter;
    NSArray *_originalSections;
}

@property(retain, nonatomic) NSArray *originalSections; // @synthesize originalSections=_originalSections;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <RHPlayableEntity> oldCurrentItem; // @synthesize oldCurrentItem=_oldCurrentItem;
@property(nonatomic) __weak RHDownloadsController *downloadsController; // @synthesize downloadsController=_downloadsController;
@property(retain, nonatomic) id <RHPlayableEntity> currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) __weak id <RHPlayableItemsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCurrentItemIndexForFRCChange;
- (void)saveCurrentItemIndexForFRCChange;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)notifyDelegateOfTrackChangeFrom:(id)arg1 to:(id)arg2;
- (id)allPlayableItems;
- (id)currentItemIndex;
- (id)numberOfItems;
- (id)moveIndexToPlayable:(id)arg1;
- (id)initializeProvider;
- (void)resetHistory;
- (void)reset;
- (void)setCurrentStateFromInterrupt:(id)arg1;
- (void)getCurrentStateForInterrupt:(id)arg1;
- (void)changeFRC:(id)arg1;
- (void)clearFRC;
- (void)dealloc;
- (id)initWithFRC:(id)arg1 notificationCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

