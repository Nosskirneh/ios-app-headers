//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIMModule-Protocol.h"

@class NSArray, NSString;

@interface GIMCombinedModule : NSObject <GIMModule>
{
    NSArray *_modules;
}

+ (id)moduleWithModules:(id)arg1;
- (void).cxx_destruct;
- (void)configureWithBinder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

