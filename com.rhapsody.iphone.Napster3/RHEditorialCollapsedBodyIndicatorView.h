//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RHTargetAction, UILabel;

@interface RHEditorialCollapsedBodyIndicatorView : UIView
{
    UILabel *_label;
    RHTargetAction *_targetAction;
}

@property(retain, nonatomic) RHTargetAction *targetAction; // @synthesize targetAction=_targetAction;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)configureHighlighted:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;

@end
