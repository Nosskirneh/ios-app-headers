//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GCKUICastButton, GCKUIStyleAttributes, UIButton, UILabel, UIView;

@interface GCKUICastInstructionsViewController : UIViewController
{
    UILabel *_label;
    UIButton *_okButton;
    UIView *_overlayView;
    UIView *_topThird;
    UIView *_middleThird;
    UIView *_bottomThird;
    GCKUIStyleAttributes *_styleAttributes;
    GCKUICastButton *_castButton;
}

@property(nonatomic) __weak GCKUICastButton *castButton; // @synthesize castButton=_castButton;
- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (void)didTapOK:(id)arg1;
- (void)addButtonToView:(id)arg1;
- (void)addLabelToView:(id)arg1;
- (void)layoutInstructions:(struct CGPoint)arg1;
- (void)drawOverlayView;
- (void)drawClingCircle:(struct CGRect)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

