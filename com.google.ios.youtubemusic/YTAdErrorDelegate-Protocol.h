//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTVMAPAdBreak;
@protocol YTInstreamAd;

@protocol YTAdErrorDelegate <NSObject>

@optional
- (void)didGeneratePartialAd:(id <YTInstreamAd>)arg1 adBreak:(YTVMAPAdBreak *)arg2 reason:(NSError *)arg3;
@end

