//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAdsSettingsBaseViewController.h"

@class NSString, UIButton, YTAdsSettingsTextView;

@interface YTAdsSettingsTextViewController : YTAdsSettingsBaseViewController
{
    NSString *_navTitle;
    NSString *_textTitle;
    NSString *_text;
    CDUnknownBlockType _textChangeBlock;
    YTAdsSettingsTextView *_settingsTextView;
    UIButton *_addButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
- (void)didPressCancelButton:(id)arg1;
- (void)didPressSaveButton:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(CDUnknownBlockType)arg4 parentResponder:(id)arg5;

@end
