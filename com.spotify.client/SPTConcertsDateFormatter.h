//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface SPTConcertsDateFormatter : NSObject
{
    NSCache *_cache;
}

@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)fullCacheKeyForBaseKey:(id)arg1 locale:(id)arg2 timeZone:(id)arg3;
- (id)dateFormatterForCacheKey:(id)arg1 creator:(CDUnknownBlockType)arg2;
- (id)concertRowMetadataDateFormatter;
- (id)subtitleDateRangeDateFormatter;
- (id)subtitleSingleDateDateFormatter;
- (id)shortTimeStyleDateFormatter;
- (id)shortDateStyleDateFormatter;
- (id)monthTextDateFormatter;
- (id)backendDateFormatter;
- (id)init;

@end

