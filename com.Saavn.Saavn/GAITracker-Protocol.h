//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol GAITracker <NSObject>
@property(readonly, nonatomic) NSString *name;
- (void)send:(NSDictionary *)arg1;
- (NSString *)get:(NSString *)arg1;
- (void)set:(NSString *)arg1 value:(NSString *)arg2;
@end

