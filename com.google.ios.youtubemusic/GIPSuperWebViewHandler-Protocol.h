//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIPSuperWebViewController, NSString;

@protocol GIPSuperWebViewHandler <NSObject>
- (NSString *)javascript;
- (void)handleMethod:(NSString *)arg1 withArgs:(NSString *)arg2 fromSource:(GIPSuperWebViewController *)arg3;
@end
