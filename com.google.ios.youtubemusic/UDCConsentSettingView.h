//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UDCConsentItem-Protocol.h"

@class GTLRUserDataControls_SettingUiConfig, NIAttributedLabel, NSArray, NSString, UIControl, UIImageView, UILabel;
@protocol UDCConsentSettingViewDelegate;

@interface UDCConsentSettingView : UIView <UDCConsentItem>
{
    GTLRUserDataControls_SettingUiConfig *_setting;
    UIControl *_summary;
    UIImageView *_settingIcon;
    UILabel *_settingName;
    UIImageView *_chevron;
    NIAttributedLabel *_settingDescription;
    NSArray *_infoTexts;
    UIView *_separator;
    id <UDCConsentSettingViewDelegate> _delegate;
    _Bool _shouldShowIcon;
    _Bool _shouldShowChevron;
    _Bool _expanded;
    double _horizontalMargin;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)resourceKeys;
- (void)toggleExpanded;
@property(readonly, nonatomic) long long settingID;
- (id)initWithSetting:(id)arg1 consentParams:(id)arg2 delegate:(id)arg3 labelDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

