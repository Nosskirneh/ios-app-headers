//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface INSExponentialBackoff : NSObject
{
}

+ (double)randomDoubleBetween:(double)arg1 high:(double)arg2;
+ (double)exponentialBackoff:(double)arg1 jitter:(float)arg2 attempt:(unsigned long long)arg3;

@end

