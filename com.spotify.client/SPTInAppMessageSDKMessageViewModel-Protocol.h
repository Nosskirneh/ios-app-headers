//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTInAppMessagePresenter, SPTInAppMessageSDKMessage;

@protocol SPTInAppMessageSDKMessageViewModel <NSObject>
@property(readonly, nonatomic) id <SPTInAppMessageSDKMessage> message;
- (void)loadViewForWidth:(double)arg1 presenter:(id <SPTInAppMessagePresenter>)arg2;
@end
