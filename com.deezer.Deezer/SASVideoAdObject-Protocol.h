//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SASReward, UIColor;

@protocol SASVideoAdObject <NSObject>
- (void)addAdFailPixelURL:(NSURL *)arg1;
- (NSArray *)adObjectAdFailPixelURLs;
- (_Bool)adObjectShouldDisplayCompletionHTMLLayer;
- (void)adObjectDidConsumeReward;
- (SASReward *)adObjectRewardForCompletion;
- (_Bool)adObjectShouldRewardOnCompletion;
- (float)adObjectBlurBackgroundSizeHighSetting;
- (float)adObjectBlurBackgroundSizeLowSetting;
- (float)adObjectBlurBackgroundSkipHighSetting;
- (float)adObjectBlurBackgroundSkipLowSetting;
- (UIColor *)adObjectBlurTintColor;
- (float)adObjectBlurRadius;
- (_Bool)adObjectShouldBlurBackground;
- (_Bool)adObjectHas360Video;
- (long long)adObjectAudioMode;
- (NSString *)adObjectCallToActionText;
- (long long)adObjectCallToActionType;
- (NSString *)adObjectPosterOffset;
- (NSURL *)adObjectPosterImageURL;
- (_Bool)adObjectHasPosterImage;
- (NSURL *)adObjectBackgroundClickTrackingURL;
- (NSURL *)adObjectBackgroundImpressionURL;
- (NSURL *)adObjectBackgroundClickURL;
- (long long)adObjectBackgroundResizeMode;
- (NSURL *)adObjectBackgroundImageURL;
- (_Bool)adObjectHasBackgroundImage;
- (UIColor *)adObjectBackgroundColor;
- (struct CGSize)adObjectVideoSize;
- (long long)adObjectVideoPosition;
- (NSString *)adObjectProgressOffsetEventTime;
- (NSDictionary *)adObjectTrackEvents;
- (_Bool)adObjectSticksToTop;
- (_Bool)adObjectCanSwipeToClose;
- (float)adObjectSkippableDelay;
- (long long)adObjectSkipPosition;
- (long long)adObjectIsSkippable;
- (_Bool)adObjectShouldAutocloseAfterPlaybackCompletion;
- (_Bool)adObjectShouldRestartOnEnteringFullscreen;
- (_Bool)adObjectShouldAutoplay;
- (NSURL *)adObjectClickURL;
- (_Bool)adObjectHasClickURL;
- (NSURL *)adObjectVideoURL;
@end
