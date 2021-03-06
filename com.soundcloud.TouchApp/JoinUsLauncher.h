//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Launcher-Protocol.h"

@class NSString;
@protocol SafariLauncher;

@interface JoinUsLauncher : NSObject <Launcher>
{
    id <SafariLauncher> _safariLauncher;
}

@property(readonly, nonatomic) id <SafariLauncher> safariLauncher; // @synthesize safariLauncher=_safariLauncher;
- (void).cxx_destruct;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSafariLauncher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

