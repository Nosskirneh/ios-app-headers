//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "MDCCollectionViewEditing-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSIndexPath, NSString, ShadowedSnapshotView, UICollectionView, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol MDCCollectionViewEditingDelegate;

@interface MDCCollectionViewEditor : NSObject <CAAnimationDelegate, UIGestureRecognizerDelegate, MDCCollectionViewEditing>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _selectedCellLocation;
    struct CGPoint _initialCellLocation;
    ShadowedSnapshotView *_cellSnapshot;
    CADisplayLink *_autoscrollTimer;
    long long _autoscrollPanningDirection;
    _Bool _editing;
    UICollectionView *_collectionView;
    id <MDCCollectionViewEditingDelegate> _delegate;
    NSIndexPath *_reorderingCellIndexPath;
    NSIndexPath *_dismissingCellIndexPath;
    long long _dismissingSection;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) long long dismissingSection; // @synthesize dismissingSection=_dismissingSection;
@property(readonly, nonatomic) NSIndexPath *dismissingCellIndexPath; // @synthesize dismissingCellIndexPath=_dismissingCellIndexPath;
@property(readonly, nonatomic) NSIndexPath *reorderingCellIndexPath; // @synthesize reorderingCellIndexPath=_reorderingCellIndexPath;
@property(nonatomic) __weak id <MDCCollectionViewEditingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)autoscroll:(id)arg1;
- (void)stopAutoscroll;
- (void)startAutoscroll;
- (double)dismissalAlphaForTranslationX:(double)arg1;
- (double)distanceThresholdForDismissal;
- (void)cleanupDismissingInformation;
- (void)restoreEditingItem;
- (void)cancelPanningItem;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)restorePanningItemIfNecessaryWithMomentumX:(double)arg1;
- (void)animateFinalItemDismissalToTranslationX:(double)arg1;
- (struct CGAffineTransform)transformItemDismissalToTranslationX:(double)arg1;
- (void)exitPanToDismissWithRecognizer:(id)arg1;
- (void)panToDismissWithRecognizer:(id)arg1;
- (void)panToReorderWithRecognizer:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)applyLayerShadowing:(id)arg1;
- (id)snapshotWithRect:(struct CGRect)arg1;
- (id)snapshotWithSection:(long long)arg1;
- (id)snapshotWithIndexPath:(id)arg1;
- (long long)swipedSectionAtLocation:(struct CGPoint)arg1;
- (id)attributesAtSection:(long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

