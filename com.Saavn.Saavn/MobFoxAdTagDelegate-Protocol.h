//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MobFoxTagAd, NSError;

@protocol MobFoxAdTagDelegate <NSObject>

@optional
- (void)MobFoxTagAdClicked;
- (void)MobFoxTagAdDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)MobFoxTagAdDidLoad:(MobFoxTagAd *)arg1;
@end
