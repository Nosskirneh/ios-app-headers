//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UITextView, YTLabel;

@interface YTAdsSettingsTextView : UIView
{
    UITextView *_settingsTextField;
    YTLabel *_titleLabel;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *settingsText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

