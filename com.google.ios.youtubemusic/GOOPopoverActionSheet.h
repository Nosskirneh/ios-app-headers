//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOActionSheet.h"

#import "GOOPopoverViewDelegate-Protocol.h"

@class GOOPopoverMenuView, NSString, UIColor, UIView;

@interface GOOPopoverActionSheet : GOOActionSheet <GOOPopoverViewDelegate>
{
    GOOPopoverMenuView *_popoverView;
    UIView *_pointingAtView;
    struct CGRect _viewInnerRect;
    unsigned long long _allowedDirections;
    struct CGSize _offset;
    _Bool _shouldDismissOnRotate;
}

@property(nonatomic) _Bool shouldDismissOnRotate; // @synthesize shouldDismissOnRotate=_shouldDismissOnRotate;
- (void).cxx_destruct;
- (void)showWithCancelButton:(_Bool)arg1 cancelAction:(CDUnknownBlockType)arg2;
- (void)openViewBasedPopover:(id)arg1 arrowDirections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)popoverViewDidDisappear:(id)arg1;
- (void)popoverViewDidAppear:(id)arg1;
- (void)configureView;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
- (_Bool)shouldDimBackground;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)showPointingAtView:(id)arg1 withOffset:(struct CGSize)arg2 anchorCorner:(unsigned long long)arg3;
- (void)showPointingAtView:(id)arg1 withRect:(struct CGRect)arg2 arrowDirections:(unsigned long long)arg3;
- (void)showPointingAtView:(id)arg1 withOffset:(struct CGSize)arg2 arrowDirections:(unsigned long long)arg3;
- (void)reposition;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)initWithTarget:(id)arg1;
- (struct CGSize)flippedOffset:(struct CGSize)arg1;
- (unsigned long long)flippedAnchorCorner:(unsigned long long)arg1;
- (void)gks_showPointingAtView:(id)arg1 withOffset:(struct CGSize)arg2 anchorCorner:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

