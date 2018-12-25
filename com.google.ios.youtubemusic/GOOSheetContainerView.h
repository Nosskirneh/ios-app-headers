//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOODraggableViewDelegate-Protocol.h"

@class GOODraggableView, GOOSheetBehavior, UIDynamicAnimator;
@protocol GOOSheetContainerViewDelegate;

@interface GOOSheetContainerView : UIView <GOODraggableViewDelegate>
{
    _Bool _isDragging;
    _Bool _delegateRespondsToHeightChanges;
    id <GOOSheetContainerViewDelegate> _delegate;
    unsigned long long _sheetState;
    double _preferredSheetHeight;
    unsigned long long _cornerRoundingBehavior;
    GOODraggableView *_sheet;
    UIView *_contentView;
    UIDynamicAnimator *_animator;
    GOOSheetBehavior *_sheetBehavior;
    double _lastBoundsHeight;
}

+ (void)initialize;
@property(nonatomic) _Bool delegateRespondsToHeightChanges; // @synthesize delegateRespondsToHeightChanges=_delegateRespondsToHeightChanges;
@property(nonatomic) double lastBoundsHeight; // @synthesize lastBoundsHeight=_lastBoundsHeight;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) GOOSheetBehavior *sheetBehavior; // @synthesize sheetBehavior=_sheetBehavior;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GOODraggableView *sheet; // @synthesize sheet=_sheet;
@property(nonatomic) unsigned long long cornerRoundingBehavior; // @synthesize cornerRoundingBehavior=_cornerRoundingBehavior;
@property(nonatomic) double preferredSheetHeight; // @synthesize preferredSheetHeight=_preferredSheetHeight;
@property(nonatomic) unsigned long long sheetState; // @synthesize sheetState=_sheetState;
@property(nonatomic) __weak id <GOOSheetContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)sheetSafeAreaBottomInset;
- (void)draggableViewBeganDragging:(id)arg1;
- (void)draggableView:(id)arg1 draggingEndedWithVelocity:(struct CGPoint)arg2;
- (_Bool)draggableView:(id)arg1 shouldBeginDraggingWithVelocity:(struct CGPoint)arg2;
- (double)maximumHeightForDraggableView:(id)arg1;
- (void)keyboardStateChangedWithNotification:(id)arg1;
- (void)sheetBehaviorDidUpdate;
- (struct CGPoint)targetPoint;
- (void)animatePaneWithInitialVelocity:(struct CGPoint)arg1;
- (double)maximumSheetHeight;
- (double)truncatedPreferredSheetHeight;
- (void)updateCorners;
- (void)updateSheetState;
- (void)updateSheetFrame;
- (void)safeAreaInsetsDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)voiceOverStatusDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2 scrollView:(id)arg3;

@end

