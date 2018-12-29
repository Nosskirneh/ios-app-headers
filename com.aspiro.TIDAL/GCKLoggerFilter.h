//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCKBLoggerFilter;

@interface GCKLoggerFilter : NSObject
{
    GCKBLoggerFilter *_pimpl;
}

- (void).cxx_destruct;
- (void)reset;
- (_Bool)matchesFunction:(id)arg1 message:(id)arg2;
- (void)addMessagePatterns:(id)arg1 caseInsensitive:(_Bool)arg2;
- (void)addMessagePatterns:(id)arg1;
- (void)addFunctionNames:(id)arg1 minimumLogLevel:(long long)arg2 highlightColor:(long long)arg3;
- (void)addFunctionNames:(id)arg1;
- (void)addClassNames:(id)arg1 minimumLogLevel:(long long)arg2 highlightColor:(long long)arg3;
- (void)addClassNames:(id)arg1;
@property(nonatomic) _Bool exclusive;
- (id)privateImpl;
- (id)init;

@end

