//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, YTICommand;
@protocol YTResponder;

@protocol YTCommandHandler <NSObject>
- (void)executeWithCommand:(YTICommand *)arg1 entry:(id)arg2 fromView:(UIView *)arg3 sender:(id <YTResponder>)arg4;

@optional
- (void)executeWithCommand:(YTICommand *)arg1 entry:(id)arg2 fromView:(UIView *)arg3 sender:(id <YTResponder>)arg4 completionBlock:(void (^)(id, NSError *))arg5;
@end
