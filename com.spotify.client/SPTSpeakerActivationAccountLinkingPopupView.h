//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPopupContainerView.h"

@class NSString, UIImageView, UILabel, UIStackView;

@interface SPTSpeakerActivationAccountLinkingPopupView : SPTPopupContainerView
{
    UIStackView *_stackView;
    UILabel *_listeningOnDeviceLabel;
    UILabel *_popupTitleLabel;
    UIImageView *_deviceImageView;
    UILabel *_popupSubtitleLabel;
    unsigned long long _deviceType;
    NSString *_deviceName;
}

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) UILabel *popupSubtitleLabel; // @synthesize popupSubtitleLabel=_popupSubtitleLabel;
@property(retain, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(retain, nonatomic) UILabel *popupTitleLabel; // @synthesize popupTitleLabel=_popupTitleLabel;
@property(retain, nonatomic) UILabel *listeningOnDeviceLabel; // @synthesize listeningOnDeviceLabel=_listeningOnDeviceLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (id)deviceTypeImage;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
