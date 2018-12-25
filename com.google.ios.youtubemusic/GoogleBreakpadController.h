//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BreakpadController.h"

#import "GIPPseudonymousIDObserver-Protocol.h"

@interface GoogleBreakpadController : BreakpadController <GIPPseudonymousIDObserver>
{
}

+ (id)sharedInstance;
- (void)pseudonymousIDDidReset:(id)arg1;
- (void)useStagingServer:(_Bool)arg1;
- (id)initSingleton;
- (void)yt_addUploadParameterWithKey:(id)arg1 value:(id)arg2 breakpadRef:(void *)arg3;
- (void)yt_removeUploadParameterWithKey:(id)arg1 breakpadRef:(void *)arg2;
- (int)yt_getCrashReportCountForBreakpadRef:(void *)arg1;

@end

