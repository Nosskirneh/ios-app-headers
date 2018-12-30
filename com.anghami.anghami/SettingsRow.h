//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIFont, UIImage;

@interface SettingsRow : NSObject
{
    _Bool _hideSeparator;
    _Bool _hasSlider;
    _Bool _isAudioQualityRow;
    _Bool _isCheckMarkSelected;
    _Bool _isHighlighted;
    _Bool _isEnabled;
    _Bool _isSwitchEnabled;
    _Bool _isSwitchOn;
    long long _type;
    CDUnknownBlockType _cellCompletion;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    UIColor *_titleColor;
    UIImage *_image;
    NSString *_subtitle;
    NSString *_rightLabel;
    UIFont *_titleFont;
    NSString *_identifier;
    double _sliderValue;
    double _sliderMinValue;
    double _sliderMaxValue;
    NSString *_sliderMinLabel;
    NSString *_sliderMaxLabel;
}

@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(nonatomic) _Bool isSwitchEnabled; // @synthesize isSwitchEnabled=_isSwitchEnabled;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) _Bool isCheckMarkSelected; // @synthesize isCheckMarkSelected=_isCheckMarkSelected;
@property(retain, nonatomic) NSString *sliderMaxLabel; // @synthesize sliderMaxLabel=_sliderMaxLabel;
@property(retain, nonatomic) NSString *sliderMinLabel; // @synthesize sliderMinLabel=_sliderMinLabel;
@property(nonatomic) double sliderMaxValue; // @synthesize sliderMaxValue=_sliderMaxValue;
@property(nonatomic) double sliderMinValue; // @synthesize sliderMinValue=_sliderMinValue;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(nonatomic) _Bool isAudioQualityRow; // @synthesize isAudioQualityRow=_isAudioQualityRow;
@property(nonatomic) _Bool hasSlider; // @synthesize hasSlider=_hasSlider;
@property(nonatomic) _Bool hideSeparator; // @synthesize hideSeparator=_hideSeparator;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType cellCompletion; // @synthesize cellCompletion=_cellCompletion;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end
