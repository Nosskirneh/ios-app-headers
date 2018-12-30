//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface RLMSyncManager : NSObject
{
    NSNumber *_globalSSLValidationDisabled;
    CDUnknownBlockType _errorHandler;
    NSString *_appID;
    CDUnknownBlockType _sessionCompletionNotifier;
}

+ (void)resetForTesting;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType sessionCompletionNotifier; // @synthesize sessionCompletionNotifier=_sessionCompletionNotifier;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void).cxx_destruct;
- (id)_allUsers;
- (void)_fireErrorWithCode:(int)arg1 message:(id)arg2 isFatal:(_Bool)arg3 session:(id)arg4 userInfo:(id)arg5 errorClass:(unsigned long long)arg6;
- (void)_fireError:(id)arg1;
@property(nonatomic) unsigned long long logLevel;
@property(nonatomic) _Bool disableSSLValidation;
@property(retain, nonatomic) NSNumber *globalSSLValidationDisabled; // @synthesize globalSSLValidationDisabled=_globalSSLValidationDisabled;
- (id)initWithCustomRootDirectory:(id)arg1;

@end

