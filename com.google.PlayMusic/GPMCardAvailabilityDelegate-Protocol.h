//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath;

@protocol GPMCardAvailabilityDelegate
- (_Bool)shouldGrayOutUnplayableContent;
- (void)checkAvailabilityForIndexPath:(NSIndexPath *)arg1 withCompletion:(void (^)(unsigned long long))arg2;
@end

