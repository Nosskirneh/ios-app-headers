//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ANGGeneralFreeBar : NSObject
{
    NSString *_freeBarDeeplink;
    NSString *_freeBarColor;
    NSString *_freeBarColor2;
    NSString *_freeBarTitle;
    NSString *_displayType;
    NSString *_alignment;
    NSString *_image;
    NSString *_barBgImage;
    NSString *_innerText;
    NSString *_freeBarButton;
    NSString *_freeBarPrice;
    NSString *_freeBarStrikedPrice;
}

@property(retain, nonatomic) NSString *freeBarStrikedPrice; // @synthesize freeBarStrikedPrice=_freeBarStrikedPrice;
@property(retain, nonatomic) NSString *freeBarPrice; // @synthesize freeBarPrice=_freeBarPrice;
@property(retain, nonatomic) NSString *freeBarButton; // @synthesize freeBarButton=_freeBarButton;
@property(retain, nonatomic) NSString *innerText; // @synthesize innerText=_innerText;
@property(retain, nonatomic) NSString *barBgImage; // @synthesize barBgImage=_barBgImage;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *freeBarTitle; // @synthesize freeBarTitle=_freeBarTitle;
@property(retain, nonatomic) NSString *freeBarColor2; // @synthesize freeBarColor2=_freeBarColor2;
@property(retain, nonatomic) NSString *freeBarColor; // @synthesize freeBarColor=_freeBarColor;
@property(retain, nonatomic) NSString *freeBarDeeplink; // @synthesize freeBarDeeplink=_freeBarDeeplink;
- (void).cxx_destruct;
- (id)getHeaderDictionayFromArray:(id)arg1 forDisplayType:(id)arg2;
- (id)getBarBackgroundColor;
- (id)getBarBackgroundGradientColors;
- (_Bool)barHasGradientBackgroundColor;
@property(readonly, nonatomic) _Bool canShowExpandedFreeBar;
@property(readonly, nonatomic) _Bool canShowFreeBar;
- (id)objectData;
- (id)reportingApi;
- (id)reportingAmplitude;
- (id)getTimerEndValueFromTimer:(id)arg1;
- (long long)reloadTimeInterval;
- (_Bool)dateIsPassed:(id)arg1;
- (_Bool)timerEndIsValid;
- (id)timerEnd;
- (id)freeBarDisplayType;
- (id)freeBarId;
- (id)objectId;
- (id)getDictionaryForKey:(id)arg1;
- (id)getValueForKey:(id)arg1;
- (id)getFreeBarGroupDictionary;

@end

