//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UILabel, UIView;

@interface TwoWaySwitch : UIButton
{
    NSString *leftLabelStr;
    NSString *rightLabelStr;
    double gutterPad;
    UIView *gutter;
    UIView *slider;
    UILabel *leftLabel;
    UILabel *rightLabel;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)updateUIMode;
- (void)initUI;
- (id)initWithLeftLabel:(id)arg1 andRightLabel:(id)arg2;

@end

