//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAdPool, NSData, NSString;

@protocol IMAdPoolDelegate <NSObject>
- (void)adPoolAdNotAvailableforAdPool:(IMAdPool *)arg1 withError:(int)arg2 andDescription:(NSString *)arg3;
- (void)adPoolAdAvailableforAdPool:(IMAdPool *)arg1;
- (void)adPoolAdReceivedForAdPool:(IMAdPool *)arg1;

@optional
- (struct CGRect)adPoolGetAdSizeForAdPool:(IMAdPool *)arg1;
- (void)adPool:(IMAdPool *)arg1 failedToGetSignalsWithError:(int)arg2 andDescription:(NSString *)arg3;
- (void)adPool:(IMAdPool *)arg1 gotSignals:(NSData *)arg2;
@end
