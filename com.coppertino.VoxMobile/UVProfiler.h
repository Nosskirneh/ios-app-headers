//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface UVProfiler : NSObject
{
    NSMutableDictionary *benchmarks;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clearData;
- (id)toJson;
- (id)getBenchmark:(id)arg1;
- (id)init;

@end
