//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, YTFormattedStringLabel, YTQTMButton;
@protocol YTMMessageViewDelegate;

@interface YTMMessageView : UIView
{
    YTQTMButton *_button;
    UIImageView *_iconImageView;
    YTFormattedStringLabel *_messageLabel;
    YTFormattedStringLabel *_messageSubtextLabel;
    id <YTMMessageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 performLayout:(_Bool)arg2;
- (void)applyStyle:(int)arg1;
- (void)setButtonStyle:(int)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setMessageSubtext:(id)arg1;
- (void)setMessageFormattedText:(id)arg1;
- (void)setMessageText:(id)arg1;
@property(readonly, nonatomic) YTFormattedStringLabel *messageSubtextLabel;
@property(readonly, nonatomic) YTFormattedStringLabel *messageLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

