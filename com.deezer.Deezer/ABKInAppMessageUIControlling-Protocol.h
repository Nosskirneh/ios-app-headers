//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABKInAppMessage;

@protocol ABKInAppMessageUIControlling <NSObject>

@optional
- (_Bool)inAppMessageCurrentlyVisible;
- (void)showInAppMessage:(ABKInAppMessage *)arg1;
- (long long)getCurrentDisplayChoiceForInAppMessage:(ABKInAppMessage *)arg1;
- (void)hideCurrentInAppMessage:(_Bool)arg1;
- (void)setInAppMessageUIDelegate:(id)arg1;
@end
