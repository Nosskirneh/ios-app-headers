//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RHStackView, UIButton, UILabel;

@interface RHSearchAllOfflineView : UIView
{
    _Bool _tipLabelHidden;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_settingsButton;
    UILabel *_tipLabel;
    RHStackView *_stackView;
}

@property(nonatomic) __weak RHStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool tipLabelHidden; // @synthesize tipLabelHidden=_tipLabelHidden;
- (void).cxx_destruct;
- (void)settingsButtonAction:(id)arg1;
- (void)awakeFromNib;

@end
