//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ValueAggregator-Protocol.h"

@class NSMutableDictionary;

@interface MostCommonValueAggregator : NSObject <ValueAggregator>
{
    NSMutableDictionary *_valueCountMap;
}

- (void).cxx_destruct;
- (id)aggregateValue;
- (void)putValue:(id)arg1;
- (id)init;

@end

