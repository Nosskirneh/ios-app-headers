//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIViewController;

@protocol SPTHomeCacheRenderDelegate <NSObject>
- (void)viewController:(UIViewController *)arg1 failedToLoadCacheWithError:(NSError *)arg2;
- (void)viewControllerDidRenderCache:(UIViewController *)arg1;
@end

