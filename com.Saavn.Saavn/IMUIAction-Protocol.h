//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView;

@protocol IMUIAction <NSObject>

@optional
- (void)timerExpired:(NSString *)arg1;
- (void)view:(UIView *)arg1 clicked:(NSDictionary *)arg2;
@end

