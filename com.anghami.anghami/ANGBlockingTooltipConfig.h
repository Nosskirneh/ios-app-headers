//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSDate, NSString, UIImage, UIView;

@interface ANGBlockingTooltipConfig : RLMObject
{
    _Bool _reportamplitude;
    _Bool _keepSender;
    _Bool _shouldDismissOnTapOutside;
    NSString *_configId;
    NSString *_name;
    NSString *_title;
    NSString *_text;
    NSString *_imageurl;
    NSString *_secondButtonText;
    NSString *_secondButtonUrl;
    NSString *_mainButtonText;
    NSString *_mainButtonUrl;
    long long _freqdays;
    NSDate *_lastShownDate;
    NSString *_dictionaryResponseString;
    long long _maxPer;
    UIView *_originSender;
    UIImage *_originImage;
    UIView *_originView;
    long long _tooltipDirection;
    struct CGRect _originFrame;
}

+ (id)ignoredProperties;
@property(nonatomic) _Bool shouldDismissOnTapOutside; // @synthesize shouldDismissOnTapOutside=_shouldDismissOnTapOutside;
@property(nonatomic) long long tooltipDirection; // @synthesize tooltipDirection=_tooltipDirection;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool keepSender; // @synthesize keepSender=_keepSender;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(retain, nonatomic) UIView *originSender; // @synthesize originSender=_originSender;
@property(nonatomic) long long maxPer; // @synthesize maxPer=_maxPer;
@property(retain, nonatomic) NSString *dictionaryResponseString; // @synthesize dictionaryResponseString=_dictionaryResponseString;
@property(retain, nonatomic) NSDate *lastShownDate; // @synthesize lastShownDate=_lastShownDate;
@property(nonatomic) _Bool reportamplitude; // @synthesize reportamplitude=_reportamplitude;
@property(nonatomic) long long freqdays; // @synthesize freqdays=_freqdays;
@property(retain, nonatomic) NSString *mainButtonUrl; // @synthesize mainButtonUrl=_mainButtonUrl;
@property(retain, nonatomic) NSString *mainButtonText; // @synthesize mainButtonText=_mainButtonText;
@property(retain, nonatomic) NSString *secondButtonUrl; // @synthesize secondButtonUrl=_secondButtonUrl;
@property(retain, nonatomic) NSString *secondButtonText; // @synthesize secondButtonText=_secondButtonText;
@property(retain, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *configId; // @synthesize configId=_configId;
- (void).cxx_destruct;
- (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
- (_Bool)shouldShowTooltipBasedOnFreqDays;
- (_Bool)shouldShowTooltipBasedOnPerMax;
- (_Bool)shouldShowTooltip;
- (void)forceRemoveButtonsAndImage;
- (long long)getDirection;
- (void)setNowAsLastShowDate;
- (_Bool)hasImage;
- (id)getDictionaryFromStringResponse;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 andMaxPer:(id)arg2;

@end
