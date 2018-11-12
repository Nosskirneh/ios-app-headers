//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SASVASTTrackingEvent;

@protocol SASVASTCompliantObject <NSObject>
- (void)setBackgroundCompanionImpressionURL:(NSURL *)arg1;
- (void)setBackgroundCompanionURL:(NSURL *)arg1;
- (void)setBackgroundImageClickTrackingURL:(NSURL *)arg1;
- (void)setBackgroundImageClickURL:(NSURL *)arg1;
- (_Bool)shouldSearchForBackgroundCompanion;
- (void)addVASTTrackingEvent:(SASVASTTrackingEvent *)arg1;
- (void)addCallToActionType:(long long)arg1;
- (void)setClickURL:(NSURL *)arg1;
- (void)addImpressionPixels:(NSArray *)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setVASTParameters:(NSString *)arg1;
- (void)setVPAIDState:(_Bool)arg1;
- (void)setSkipDelay:(float)arg1;
- (void)setSkippableState:(_Bool)arg1;
- (void)setMediaSourceURL:(NSURL *)arg1;
- (long long)hasCallToActionType;
- (struct CGSize)programmedVideoSize;
- (NSString *)completeVASTMarkup;
- (long long)videoSkipPolicy;
- (_Bool)hasClickURL;
- (_Bool)containsVASTMarkup;
@end
