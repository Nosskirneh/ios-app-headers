//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol VOXSearchSourceDelegate <NSObject>
- (void)sourceDidChangeState;

@optional
- (void)sourceReplenished:(NSArray *)arg1 sourceType:(unsigned long long)arg2;
- (void)sourceUpdatedWithType:(unsigned long long)arg1;
@end

