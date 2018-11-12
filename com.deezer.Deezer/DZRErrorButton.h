//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DZRPopupView, NSLayoutConstraint;

@interface DZRErrorButton : UIButton
{
    DZRPopupView *_popupView;
    NSLayoutConstraint *_popupConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *popupConstraint; // @synthesize popupConstraint=_popupConstraint;
@property(retain, nonatomic) DZRPopupView *popupView; // @synthesize popupView=_popupView;
- (void).cxx_destruct;
- (void)presentError:(id)arg1;
- (void)hidePopup;
- (void)switchPopup;

@end
