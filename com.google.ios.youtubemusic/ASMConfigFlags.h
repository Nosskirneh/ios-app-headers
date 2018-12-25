//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASMConfigFlags : NSObject
{
    _Bool _prefetchingEnabled;
    double _screenMaxLifetime;
    double _stableScreenStaleTime;
    double _unstableScreenStaleTime;
    NSArray *_webviewWhitelistedURLPatterns;
    NSArray *_webviewBlacklistedURLPatterns;
    NSArray *_webviewBrowserAuthWhitelistedURLPatterns;
    NSArray *_webviewBrowserAuthBlacklistedURLPatterns;
    NSArray *_webviewDefaultJSBridgeWhitelistedURLPatterns;
    NSArray *_webviewDefaultJSBridgeBlacklistedURLPatterns;
    NSArray *_webviewUDCJSBridgeWhitelistedURLPatterns;
    NSArray *_webviewUDCJSBridgeBlacklistedURLPatterns;
}

+ (id)flagsFromGetClientConfigResponse:(id)arg1;
+ (id)flagsFromDictionary:(id)arg1;
+ (id)defaultFlags;
@property(retain, nonatomic) NSArray *webviewUDCJSBridgeBlacklistedURLPatterns; // @synthesize webviewUDCJSBridgeBlacklistedURLPatterns=_webviewUDCJSBridgeBlacklistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewUDCJSBridgeWhitelistedURLPatterns; // @synthesize webviewUDCJSBridgeWhitelistedURLPatterns=_webviewUDCJSBridgeWhitelistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJSBridgeBlacklistedURLPatterns; // @synthesize webviewDefaultJSBridgeBlacklistedURLPatterns=_webviewDefaultJSBridgeBlacklistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJSBridgeWhitelistedURLPatterns; // @synthesize webviewDefaultJSBridgeWhitelistedURLPatterns=_webviewDefaultJSBridgeWhitelistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthBlacklistedURLPatterns; // @synthesize webviewBrowserAuthBlacklistedURLPatterns=_webviewBrowserAuthBlacklistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthWhitelistedURLPatterns; // @synthesize webviewBrowserAuthWhitelistedURLPatterns=_webviewBrowserAuthWhitelistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewBlacklistedURLPatterns; // @synthesize webviewBlacklistedURLPatterns=_webviewBlacklistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewWhitelistedURLPatterns; // @synthesize webviewWhitelistedURLPatterns=_webviewWhitelistedURLPatterns;
@property(nonatomic) double unstableScreenStaleTime; // @synthesize unstableScreenStaleTime=_unstableScreenStaleTime;
@property(nonatomic) double stableScreenStaleTime; // @synthesize stableScreenStaleTime=_stableScreenStaleTime;
@property(nonatomic) double screenMaxLifetime; // @synthesize screenMaxLifetime=_screenMaxLifetime;
@property(nonatomic) _Bool prefetchingEnabled; // @synthesize prefetchingEnabled=_prefetchingEnabled;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end

