//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LauncherRegistering-Protocol.h"

@class NSMutableDictionary, NSString;

@interface LauncherRegistry : NSObject <LauncherRegistering>
{
    NSMutableDictionary *_launcherClasses;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *launcherClasses; // @synthesize launcherClasses=_launcherClasses;
- (void).cxx_destruct;
- (void)registerLauncherClass:(Class)arg1 forCollection:(id)arg2;
- (id)launcherForEntityUrn:(id)arg1;
- (id)initLauncherRegistry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

