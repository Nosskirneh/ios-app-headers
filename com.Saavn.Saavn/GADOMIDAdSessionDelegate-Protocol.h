//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOMIDAdSession, UIView;

@protocol GADOMIDAdSessionDelegate <NSObject>
- (void)adSession:(GADOMIDAdSession *)arg1 didRegisterAdView:(UIView *)arg2;
- (void)adSessionDidFinish:(GADOMIDAdSession *)arg1;
- (void)adSessionDidStart:(GADOMIDAdSession *)arg1;
@end

