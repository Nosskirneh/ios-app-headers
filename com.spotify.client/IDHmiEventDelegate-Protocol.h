//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDHmiEvent, IDVariantMap;

@protocol IDHmiEventDelegate <NSObject>

@optional
- (void)handleHmiEvent:(IDHmiEvent *)arg1 info:(IDVariantMap *)arg2;
@end

