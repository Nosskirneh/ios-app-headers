//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, YTICommand;
@protocol YTInstreamAdCtaRendererProtocol;

@protocol YTInstreamAdCtaViewProtocol <NSObject>
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) YTICommand *ctaClickTargetCommand;
@property(readonly, nonatomic) GPBMessage *ctaClickTargetRenderer;
- (void)populateViewFromRenderer:(id <YTInstreamAdCtaRendererProtocol>)arg1;
- (void)addUserDidTapCallToActionTarget:(id)arg1 action:(SEL)arg2;
- (void)visualStateDidChangeToState:(int)arg1 animate:(_Bool)arg2;
@end

