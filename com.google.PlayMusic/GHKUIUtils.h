//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKConfig, GHKReceiverConfig, SUPMetricsReporter;

@interface GHKUIUtils : NSObject
{
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
}

+ (id)appBarFromConfig:(id)arg1 titleAlignment:(long long)arg2;
+ (void)disableDoubleTapGesturesForScrollView:(id)arg1;
+ (void)setFadeTransitionForNavigationController:(id)arg1 delegate:(id)arg2 duration:(double)arg3;
+ (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)tintImage:(id)arg1 Color:(id)arg2;
+ (double)contentViewHeaderHeight;
+ (double)minimumTextLineHeight;
+ (long long)contentViewObjectSubtitleLines;
+ (long long)contentViewObjectTitleLines;
+ (double)sectionShadowWidth;
+ (struct UIEdgeInsets)contentViewMultilineTextFieldObjectPaddingTextAligned;
+ (struct UIEdgeInsets)contentViewMultilineTextFieldObjectPadding;
+ (struct UIEdgeInsets)contentViewTextFieldObjectPadding;
+ (struct UIEdgeInsets)contentViewObjectPadding;
+ (struct UIEdgeInsets)headerContentViewObjectPadding;
+ (id)submitBarButtonWithColor:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)backBarButtonWithColor:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)objectionRequires;
+ (void)initialize;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)init;

@end
