//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol ELMContext;

@interface ELMHotReloadMonitor : NSObject
{
    NSURL *_manifestURL;
    id <ELMContext> _context;
    _Bool _running;
    struct unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _hashCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: {HotReloadManifestRequest=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::HotReloadManifestRequestEntry>=^{Arena}ii^{Rep}}}16@0:8, name: buildRequestPayload
- (void)enqueueFetchManifest;
- (void)fetchManifest;
- (void)processResponse:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithBaseURL:(id)arg1 context:(id)arg2;

@end
