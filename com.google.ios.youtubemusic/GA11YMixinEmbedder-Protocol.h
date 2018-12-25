//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GA11YMixin-Protocol.h"

@class NSArray, NSString;
@protocol GA11YMixinImpl;

@protocol GA11YMixinEmbedder <GA11YMixin>
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin;
- (NSArray *)accessibilityCustomActions;
- (NSArray *)accessibleViews;
- (NSString *)accessibilityHint;
- (NSString *)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
@end

