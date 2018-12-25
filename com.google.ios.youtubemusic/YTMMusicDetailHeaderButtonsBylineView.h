//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCInkTouchController, NSArray, NSMutableArray, QTMButton, UITapGestureRecognizer, YTFormattedStringLabel, YTIToggleButtonRenderer;
@protocol YTMMusicDetailHeaderButtonsBylineViewDelegate;

@interface YTMMusicDetailHeaderButtonsBylineView : UIView
{
    NSMutableArray *_specialtyButtons;
    NSArray *_specialtyButtonRenderers;
    QTMButton *_lessButton;
    YTIToggleButtonRenderer *_toggleButtonRenderer;
    YTFormattedStringLabel *_descriptionLabel;
    MDCInkTouchController *_inkTouchController;
    UITapGestureRecognizer *_descriptionTapRecognizer;
    id <YTMMusicDetailHeaderButtonsBylineViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMMusicDetailHeaderButtonsBylineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapToggleButton;
- (void)adjustDescriptionLabelLines;
- (double)descriptionLabelHeight;
- (void)didTapSpecialtyButton:(id)arg1;
- (_Bool)shouldDisableDescriptionLabel;
- (double)currentHeight;
- (void)setToggleButtonRenderer:(id)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setButtonRenderers:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
