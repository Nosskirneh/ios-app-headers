//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMButton, UIImageView, UILabel;

@interface YTMNoVideoModeActionSheetView : UIView
{
    UILabel *_messageLabel;
    UIImageView *_messageIcon;
    QTMButton *_settingsButton;
    QTMButton *_gotItButton;
}

@property(readonly, nonatomic) QTMButton *gotItButton; // @synthesize gotItButton=_gotItButton;
@property(readonly, nonatomic) QTMButton *settingsButton; // @synthesize settingsButton=_settingsButton;
- (void).cxx_destruct;
- (void)layoutSubviewsInFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

